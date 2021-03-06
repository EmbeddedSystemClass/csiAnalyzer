#include "DIALOG.h"
#include <math.h>
/*********************************************************************
*
*       Externals
*
**********************************************************************
*/

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0     (GUI_ID_USER + 0x00)
#define ID_GRAPH_0      (GUI_ID_USER + 0x01)

#define MESSAGE_STARTSTOP  (WM_USER + 0x00)
#define E 2.718

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

static int Value = 300;
/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
	{ WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 800, 480, 0, 0x0, 0 },
	{ GRAPH_CreateIndirect, "Graph", ID_GRAPH_0, 10, 10, 780, 450, 0, 0x0, 0 },
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
static void _UserDraw(WM_HWIN hWin, int Stage) {
	if (Stage == GRAPH_DRAW_LAST) {
		char acText[] = "Temperature (deg C)";
		GUI_RECT Rect, RectInvalid;
		int FontSizeY;
		GUI_SetFont(&GUI_Font24_ASCII);
		FontSizeY = GUI_GetFontSizeY();
		WM_GetInsideRect(&Rect);
		WM_GetInvalidRect(hWin, &RectInvalid);
		Rect.x1 = Rect.x0 + FontSizeY;
		GUI_SetColor(GUI_BLUE);
		GUI_DispStringInRectEx(acText, &Rect, GUI_TA_HCENTER, strlen(acText), GUI_ROTATE_CCW);
		GUI_DispStringHCenterAt("Time (s)", 400, 420);
	}
}
/*

static void _UserDraw1(WM_HWIN hWin, int Stage) {
	if (Stage == GRAPH_DRAW_LAST) {
		char acText[] = "Time";
		GUI_RECT Rect, RectInvalid;
		int FontSizeY;
		GUI_SetFont(&GUI_Font24_ASCII);
		FontSizeY = GUI_GetFontSizeY();
		WM_GetInsideRect(&Rect);
		WM_GetInvalidRect(hWin, &RectInvalid);
		Rect.y1 = Rect.y0 + 200 - FontSizeY;
		GUI_SetColor(GUI_BLUE);
		GUI_DispStringInRectEx(acText, &Rect, GUI_TA_CENTER, strlen(acText), GUI_ROTATE_0);
	}
}*/
/*********************************************************************
*
*       _cbGraph
*/
static void _cbGraph(WM_MESSAGE * pMsg) {
	GUI_PID_STATE * pState;
	static int Pressed;
	WM_HWIN hWin;

	switch (pMsg->MsgId) {
	case WM_TOUCH:
		pState = (GUI_PID_STATE *)pMsg->Data.p;
		if (pState) {
			if (pState->Pressed) {
				Pressed = 1;
			}
			else {
				if (Pressed) {
					Pressed = 0;
					//
					// If released send start stop message to the parent
					//
					hWin = WM_GetParent(pMsg->hWin);
					WM_SendMessageNoPara(hWin, MESSAGE_STARTSTOP);
				}
			}
		}
		break;
	default:
		GRAPH_Callback(pMsg);
		break;
	}
}

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
	WM_HWIN hItem;
	int NumItems;
	static GRAPH_DATA_Handle hDataSin, hDataCos;
	
	static int Angle;
	static int Stop;
	static WM_HTIMER hTimer;

	switch (pMsg->MsgId) {
	case WM_INIT_DIALOG:
		//
		// Initialization of 'Graph'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_GRAPH_0);
		//
		// Set a callback, it manages touch on the graph, if it gets touched it stops, another touch and it starts
		//
		WM_SetCallback(hItem, _cbGraph);
		//
		// Make the grid visible
		//
		GRAPH_SetGridVis(hItem, 1);
		//
		// Get x size, used as max num items
		//
		NumItems = WM_GetWindowSizeX(hItem);
		//
		// Create two data items, one for sin, one for cos
		//
		hDataSin = GRAPH_DATA_YT_Create(GUI_RED, NumItems, NULL, 0);
		//hDataCos = GRAPH_DATA_YT_Create(GUI_GREEN, NumItems, NULL, 0);
		//
		// Attach them to the GRAPH
		//
		GRAPH_AttachData(hItem, hDataSin);
		//GRAPH_AttachData(hItem, hDataCos);
		//
		// Create a timer which updates the GRAPH
		//
		hTimer = WM_CreateTimer(pMsg->hWin, 0, 10, 0);
		GRAPH_SCALE_Handle hScaleY,hScaleX;
		hScaleY = GRAPH_SCALE_Create(70, GUI_TA_RIGHT, GRAPH_SCALE_CF_VERTICAL, 50);
		GRAPH_SCALE_SetFont(hScaleY, GUI_FONT_24_ASCII);
		GRAPH_SCALE_SetTextColor(hScaleY, GUI_DARKCYAN);
		GRAPH_AttachScale(hItem, hScaleY);
	
		hScaleX = GRAPH_SCALE_Create(400, GUI_TA_CENTER, GRAPH_SCALE_CF_HORIZONTAL, 50);
		GRAPH_SCALE_SetFont(hScaleX, GUI_FONT_24_ASCII);
		GRAPH_SCALE_SetTextColor(hScaleX, GUI_DARKCYAN);
		GRAPH_AttachScale(hItem, hScaleX);
		GRAPH_SetBorder(hItem, 70, 0, 0, 50);
		GRAPH_SetUserDraw(hItem, _UserDraw);
		//GRAPH_SetUserDraw(hItem, _UserDraw1);
		//GRAPH_SetGridFixedX(hItem, 1);
		GRAPH_DATA_YT_SetAlign(hDataSin, GRAPH_ALIGN_LEFT);
		//GRAPH_SetAutoScrollbar(hItem,GUI_COORD_X ,1);
		break;
	case WM_TIMER:
		//
		// Depending on Stop, restart the graph
		//
		if (Stop == 0) {
			WM_RestartTimer(hTimer, 0);
		}
		
		
		if (Value >= 200) Angle = 0;
		if (Value <= 0) Angle = 1;
		if (Angle) Value++; 
		else	   Value--;

		GRAPH_DATA_YT_AddValue(hDataSin,Value);
		
		break;
	case MESSAGE_STARTSTOP:
		//
		// Start stop message send by the GRAPH
		//
		Stop ^= 1;
		if (Stop == 0) {
			WM_RestartTimer(hTimer, 0);
		}
		break;
	default:
		WM_DefaultProc(pMsg);
		break;
	}
}

/*********************************************************************
*
*       _cbBk
*/
static void _cbBk(WM_MESSAGE * pMsg) {
	switch (pMsg->MsgId) {
	case WM_PAINT:
		GUI_SetBkColor(GUI_BLACK);
		GUI_Clear();
		break;
	default:
		WM_DefaultProc(pMsg);
		break;
	}
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       MainTask
*/
void MainTask(void) {
	GUI_Init();
	WM_SetCallback(WM_HBKWIN, _cbBk);
	WM_SetCreateFlags(WM_CF_MEMDEV);
	WM_EnableMemdev(WM_HBKWIN);
	GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
	static double i = 1;
	while (1) {
		GUI_Delay(1000);
		//Value = 100+Value*sin(i);
		//i = i + 1;
	}
}
