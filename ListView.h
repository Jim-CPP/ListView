// ListView.h

#pragma once

#include <windows.h>

#include "..\Common\Ascii.h"
#include "..\Common\Common.h"

#include "..\Classes\ArgumentListClass.h"
#include "..\Classes\DropClass.h"
#include "..\Classes\FontClass.h"
#include "..\Classes\MenuClass.h"
#include "..\Classes\MessageClass.h"
#include "..\Classes\MinMaxInfoClass.h"
#include "..\Classes\WindowClass.h"
#include "..\Classes\WindowClassClass.h"

#include "..\Classes\ListViewWindowClass.h"
#include "..\Classes\StatusBarWindowClass.h"

#include "Resource.h"

#define MAIN_WINDOW_CLASS_NAME													"Main ListView Window Class"

#define MAIN_WINDOW_TEXT														"ListView"

#define ABOUT_MESSAGE_TEXT														"ListView\r\n"						\
																				"\r\n"								\
																				"Written by Jim Smith\r\n"			\
																				"\r\n"								\
																				"April 2026"

#define LIST_VIEW_WINDOW_COLUMN_TITLES											{ "Column 1", "Column 2" }

typedef enum
{
	LIST_VIEW_WINDOW_COLUMN_1_ID = 0,
	LIST_VIEW_WINDOW_COLUMN_2_ID,

	LIST_VIEW_WINDOW_NUMBER_OF_COLUMNS

} LIST_VIEW_WINDOW_COLUMNS;
