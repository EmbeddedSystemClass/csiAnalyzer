/*********************************************************************
*                SEGGER MICROCONTROLLER GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 2003-2010     SEGGER Microcontroller GmbH & Co KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

----------------------------------------------------------------------
File        : PROGBAR_Private.h
Purpose     : Internal header file
---------------------------END-OF-HEADER------------------------------
*/

#ifndef PROGBAR_PRIVATE_H
#define PROGBAR_PRIVATE_H

#include "PROGBAR.h"
#include "WIDGET.h"

#if GUI_WINSUPPORT

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define PROGBAR_SF_HORIZONTAL PROGBAR_CF_HORIZONTAL
#define PROGBAR_SF_VERTICAL   PROGBAR_CF_VERTICAL
#define PROGBAR_SF_USER       PROGBAR_CF_USER

/*********************************************************************
*
*       Types
*
**********************************************************************
*/
typedef struct {
  WIDGET_DRAW_ITEM_FUNC * pfDrawSkin;
} PROGBAR_SKIN_PRIVATE;

typedef struct {
  const GUI_FONT GUI_UNI_PTR * pFont;
  GUI_COLOR aBarColor[2];
  GUI_COLOR aTextColor[2];
  PROGBAR_SKIN_PRIVATE SkinPrivate;
} PROGBAR_PROPS;

typedef struct {
  WIDGET Widget;
  int v;
  WM_HMEM hpText;
  I16 XOff, YOff;
  I16 TextAlign;
  int Min, Max;
  #if GUI_DEBUG_LEVEL >= GUI_DEBUG_LEVEL_CHECK_ALL
    U32 DebugId;
  #endif
  PROGBAR_PROPS Props;
  WIDGET_SKIN const * pWidgetSkin;
  U8 Flags;
} PROGBAR_Obj;

/*********************************************************************
*
*       Macros for internal use
*
**********************************************************************
*/
#if GUI_DEBUG_LEVEL >= GUI_DEBUG_LEVEL_CHECK_ALL
  #define PROGBAR_INIT_ID(p) p->DebugId = PROGBAR_ID
#else
  #define PROGBAR_INIT_ID(p)
#endif

#if GUI_DEBUG_LEVEL >= GUI_DEBUG_LEVEL_CHECK_ALL
  PROGBAR_Obj * PROGBAR_LockH(PROGBAR_Handle h);
  #define PROGBAR_LOCK_H(h)   PROGBAR_LockH(h)
#else
  #define PROGBAR_LOCK_H(h)   (PROGBAR_Obj *)GUI_LOCK_H(h)
#endif

/*********************************************************************
*
*       Public data (internal defaults)
*
**********************************************************************
*/
extern PROGBAR_PROPS PROGBAR__DefaultProps;

extern const WIDGET_SKIN PROGBAR__SkinClassic;
extern       WIDGET_SKIN PROGBAR__Skin;

extern WIDGET_SKIN const * PROGBAR__pSkinDefault;

/*********************************************************************
*
*       Public functions (internal)
*
**********************************************************************
*/
char * PROGBAR__GetTextLocked(const PROGBAR_Obj * pObj);
void   PROGBAR__GetTextRect  (const PROGBAR_Obj * pObj, GUI_RECT * pRect, const char * pText);
int    PROGBAR__Value2Pos    (const PROGBAR_Obj * pObj, int v);

#endif /* GUI_WINSUPPORT */
#endif /* PROGBAR_PRIVATE_H */

/*************************** End of file ****************************/
