/*
 * Scroll-bar class extra info
 *
 * Copyright 1993 Martin Ayotte
 * Copyright 1994 Alexandre Julliard
 */

#ifndef SCROLL_H
#define SCROLL_H

#include "windows.h"

typedef struct
{
    INT   CurVal;   /* Current scroll-bar value */
    INT   MinVal;   /* Minimum scroll-bar value */
    INT   MaxVal;   /* Maximum scroll-bar value */
    INT   Page;     /* Page size of scroll bar (Win32) */
    WORD  flags;    /* EnableScrollBar flags */
} SCROLLBAR_INFO;

extern LONG ScrollBarWndProc( HWND hwnd, WORD uMsg, WORD wParam, LONG lParam );
extern void SCROLL_DrawScrollBar( HWND hwnd, HDC hdc, int nBar );
extern void SCROLL_HandleScrollEvent( HWND hwnd, int nBar,
                                      WORD msg, POINT16 pt );

#endif  /* SCROLL_H */
