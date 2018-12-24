// MyDigClock.h : main header file for the MYDIGCLOCK application
//

#if !defined(AFX_MYDIGCLOCK_H__D6D03B20_B7FF_4CA7_99DE_813F48D1BC17__INCLUDED_)
#define AFX_MYDIGCLOCK_H__D6D03B20_B7FF_4CA7_99DE_813F48D1BC17__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyDigClockApp:
// See MyDigClock.cpp for the implementation of this class
//

class CMyDigClockApp : public CWinApp
{
public:
	CMyDigClockApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDigClockApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyDigClockApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDIGCLOCK_H__D6D03B20_B7FF_4CA7_99DE_813F48D1BC17__INCLUDED_)
