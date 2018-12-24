// MyDigClockDlg.h : header file
//

#if !defined(AFX_MYDIGCLOCKDLG_H__4C25FECC_9B88_40A6_83CC_45D4C4FD1FB6__INCLUDED_)
#define AFX_MYDIGCLOCKDLG_H__4C25FECC_9B88_40A6_83CC_45D4C4FD1FB6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


/////////////////////////////////////////////////////////////////////////////
// CMyDigClockDlg dialog

class CMyDigClockDlg : public CDialog
{
// Construction
public:
	CMyDigClockDlg(CWnd* pParent = NULL);	// standard constructor


///systray///
#define WM_MY_TRAY_NOTIFICATION WM_USER+0
#define WM_TRAYICON WM_USER+100
	NOTIFYICONDATA tnid;
	void deleteicon();
	void modifyicon();
	void addicon();
	void addiconballoon(DWORD dwIcon,
					 CString sInfoTitle,
					 CString sInfo,
					 CString sTip,
			         int     uTimeout
					 );
	void animateicon(UINT nIndexOfIcon);
	void startanimateicon();
	void stopanimateicon();
	int m_animate;
	CMenu menuPop; 
    POINT ptMouse;
///systray///






// Dialog Data
	//{{AFX_DATA(CMyDigClockDlg)
	enum { IDD = IDD_MYDIGCLOCK_DIALOG };
	CEdit	m_clock;
	CString	m_name;
	CString	m_name2;
	CString	m_name3;
	CString	m_name4;
	CString	m_name6;
	CString	m_name5;
	int		m_hour;
	int		m_minutes;
	int		m_hour2;
	int		m_hour3;
	int		m_hour4;
	int		m_hour5;
	int		m_hour6;
	int		m_minutes2;
	int		m_minutes3;
	int		m_minutes4;
	int		m_minutes5;
	int		m_minutes6;
	CString	m_ampm;
	CString	m_ampm2;
	CString	m_ampm3;
	CString	m_ampm4;
	CString	m_ampm6;
	CString	m_ampm5;
	CString	m_notepad;
	int		m_mon6;
	int		m_mon;
	int		m_mon2;
	int		m_mon3;
	int		m_mon5;
	int		m_mon4;
	int		m_date6;
	int		m_date;
	int		m_date2;
	int		m_date5;
	int		m_date4;
	int		m_date3;
	BOOL	m_check;
	BOOL	m_check2;
	BOOL	m_check3;
	BOOL	m_check6;
	BOOL	m_check5;
	BOOL	m_check4;
	CString	m_ampm10;
	CString	m_ampm7;
	CString	m_ampm8;
	CString	m_ampm9;
	BOOL	m_check10;
	BOOL	m_check9;
	BOOL	m_check7;
	BOOL	m_check8;
	int		m_date10;
	int		m_date7;
	int		m_date8;
	int		m_date9;
	int		m_hour10;
	int		m_minutes10;
	int		m_minutes7;
	int		m_minutes8;
	int		m_minutes9;
	int		m_mon10;
	int		m_mon7;
	int		m_mon8;
	int		m_mon9;
	CString	m_name10;
	CString	m_name7;
	CString	m_name8;
	CString	m_name9;
	int		m_hour7;
	int		m_hour8;
	int		m_hour9;
	CString	m_ampm11;
	CString	m_ampm12;
	CString	m_ampm13;
	BOOL	m_check11;
	BOOL	m_check12;
	BOOL	m_check13;
	int		m_date11;
	int		m_date12;
	int		m_date13;
	int		m_hour11;
	int		m_hour12;
	CString	m_name11;
	CString	m_name12;
	CString	m_name13;
	int		m_mon11;
	int		m_mon12;
	int		m_mon13;
	int		m_minutes11;
	int		m_minutes12;
	int		m_minutes13;
	int		m_hour13;
	CString	m_days;
	CString	m_days12;
	CString	m_days11;
	CString	m_days10;
	CString	m_days13;
	CString	m_days2;
	CString	m_days9;
	CString	m_days8;
	CString	m_days7;
	CString	m_days3;
	CString	m_days4;
	CString	m_days5;
	CString	m_days6;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDigClockDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;



	// Generated message map functions
	//{{AFX_MSG(CMyDigClockDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnExit();
	afx_msg void OnClose();
	afx_msg void OnOpen();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnSetalarm();
	afx_msg void OnTest1();
	afx_msg void OnTest2();
	afx_msg void OnTest3();
	afx_msg void OnTest4();
	afx_msg void OnTest5();
	afx_msg void OnTest6();
	afx_msg void OnAbout();
	afx_msg void OnSavenote();
	afx_msg void OnTest7();
	afx_msg void OnTest8();
	afx_msg void OnTest9();
	afx_msg void OnTest10();
	afx_msg void OnTest11();
	afx_msg void OnTest12();
	afx_msg void OnTest13();
	afx_msg void OnEditchangeAmpm();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};




//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDIGCLOCKDLG_H__4C25FECC_9B88_40A6_83CC_45D4C4FD1FB6__INCLUDED_)
