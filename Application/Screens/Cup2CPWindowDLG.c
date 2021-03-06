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

#include "Cup2CPWindowDLG.h"
#include "../Controller.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/

#define ID_WINDOW_0     (GUI_ID_USER + 0x00)
#define ID_TEXT_0     (GUI_ID_USER + 0x01)
#define ID_TEXT_1     (GUI_ID_USER + 0x02)
#define ID_SLIDER_0     (GUI_ID_USER + 0x03)
#define ID_TEXT_2     (GUI_ID_USER + 0x04)
#define ID_BUTTON_0     (GUI_ID_USER + 0x05)
#define ID_BUTTON_1     (GUI_ID_USER + 0x06)
#define ID_SLIDER_1     (GUI_ID_USER + 0x07)
#define ID_TEXT_3     (GUI_ID_USER + 0x08)
#define ID_TEXT_4     (GUI_ID_USER + 0x09)
#define ID_TEXT_5     (GUI_ID_USER + 0x0A)
#define ID_SLIDER_2     (GUI_ID_USER + 0x0B)
#define ID_SLIDER_3     (GUI_ID_USER + 0x0C)
#define ID_TEXT_6     (GUI_ID_USER + 0x0D)
#define ID_TEXT_7     (GUI_ID_USER + 0x0E)
#define ID_TEXT_8     (GUI_ID_USER + 0x0F)
#define ID_TEXT_9     (GUI_ID_USER + 0x10)
#define ID_TEXT_10     (GUI_ID_USER + 0x11)
#define ID_TEXT_11     (GUI_ID_USER + 0x12)
#define ID_TEXT_12     (GUI_ID_USER + 0x13)
#define ID_TEXT_13     (GUI_ID_USER + 0x14)
#define ID_EDIT_0     (GUI_ID_USER + 0x15)
#define ID_EDIT_1     (GUI_ID_USER + 0x16)
#define ID_EDIT_2     (GUI_ID_USER + 0x17)
#define ID_EDIT_3     (GUI_ID_USER + 0x18)
#define ID_TEXT_14     (GUI_ID_USER + 0x19)
#define ID_SLIDER_4     (GUI_ID_USER + 0x1A)
#define ID_TEXT_15     (GUI_ID_USER + 0x1B)
#define ID_TEXT_16     (GUI_ID_USER + 0x1C)
#define ID_EDIT_4     (GUI_ID_USER + 0x1D)
#define ID_TEXT_17     (GUI_ID_USER + 0x1E)
#define ID_SLIDER_5     (GUI_ID_USER + 0x1F)
#define ID_TEXT_18     (GUI_ID_USER + 0x20)
#define ID_TEXT_19     (GUI_ID_USER + 0x21)
#define ID_EDIT_5     (GUI_ID_USER + 0x22)

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
  { WINDOW_CreateIndirect, "Cup2CPWindow", ID_WINDOW_0, 0, 0, 800, 480, 0, 0, 0 },
  { TEXT_CreateIndirect, "title", ID_TEXT_0, 100, 5, 600, 30, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_1, 42, 50, 315, 35, 0, 100, 0 },
  { SLIDER_CreateIndirect, "Slider", ID_SLIDER_0, 80, 120, 240, 35, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_2, 42, 171, 315, 35, 0, 100, 0 },
  { BUTTON_CreateIndirect, "Back", ID_BUTTON_0, 5, 390, 120, 40, 0, 0, 0 },
  { BUTTON_CreateIndirect, "Save", ID_BUTTON_1, 675, 390, 120, 40, 0, 0, 0 },
  { SLIDER_CreateIndirect, "Slider", ID_SLIDER_1, 80, 225, 240, 35, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_3, 480, 50, 250, 35, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_4, 480, 170, 250, 35, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_5, 100, 440, 600, 30, 0, 100, 0 },
  { SLIDER_CreateIndirect, "Slider", ID_SLIDER_2, 480, 120, 240, 35, 0, 0, 0 },
  { SLIDER_CreateIndirect, "Slider", ID_SLIDER_3, 480, 230, 240, 35, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_6, 66, 94, 40, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_7, 304, 94, 40, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_8, 66, 202, 80, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_9, 304, 202, 80, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_10, 473, 94, 80, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_11, 473, 207, 80, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_12, 702, 94, 80, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_13, 702, 207, 80, 20, 0, 100, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_0, 334, 128, 50, 25, 0, 100, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_1, 334, 233, 55, 25, 0, 100, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_2, 738, 128, 50, 25, 0, 100, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_3, 738, 238, 55, 25, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_14, 42, 274, 315, 35, 0, 100, 0 },
  { SLIDER_CreateIndirect, "Slider", ID_SLIDER_4, 80, 330, 240, 35, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_15, 304, 303, 80, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_16, 66, 303, 80, 20, 0, 100, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_4, 334, 340, 55, 25, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_17, 480, 274, 250, 35, 0, 100, 0 },
  { SLIDER_CreateIndirect, "Slider", ID_SLIDER_5, 480, 330, 240, 35, 0, 0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_18, 471, 303, 80, 20, 0, 100, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_19, 701, 303, 80, 20, 0, 100, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_5, 738, 337, 55, 25, 0, 100, 0 },
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
  WM_HWIN hItem;
  int Id, NCode;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'title'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetFont(hItem, GUI_FONT_32B_1);
    TEXT_SetText(hItem, "Cup2 Check Points");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
    TEXT_SetFont(hItem, GUI_FONT_24_ASCII);
    TEXT_SetText(hItem, "Liquidous Slope");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
    TEXT_SetFont(hItem, GUI_FONT_24_ASCII);
    TEXT_SetText(hItem, "Minimum Liquidous Timer");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Back'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetFont(hItem, GUI_FONT_24_ASCII);
    //
    // Initialization of 'Save'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetFont(hItem, GUI_FONT_24_ASCII);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
    TEXT_SetFont(hItem, GUI_FONT_24_ASCII);
    TEXT_SetText(hItem, "Solidous Slope");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
    TEXT_SetFont(hItem, GUI_FONT_24_ASCII);
    TEXT_SetText(hItem, "Minimum Solidous Timer");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_5);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetText(hItem, "Set check points to tune results");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_6);
    TEXT_SetFont(hItem, GUI_FONT_20_ASCII);
    TEXT_SetText(hItem, "0.01");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_7);
    TEXT_SetFont(hItem, GUI_FONT_20_ASCII);
    TEXT_SetText(hItem, "9.00");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_8);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "1.0");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_9);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "250.0");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_10);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "0.01");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_11);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "1.0");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_12);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "2.40");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_13);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "250.0");
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    EDIT_SetText(hItem, "0.01");
    EDIT_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);
    EDIT_SetText(hItem, "1.00");
    EDIT_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_2);
    EDIT_SetText(hItem, "0.01");
    EDIT_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_3);
    EDIT_SetText(hItem, "1.00");
    EDIT_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_14);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetFont(hItem, GUI_FONT_24_ASCII);
    TEXT_SetText(hItem, "Maximum Slope Change");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_15);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "250.0");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_16);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "1.0");
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_4);
    EDIT_SetText(hItem, "1.00");
    EDIT_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_17);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetFont(hItem, GUI_FONT_24_ASCII);
    TEXT_SetText(hItem, "Maximum Solidous Timer");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_18);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "1.0");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_19);
    TEXT_SetFont(hItem, GUI_FONT_20_1);
    TEXT_SetText(hItem, "250.0");
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_5);
    EDIT_SetText(hItem, "1.00");
    EDIT_SetFont(hItem, GUI_FONT_20_1);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_SLIDER_0: // Notifications sent by 'Slider'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_SLIDER_0);
		  double val = (double)SLIDER_GetValue(hItem);
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
		  char text[64];
		  val = 0.01 + val *0.0899;
		  sprintf(text, "%.2f", val);
		  EDIT_SetText(hItem, text);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_0: // Notifications sent by 'Back'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  showhideWindow(PG_SETTINGS, PAGES);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'Save'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_5);
		  TEXT_SetFont(hItem, GUI_FONT_20_1);
		  TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
		  TEXT_SetText(hItem, "Values saved");
		  GUI_Delay(1000);
		  TEXT_SetText(hItem, "Set check points to tune results");
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SLIDER_1: // Notifications sent by 'Slider'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_SLIDER_1);
		  double val = (double)SLIDER_GetValue(hItem);
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);
		  char text[64];
		  val = 0 + val *2.5;
		  sprintf(text, "%.1f", val);
		  EDIT_SetText(hItem, text);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SLIDER_2: // Notifications sent by 'Slider'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_SLIDER_2);
		  double val = (double)SLIDER_GetValue(hItem);
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_2);
		  char text[64];
		  val = 0.01 + val *0.0239;
		  sprintf(text, "%.2f", val);
		  EDIT_SetText(hItem, text);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SLIDER_3: // Notifications sent by 'Slider'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_SLIDER_3);
		  double val = (double)SLIDER_GetValue(hItem);
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_3);
		  char text[64];
		  val = 0 + val *2.5;
		  sprintf(text, "%.1f", val);
		  EDIT_SetText(hItem, text);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_0: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_1: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_2: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_3: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SLIDER_4: // Notifications sent by 'Slider'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_SLIDER_4);
		  double val = (double)SLIDER_GetValue(hItem);
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_4);
		  char text[64];
		  val = 0 + val *2.5;
		  sprintf(text, "%.1f", val);
		  EDIT_SetText(hItem, text);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_4: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SLIDER_5: // Notifications sent by 'Slider'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_SLIDER_5);
		  double val = (double)SLIDER_GetValue(hItem);
		  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_5);
		  char text[64];
		  val = 0 + val *2.5;
		  sprintf(text, "%.1f", val);
		  EDIT_SetText(hItem, text);
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_5: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
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
*       CreateCup2CPWindow
*/

WM_HWIN CreateCup2CPWindow(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), &_cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
