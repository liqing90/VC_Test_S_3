
// MFC_windows_lib_VC2013.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFC_windows_lib_VC2013App:
// See MFC_windows_lib_VC2013.cpp for the implementation of this class
//

class CMFC_windows_lib_VC2013App : public CWinApp
{
public:
	CMFC_windows_lib_VC2013App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFC_windows_lib_VC2013App theApp;