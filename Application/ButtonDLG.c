/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.12                          *
*        Compiled Jun 29 2011, 15:28:47                              *
*        (c) 2011 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_BUTTON_0 (GUI_ID_USER + 0x03)
#define ID_BUTTON_1 (GUI_ID_USER + 0x04)
#define ID_BUTTON_2 (GUI_ID_USER + 0x05)
#define ID_PROGBAR_0 (GUI_ID_USER + 0x06)
#define ID_BUTTON_3 (GUI_ID_USER + 0x07)
#define ID_BUTTON_4 (GUI_ID_USER + 0x08)
#define ID_BUTTON_5 (GUI_ID_USER + 0x09)
#define ID_BUTTON_6 (GUI_ID_USER + 0x0A)
#define ID_BUTTON_7 (GUI_ID_USER + 0x0B)
#define ID_BUTTON_8 (GUI_ID_USER + 0x0C)
#define ID_BUTTON_9 (GUI_ID_USER + 0x0D)
#define ID_BUTTON_10 (GUI_ID_USER + 0x0E)
#define ID_BUTTON_11 (GUI_ID_USER + 0x0F)
#define ID_BUTTON_12 (GUI_ID_USER + 0x10)
#define ID_BUTTON_13 (GUI_ID_USER + 0x11)
#define ID_BUTTON_14 (GUI_ID_USER + 0x12)
#define ID_BUTTON_15 (GUI_ID_USER + 0x13)
#define ID_BUTTON_16 (GUI_ID_USER + 0x14)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 800, 480, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_0, 115, 200, 100, 35, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_1, 110, 279, 120, 40, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_2, 110, 343, 120, 40, 0, 0, 0 },
  { PROGBAR_CreateIndirect, "Progbar", ID_PROGBAR_0, 300, 41, 200, 30, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_3, 116, 150, 100, 35, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_4, 230, 200, 100, 35, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_5, 5, 200, 100, 35, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_6, 280, 320, 80, 20, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_7, 360, 360, 80, 20, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_8, 360, 400, 80, 20, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_9, 360, 440, 80, 20, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_10, 633, 421, 160, 50, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_11, 9, 421, 160, 50, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_12, 340, 200, 120, 40, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_13, 360, 320, 80, 20, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_14, 440, 320, 80, 20, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_15, 480, 200, 120, 40, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_16, 620, 200, 120, 40, 0, 0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem,hDlg;
  int Id, NCode;
  // USER START (Optionally insert additional variables)
  hDlg = pMsg->hWin;
  static int val = 0;
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
    hItem = pMsg->hWin;
    WINDOW_SetBkColor(hItem, 0x00B89C47);
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetFont(hItem, GUI_FONT_20_ASCII);
    BUTTON_SetText(hItem, "100x35");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetFont(hItem, GUI_FONT_20B_1);
    BUTTON_SetText(hItem, "120x40");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_2);
    BUTTON_SetFont(hItem, GUI_FONT_20B_ASCII);
    BUTTON_SetText(hItem, "120x40");
    //
    // Initialization of 'Progbar'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_0);
    PROGBAR_SetFont(hItem, GUI_FONT_8X18);
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_3);
    BUTTON_SetFont(hItem, GUI_FONT_20_ASCII);
    BUTTON_SetText(hItem, "Up");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_4);
    BUTTON_SetFont(hItem, GUI_FONT_20_ASCII);
    BUTTON_SetText(hItem, "Right");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_5);
    BUTTON_SetFont(hItem, GUI_FONT_20_ASCII);
    BUTTON_SetText(hItem, "Left");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_6);
    BUTTON_SetText(hItem, "Default");

	hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_7);
	BUTTON_SetText(hItem, "Red");
	hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_8);
	BUTTON_SetText(hItem, "Blue");
	hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_9);
	BUTTON_SetText(hItem, "Yellow");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_10);
    BUTTON_SetFont(hItem, GUI_FONT_32_ASCII);
    BUTTON_SetText(hItem, "100%");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_11);
    BUTTON_SetFont(hItem, GUI_FONT_32_ASCII);
    BUTTON_SetText(hItem, "0%");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_12);
    BUTTON_SetFont(hItem, GUI_FONT_24_ASCII);
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_13);
    BUTTON_SetText(hItem, "Next");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_14);
    BUTTON_SetText(hItem, "Cancel");
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_15);
    BUTTON_SetFont(hItem, GUI_FONT_24_ASCII);
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_16);
    BUTTON_SetFont(hItem, GUI_FONT_24_ASCII);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  val = 25;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_2: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_3: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_4: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  if (val >= 100) val = 100;
		  val += 5;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_5: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  if (val <= 0) val = 0;
		  val -= 5;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_6: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  if (val <= 0) val = 0;
		  val -= 1;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_7: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  PROGBAR_SetBarColor(hItem, 0, GUI_RED);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_8: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  PROGBAR_SetBarColor(hItem, 0, GUI_BLUE);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_9: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  PROGBAR_SetBarColor(hItem, 0, GUI_YELLOW);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_10: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  val = 100;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_11: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  val = 0;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_12: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  if (val >= 100) val = 100;
		  val += 10;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_13: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  val = 50;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_14: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  if (val >= 100) val = 100;
		  val += 1;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_15: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  val = 75;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_16: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(hDlg, ID_PROGBAR_0);
		  if (val <= 0) val = 0;
		  val -= 10;
		  PROGBAR_SetValue(hItem, val);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
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
*       CreateWindow
*/
WM_HWIN CreateWindow(void);
WM_HWIN CreateWindow(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), &_cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
void MainTask(void);
void MainTask(void) {
	GUI_Init();

	CreateWindow();
	while (1) {
		GUI_Delay(200);
	}
}
// USER END

/*************************** End of file ****************************/
