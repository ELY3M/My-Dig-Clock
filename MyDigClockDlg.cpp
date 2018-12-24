// MyDigClockDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MyDigClock.h"
#include "MyDigClockDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	CStatic	m_link;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	afx_msg void OnUrl();
	afx_msg void OnPaint();
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	DDX_Control(pDX, IDC_URL, m_link);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
	ON_BN_CLICKED(IDC_URL, OnUrl)
	ON_WM_PAINT()
	ON_WM_SETCURSOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDigClockDlg dialog

CMyDigClockDlg::CMyDigClockDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDigClockDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDigClockDlg)
	m_name = _T("");
	m_name2 = _T("");
	m_name3 = _T("");
	m_name4 = _T("");
	m_name6 = _T("");
	m_name5 = _T("");
	m_hour = 0;
	m_minutes = 0;
	m_hour2 = 0;
	m_hour3 = 0;
	m_hour4 = 0;
	m_hour5 = 0;
	m_hour6 = 0;
	m_minutes2 = 0;
	m_minutes3 = 0;
	m_minutes4 = 0;
	m_minutes5 = 0;
	m_minutes6 = 0;
	m_ampm = _T("");
	m_ampm2 = _T("");
	m_ampm3 = _T("");
	m_ampm4 = _T("");
	m_ampm6 = _T("");
	m_ampm5 = _T("");
	m_notepad = _T("");
	m_mon6 = 0;
	m_mon = 0;
	m_mon2 = 0;
	m_mon3 = 0;
	m_mon5 = 0;
	m_mon4 = 0;
	m_date6 = 0;
	m_date = 0;
	m_date2 = 0;
	m_date5 = 0;
	m_date4 = 0;
	m_date3 = 0;
	m_check = FALSE;
	m_check2 = FALSE;
	m_check3 = FALSE;
	m_check6 = FALSE;
	m_check5 = FALSE;
	m_check4 = FALSE;
	m_ampm10 = _T("");
	m_ampm7 = _T("");
	m_ampm8 = _T("");
	m_ampm9 = _T("");
	m_check10 = FALSE;
	m_check9 = FALSE;
	m_check7 = FALSE;
	m_check8 = FALSE;
	m_date10 = 0;
	m_date7 = 0;
	m_date8 = 0;
	m_date9 = 0;
	m_hour10 = 0;
	m_minutes10 = 0;
	m_minutes7 = 0;
	m_minutes8 = 0;
	m_minutes9 = 0;
	m_mon10 = 0;
	m_mon7 = 0;
	m_mon8 = 0;
	m_mon9 = 0;
	m_name10 = _T("");
	m_name7 = _T("");
	m_name8 = _T("");
	m_name9 = _T("");
	m_hour7 = 0;
	m_hour8 = 0;
	m_hour9 = 0;
	m_ampm11 = _T("");
	m_ampm12 = _T("");
	m_ampm13 = _T("");
	m_check11 = FALSE;
	m_check12 = FALSE;
	m_check13 = FALSE;
	m_date11 = 0;
	m_date12 = 0;
	m_date13 = 0;
	m_hour11 = 0;
	m_hour12 = 0;
	m_name11 = _T("");
	m_name12 = _T("");
	m_name13 = _T("");
	m_mon11 = 0;
	m_mon12 = 0;
	m_mon13 = 0;
	m_minutes11 = 0;
	m_minutes12 = 0;
	m_minutes13 = 0;
	m_hour13 = 0;
	m_days = _T("");
	m_days12 = _T("");
	m_days11 = _T("");
	m_days10 = _T("");
	m_days13 = _T("");
	m_days2 = _T("");
	m_days9 = _T("");
	m_days8 = _T("");
	m_days7 = _T("");
	m_days3 = _T("");
	m_days4 = _T("");
	m_days5 = _T("");
	m_days6 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}




void CMyDigClockDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDigClockDlg)
	DDX_Control(pDX, IDC_CLOCK, m_clock);
	DDX_Text(pDX, IDC_NAME, m_name);
	DDX_Text(pDX, IDC_NAME2, m_name2);
	DDX_Text(pDX, IDC_NAME3, m_name3);
	DDX_Text(pDX, IDC_NAME4, m_name4);
	DDX_Text(pDX, IDC_NAME6, m_name6);
	DDX_Text(pDX, IDC_NAME5, m_name5);
	DDX_Text(pDX, IDC_HOUR, m_hour);
	DDX_Text(pDX, IDC_MINUTES, m_minutes);
	DDX_Text(pDX, IDC_HOUR2, m_hour2);
	DDX_Text(pDX, IDC_HOUR3, m_hour3);
	DDX_Text(pDX, IDC_HOUR4, m_hour4);
	DDX_Text(pDX, IDC_HOUR5, m_hour5);
	DDX_Text(pDX, IDC_HOUR6, m_hour6);
	DDX_Text(pDX, IDC_MINUTES2, m_minutes2);
	DDX_Text(pDX, IDC_MINUTES3, m_minutes3);
	DDX_Text(pDX, IDC_MINUTES4, m_minutes4);
	DDX_Text(pDX, IDC_MINUTES5, m_minutes5);
	DDX_Text(pDX, IDC_MINUTES6, m_minutes6);
	DDX_CBString(pDX, IDC_AMPM, m_ampm);
	DDV_MaxChars(pDX, m_ampm, 2);
	DDX_CBString(pDX, IDC_AMPM2, m_ampm2);
	DDV_MaxChars(pDX, m_ampm2, 2);
	DDX_CBString(pDX, IDC_AMPM3, m_ampm3);
	DDV_MaxChars(pDX, m_ampm3, 2);
	DDX_CBString(pDX, IDC_AMPM4, m_ampm4);
	DDV_MaxChars(pDX, m_ampm4, 2);
	DDX_CBString(pDX, IDC_AMPM6, m_ampm6);
	DDV_MaxChars(pDX, m_ampm6, 2);
	DDX_CBString(pDX, IDC_AMPM5, m_ampm5);
	DDV_MaxChars(pDX, m_ampm5, 2);
	DDX_Text(pDX, IDC_NOTEPAD, m_notepad);
	DDX_Text(pDX, IDC_MON6, m_mon6);
	DDX_Text(pDX, IDC_MON, m_mon);
	DDX_Text(pDX, IDC_MON2, m_mon2);
	DDX_Text(pDX, IDC_MON3, m_mon3);
	DDX_Text(pDX, IDC_MON5, m_mon5);
	DDX_Text(pDX, IDC_MON4, m_mon4);
	DDX_Text(pDX, IDC_DATE6, m_date6);
	DDX_Text(pDX, IDC_DATE, m_date);
	DDX_Text(pDX, IDC_DATE2, m_date2);
	DDX_Text(pDX, IDC_DATE5, m_date5);
	DDX_Text(pDX, IDC_DATE4, m_date4);
	DDX_Text(pDX, IDC_DATE3, m_date3);
	DDX_Check(pDX, IDC_CHECK1, m_check);
	DDX_Check(pDX, IDC_CHECK2, m_check2);
	DDX_Check(pDX, IDC_CHECK3, m_check3);
	DDX_Check(pDX, IDC_CHECK6, m_check6);
	DDX_Check(pDX, IDC_CHECK5, m_check5);
	DDX_Check(pDX, IDC_CHECK4, m_check4);
	DDX_CBString(pDX, IDC_AMPM10, m_ampm10);
	DDX_CBString(pDX, IDC_AMPM7, m_ampm7);
	DDX_CBString(pDX, IDC_AMPM8, m_ampm8);
	DDX_CBString(pDX, IDC_AMPM9, m_ampm9);
	DDX_Check(pDX, IDC_CHECK10, m_check10);
	DDX_Check(pDX, IDC_CHECK9, m_check9);
	DDX_Check(pDX, IDC_CHECK7, m_check7);
	DDX_Check(pDX, IDC_CHECK8, m_check8);
	DDX_Text(pDX, IDC_DATE10, m_date10);
	DDX_Text(pDX, IDC_DATE7, m_date7);
	DDX_Text(pDX, IDC_DATE8, m_date8);
	DDX_Text(pDX, IDC_DATE9, m_date9);
	DDX_Text(pDX, IDC_HOUR10, m_hour10);
	DDX_Text(pDX, IDC_MINUTES10, m_minutes10);
	DDX_Text(pDX, IDC_MINUTES7, m_minutes7);
	DDX_Text(pDX, IDC_MINUTES8, m_minutes8);
	DDX_Text(pDX, IDC_MINUTES9, m_minutes9);
	DDX_Text(pDX, IDC_MON10, m_mon10);
	DDX_Text(pDX, IDC_MON7, m_mon7);
	DDX_Text(pDX, IDC_MON8, m_mon8);
	DDX_Text(pDX, IDC_MON9, m_mon9);
	DDX_Text(pDX, IDC_NAME10, m_name10);
	DDX_Text(pDX, IDC_NAME7, m_name7);
	DDX_Text(pDX, IDC_NAME8, m_name8);
	DDX_Text(pDX, IDC_NAME9, m_name9);
	DDX_Text(pDX, IDC_HOUR7, m_hour7);
	DDX_Text(pDX, IDC_HOUR8, m_hour8);
	DDX_Text(pDX, IDC_HOUR9, m_hour9);
	DDX_CBString(pDX, IDC_AMPM11, m_ampm11);
	DDX_CBString(pDX, IDC_AMPM12, m_ampm12);
	DDX_CBString(pDX, IDC_AMPM13, m_ampm13);
	DDX_Check(pDX, IDC_CHECK11, m_check11);
	DDX_Check(pDX, IDC_CHECK12, m_check12);
	DDX_Check(pDX, IDC_CHECK13, m_check13);
	DDX_Text(pDX, IDC_DATE11, m_date11);
	DDX_Text(pDX, IDC_DATE12, m_date12);
	DDX_Text(pDX, IDC_DATE13, m_date13);
	DDX_Text(pDX, IDC_HOUR11, m_hour11);
	DDX_Text(pDX, IDC_HOUR12, m_hour12);
	DDX_Text(pDX, IDC_NAME11, m_name11);
	DDX_Text(pDX, IDC_NAME12, m_name12);
	DDX_Text(pDX, IDC_NAME13, m_name13);
	DDX_Text(pDX, IDC_MON11, m_mon11);
	DDX_Text(pDX, IDC_MON12, m_mon12);
	DDX_Text(pDX, IDC_MON13, m_mon13);
	DDX_Text(pDX, IDC_MINUTES11, m_minutes11);
	DDX_Text(pDX, IDC_MINUTES12, m_minutes12);
	DDX_Text(pDX, IDC_MINUTES13, m_minutes13);
	DDX_Text(pDX, IDC_HOUR13, m_hour13);
	DDX_CBString(pDX, IDC_DAYS, m_days);
	DDX_CBString(pDX, IDC_DAYS12, m_days12);
	DDX_CBString(pDX, IDC_DAYS11, m_days11);
	DDX_CBString(pDX, IDC_DAYS10, m_days10);
	DDX_CBString(pDX, IDC_DAYS13, m_days13);
	DDX_CBString(pDX, IDC_DAYS2, m_days2);
	DDX_CBString(pDX, IDC_DAYS9, m_days9);
	DDX_CBString(pDX, IDC_DAYS8, m_days8);
	DDX_CBString(pDX, IDC_DAYS7, m_days7);
	DDX_CBString(pDX, IDC_DAYS3, m_days3);
	DDX_CBString(pDX, IDC_DAYS4, m_days4);
	DDX_CBString(pDX, IDC_DAYS5, m_days5);
	DDX_CBString(pDX, IDC_DAYS6, m_days6);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyDigClockDlg, CDialog)
	//{{AFX_MSG_MAP(CMyDigClockDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_EXIT, OnExit)
	ON_WM_CLOSE()
	ON_COMMAND(ID_OPEN, OnOpen)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_SETALARM, OnSetalarm)
	ON_BN_CLICKED(IDC_TEST1, OnTest1)
	ON_BN_CLICKED(IDC_TEST2, OnTest2)
	ON_BN_CLICKED(IDC_TEST3, OnTest3)
	ON_BN_CLICKED(IDC_TEST4, OnTest4)
	ON_BN_CLICKED(IDC_TEST5, OnTest5)
	ON_BN_CLICKED(IDC_TEST6, OnTest6)
	ON_COMMAND(ID_ABOUT, OnAbout)
	ON_BN_CLICKED(IDC_SAVENOTE, OnSavenote)
	ON_BN_CLICKED(IDC_TEST7, OnTest7)
	ON_BN_CLICKED(IDC_TEST8, OnTest8)
	ON_BN_CLICKED(IDC_TEST9, OnTest9)
	ON_BN_CLICKED(IDC_TEST10, OnTest10)
	ON_BN_CLICKED(IDC_TEST11, OnTest11)
	ON_BN_CLICKED(IDC_TEST12, OnTest12)
	ON_BN_CLICKED(IDC_EXIT, OnExit)
	ON_BN_CLICKED(IDC_ABOUT, OnAbout)
	ON_BN_CLICKED(IDC_TEST13, OnTest13)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDigClockDlg message handlers

BOOL CMyDigClockDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here

	addicon();  




    SYSTEMTIME CurTime; 
    CString Time, tmp;
    GetLocalTime(&CurTime);
    bool cPM = false;


	if(CurTime.wHour >12) {
		CurTime.wHour -= 12; 
		cPM = true; }

	  Time.Format("%u:", CurTime.wHour);
	
		if(CurTime.wMinute <= 9)
		{
			tmp.Format("0%u:", CurTime.wMinute);
			Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
		 }
		 else {
			tmp.Format("%u:",CurTime.wMinute);
			Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
		 }

			if(CurTime.wSecond <= 9)
			{
				tmp.Empty();
				tmp.Format("0%u", CurTime.wSecond);
				Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
			}
			else {
			    tmp.Empty();
			    tmp.Format("%u",CurTime.wSecond);
                Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
			}
			if(cPM == true)
			{
			  Time.Insert(Time.GetLength()," PM");
			}
			else {
				Time.Insert(Time.GetLength()," AM");
			}

    m_clock.SetWindowText(Time);
	SetTimer(55,1000,NULL);	



	char sIniFile[MAX_PATH];
	GetModuleFileName( NULL, sIniFile, MAX_PATH );
	strcpy( strrchr( sIniFile, '\\' ) + 1, "reminderclock.ini" );
    
    
	char   getname[MAX_PATH];
	char   getname2[MAX_PATH];
	char   getname3[MAX_PATH];
	char   getname4[MAX_PATH];
	char   getname5[MAX_PATH];
	char   getname6[MAX_PATH];
	char   getname7[MAX_PATH];
	char   getname8[MAX_PATH];
	char   getname9[MAX_PATH];
	char   getname10[MAX_PATH];
	char   getname11[MAX_PATH];
	char   getname12[MAX_PATH];
	char   getname13[MAX_PATH];

	char   getampm[MAX_PATH];
	char   getampm2[MAX_PATH];
	char   getampm3[MAX_PATH];
	char   getampm4[MAX_PATH];
	char   getampm5[MAX_PATH];
	char   getampm6[MAX_PATH];
	char   getampm7[MAX_PATH];
	char   getampm8[MAX_PATH];
	char   getampm9[MAX_PATH];
	char   getampm10[MAX_PATH];
	char   getampm11[MAX_PATH];
	char   getampm12[MAX_PATH];
	char   getampm13[MAX_PATH];


	char   getdays[MAX_PATH];
	char   getdays2[MAX_PATH];
	char   getdays3[MAX_PATH];
	char   getdays4[MAX_PATH];
	char   getdays5[MAX_PATH];
	char   getdays6[MAX_PATH];
	char   getdays7[MAX_PATH];
	char   getdays8[MAX_PATH];
	char   getdays9[MAX_PATH];
	char   getdays10[MAX_PATH];
	char   getdays11[MAX_PATH];
	char   getdays12[MAX_PATH];
	char   getdays13[MAX_PATH];


	m_check	= GetPrivateProfileInt("BOX1", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX1", "Title", "", getname, sizeof(getname), sIniFile);
	m_hour = GetPrivateProfileInt("BOX1", "Hour", 0, sIniFile);
	m_minutes = GetPrivateProfileInt("BOX1", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX1", "AM_PM", "", getampm, sizeof(getampm), sIniFile);
	GetPrivateProfileString("BOX1", "Days", "", getdays, sizeof(getdays), sIniFile);
	m_mon = GetPrivateProfileInt("BOX1", "Month", 0, sIniFile);
	m_date = GetPrivateProfileInt("BOX1", "Day", 0, sIniFile);


	m_check2 = GetPrivateProfileInt("BOX2", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX2", "Title", "", getname2, sizeof(getname2), sIniFile);
	m_hour2 = GetPrivateProfileInt("BOX2", "Hour", 0, sIniFile);
	m_minutes2 = GetPrivateProfileInt("BOX2", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX2", "AM_PM", "", getampm2, sizeof(getampm2), sIniFile);
	GetPrivateProfileString("BOX2", "Days", "", getdays2, sizeof(getdays2), sIniFile);
	m_mon2 = GetPrivateProfileInt("BOX2", "Month", 0, sIniFile);
	m_date2 = GetPrivateProfileInt("BOX2", "Day", 0, sIniFile);

	m_check3 = GetPrivateProfileInt("BOX3", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX3", "Title", "", getname3, sizeof(getname3), sIniFile);
	m_hour3 = GetPrivateProfileInt("BOX3", "Hour", 0, sIniFile);
	m_minutes3 = GetPrivateProfileInt("BOX3", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX3", "AM_PM", "", getampm3, sizeof(getampm3), sIniFile);
	GetPrivateProfileString("BOX3", "Days", "", getdays3, sizeof(getdays3), sIniFile);
	m_mon3 = GetPrivateProfileInt("BOX3", "Month", 0, sIniFile);
	m_date3 = GetPrivateProfileInt("BOX3", "Day", 0, sIniFile);

	m_check4 = GetPrivateProfileInt("BOX4", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX4", "Title", "", getname4, sizeof(getname4), sIniFile);
	m_hour4 = GetPrivateProfileInt("BOX4", "Hour", 0, sIniFile);
	m_minutes4 = GetPrivateProfileInt("BOX4", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX4", "AM_PM", "", getampm4, sizeof(getampm4), sIniFile);
	GetPrivateProfileString("BOX4", "Days", "", getdays4, sizeof(getdays4), sIniFile);
	m_mon4 = GetPrivateProfileInt("BOX4", "Month", 0, sIniFile);
	m_date4 = GetPrivateProfileInt("BOX4", "Day", 0, sIniFile);

	m_check5 = GetPrivateProfileInt("BOX5", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX5", "Title", "", getname5, sizeof(getname5), sIniFile);
	m_hour5 = GetPrivateProfileInt("BOX5", "Hour", 0, sIniFile);
	m_minutes5 = GetPrivateProfileInt("BOX5", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX5", "AM_PM", "", getampm5, sizeof(getampm5), sIniFile);
	GetPrivateProfileString("BOX5", "Days", "", getdays5, sizeof(getdays5), sIniFile);
	m_mon5 = GetPrivateProfileInt("BOX5", "Month", 0, sIniFile);
	m_date5 = GetPrivateProfileInt("BOX5", "Day", 0, sIniFile);

	m_check6 = GetPrivateProfileInt("BOX6", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX6", "Title", "", getname6, sizeof(getname6), sIniFile);
	m_hour6 = GetPrivateProfileInt("BOX6", "Hour", 0, sIniFile);
	m_minutes6 = GetPrivateProfileInt("BOX6", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX6", "AM_PM", "", getampm6, sizeof(getampm6), sIniFile);
	GetPrivateProfileString("BOX6", "Days", "", getdays6, sizeof(getdays6), sIniFile);
	m_mon6 = GetPrivateProfileInt("BOX6", "Month", 0, sIniFile);
	m_date6 = GetPrivateProfileInt("BOX6", "Day", 0, sIniFile);


	m_check7 = GetPrivateProfileInt("BOX7", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX7", "Title", "", getname7, sizeof(getname7), sIniFile);
	m_hour7 = GetPrivateProfileInt("BOX7", "Hour", 0, sIniFile);
	m_minutes7 = GetPrivateProfileInt("BOX7", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX7", "AM_PM", "", getampm7, sizeof(getampm7), sIniFile);
	GetPrivateProfileString("BOX7", "Days", "", getdays7, sizeof(getdays7), sIniFile);
	m_mon7 = GetPrivateProfileInt("BOX7", "Month", 0, sIniFile);
	m_date7 = GetPrivateProfileInt("BOX7", "Day", 0, sIniFile);


	m_check8 = GetPrivateProfileInt("BOX8", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX8", "Title", "", getname8, sizeof(getname8), sIniFile);
	m_hour8 = GetPrivateProfileInt("BOX8", "Hour", 0, sIniFile);
	m_minutes8 = GetPrivateProfileInt("BOX8", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX8", "AM_PM", "", getampm8, sizeof(getampm8), sIniFile);
	GetPrivateProfileString("BOX8", "Days", "", getdays8, sizeof(getdays8), sIniFile);
	m_mon8 = GetPrivateProfileInt("BOX8", "Month", 0, sIniFile);
	m_date8 = GetPrivateProfileInt("BOX8", "Day", 0, sIniFile);

	m_check9 = GetPrivateProfileInt("BOX9", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX9", "Title", "", getname9, sizeof(getname9), sIniFile);
	m_hour9 = GetPrivateProfileInt("BOX9", "Hour", 0, sIniFile);
	m_minutes9 = GetPrivateProfileInt("BOX9", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX9", "AM_PM", "", getampm9, sizeof(getampm9), sIniFile);
	GetPrivateProfileString("BOX9", "Days", "", getdays9, sizeof(getdays9), sIniFile);
	m_mon9 = GetPrivateProfileInt("BOX9", "Month", 0, sIniFile);
	m_date9 = GetPrivateProfileInt("BOX9", "Day", 0, sIniFile);

	m_check10 = GetPrivateProfileInt("BOX10", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX10", "Title", "", getname10, sizeof(getname10), sIniFile);
	m_hour10 = GetPrivateProfileInt("BOX10", "Hour", 0, sIniFile);
	m_minutes10 = GetPrivateProfileInt("BOX10", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX10", "AM_PM", "", getampm10, sizeof(getampm10), sIniFile);
	GetPrivateProfileString("BOX10", "Days", "", getdays10, sizeof(getdays10), sIniFile);
	m_mon10 = GetPrivateProfileInt("BOX10", "Month", 0, sIniFile);
	m_date10 = GetPrivateProfileInt("BOX10", "Day", 0, sIniFile);


	m_check11 = GetPrivateProfileInt("BOX11", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX11", "Title", "", getname11, sizeof(getname11), sIniFile);
	m_hour11 = GetPrivateProfileInt("BOX11", "Hour", 0, sIniFile);
	m_minutes11 = GetPrivateProfileInt("BOX11", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX11", "AM_PM", "", getampm11, sizeof(getampm11), sIniFile);
	GetPrivateProfileString("BOX11", "Days", "", getdays11, sizeof(getdays11), sIniFile);
	m_mon11 = GetPrivateProfileInt("BOX11", "Month", 0, sIniFile);
	m_date11 = GetPrivateProfileInt("BOX11", "Day", 0, sIniFile);

	m_check12 = GetPrivateProfileInt("BOX12", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX12", "Title", "", getname12, sizeof(getname12), sIniFile);
	m_hour12 = GetPrivateProfileInt("BOX12", "Hour", 0, sIniFile);
	m_minutes12 = GetPrivateProfileInt("BOX12", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX12", "AM_PM", "", getampm12, sizeof(getampm12), sIniFile);
	GetPrivateProfileString("BOX12", "Days", "", getdays12, sizeof(getdays12), sIniFile);
	m_mon12 = GetPrivateProfileInt("BOX12", "Month", 0, sIniFile);
	m_date12 = GetPrivateProfileInt("BOX12", "Day", 0, sIniFile);


	m_check13 = GetPrivateProfileInt("BOX13", "Enable", 0, sIniFile);
	GetPrivateProfileString("BOX13", "Title", "", getname13, sizeof(getname13), sIniFile);
	m_hour13 = GetPrivateProfileInt("BOX13", "Hour", 0, sIniFile);
	m_minutes13 = GetPrivateProfileInt("BOX13", "Minutes", 0, sIniFile);
	GetPrivateProfileString("BOX13", "AM_PM", "", getampm13, sizeof(getampm13), sIniFile);
	GetPrivateProfileString("BOX13", "Days", "", getdays13, sizeof(getdays13), sIniFile);
	m_mon13 = GetPrivateProfileInt("BOX13", "Month", 0, sIniFile);
	m_date13 = GetPrivateProfileInt("BOX13", "Day", 0, sIniFile);

	m_name = _T(getname);
	m_name2 = _T(getname2);
	m_name3 = _T(getname3);
	m_name4 = _T(getname4);
	m_name5 = _T(getname5);
	m_name6 = _T(getname6);
	m_name7 = _T(getname7);
	m_name8 = _T(getname8);
	m_name9 = _T(getname9);
	m_name10 = _T(getname10);
	m_name11 = _T(getname11);
	m_name12 = _T(getname12);
	m_name13 = _T(getname13);

	m_ampm = _T(getampm); 
	m_ampm2 = _T(getampm2);
	m_ampm3 = _T(getampm3);
	m_ampm4 = _T(getampm4);
	m_ampm5 = _T(getampm5);
	m_ampm6 = _T(getampm6);
	m_ampm7 = _T(getampm7);
	m_ampm8 = _T(getampm8);
	m_ampm9 = _T(getampm9);
	m_ampm10 = _T(getampm10);
	m_ampm11 = _T(getampm11);
	m_ampm12 = _T(getampm12);
	m_ampm13 = _T(getampm13);


	m_days = _T(getdays); 
	m_days2 = _T(getdays2);
	m_days3 = _T(getdays3);
	m_days4 = _T(getdays4);
	m_days5 = _T(getdays5);
	m_days6 = _T(getdays6);
	m_days7 = _T(getdays7);
	m_days8 = _T(getdays8);
	m_days9 = _T(getdays9);
	m_days10 = _T(getdays10);
	m_days11 = _T(getdays11);
	m_days12 = _T(getdays12);
	m_days13 = _T(getdays13);




CString label;
CString text;
char   getnote[MAX_PATH];

for (int i=1; ;i++) {
    label.Format("note%i",i);
    GetPrivateProfileString("NOTEPAD", label, "=", getnote, sizeof(getnote), sIniFile);
    if (*getnote == '=')
        break;
    else {
         text += getnote;
         text += "\r\n";
    }
}
m_notepad = _T(text);




	
	UpdateData(FALSE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}



void CMyDigClockDlg::OnSysCommand(UINT nID, LPARAM lParam)
{

	if(nID==SC_MINIMIZE)

	{
		ShowWindow(SW_HIDE);
		addicon();
		return;
	}	
	
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDigClockDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyDigClockDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


///systray///
LRESULT CMyDigClockDlg::WindowProc(UINT message, WPARAM wParam, LPARAM lParam) 
{

		if(message == WM_TRAYICON) {
			
		switch (lParam) {


/*
		case WM_LBUTTONDOWN:
						
						stopanimateicon();
						return TRUE;
						break;	

*/

		case WM_RBUTTONDOWN:
						stopanimateicon();
						menuPop.LoadMenu(IDR_SYSTRAY); //// you should make menu first. be sure to change name here if you use diff name for popup menu /////   
						GetCursorPos(&ptMouse);
						menuPop.GetSubMenu(0)->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, ptMouse.x,ptMouse.y,this);
						menuPop.DestroyMenu();
						return TRUE;
						break;
						
		case WM_LBUTTONDBLCLK:
						stopanimateicon();
						ShowWindow(SW_NORMAL);
						return TRUE;
						break;
					}
		}

	return CDialog::WindowProc(message, wParam, lParam);
}


void CMyDigClockDlg::addicon()
{
	tnid.cbSize=sizeof(NOTIFYICONDATA);
	tnid.hWnd=this->m_hWnd;
	tnid.uID=IDR_MAINFRAME;  /// you can customize icon ////
	tnid.uFlags=NIF_MESSAGE|NIF_ICON|NIF_TIP;
	tnid.uCallbackMessage=WM_TRAYICON;
	tnid.hIcon=LoadIcon(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDR_MAINFRAME)); /// you can customize icon ////
	strcpy(tnid.szTip,_T("Reminder")); /// you can use your words or names for tooltip. ////
	Shell_NotifyIcon(NIM_ADD,&tnid);
}

///balloon///
void CMyDigClockDlg::addiconballoon(DWORD dwIcon,
									CString sInfoTitle, 
									CString sInfo, 
								    CString sTip,
									int uTimeout)
{
	tnid.cbSize=sizeof(NOTIFYICONDATA);
	tnid.hWnd=this->m_hWnd;
	tnid.uID=IDR_MAINFRAME;  /// you can customize icon ////
	tnid.uFlags=NIF_INFO;
    tnid.dwInfoFlags      = dwIcon;

			// 0 = NIIF_NONE      No icon. 
			// 1 = NIIF_INFO      An information icon.
			// 2 = NIIF_WARNING   A warning icon. 	
			// 3 = NIIF_ERROR     An error icon. 

	tnid.uCallbackMessage=WM_TRAYICON;
	tnid.hIcon=LoadIcon(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDR_MAINFRAME)); /// you can customize icon ////

	tnid.uTimeout         = uTimeout * 1000;
	ASSERT (dwIcon == NIIF_WARNING || dwIcon == NIIF_ERROR || dwIcon == NIIF_INFO || dwIcon == NIIF_NONE);
	strcpy( tnid.szInfoTitle, sInfoTitle );
	strcpy( tnid.szInfo,      sInfo      );
	strcpy( tnid.szTip,       sTip       );
	Shell_NotifyIcon(NIM_MODIFY,&tnid);

}
///balloon///




void CMyDigClockDlg::modifyicon()
{
}
void CMyDigClockDlg::deleteicon()
{
	tnid.cbSize=sizeof(NOTIFYICONDATA);
	tnid.hWnd=this->m_hWnd;
	tnid.uID=IDR_MAINFRAME;	/////sure to delete own icon
	Shell_NotifyIcon(NIM_DELETE,&tnid);
}

/// animate icon ///  
#define NUM_ICONS_IN_ANIMATION 2
static int iconResourceArray[NUM_ICONS_IN_ANIMATION] =
{ IDR_MAINFRAME, IDI_OFF };

void CMyDigClockDlg::animateicon(UINT nIndexOfIcon)
{
    HICON hIconAtIndex = AfxGetApp()->LoadIcon(iconResourceArray[nIndexOfIcon]);
	tnid.cbSize=sizeof(NOTIFYICONDATA);
	tnid.hWnd=this->m_hWnd;
	tnid.uID=IDR_MAINFRAME;  /// you can customize icon ////
	tnid.uFlags=NIF_MESSAGE|NIF_ICON;
	tnid.uCallbackMessage=WM_TRAYICON;
	tnid.hIcon		= hIconAtIndex;    //icon handle   
	Shell_NotifyIcon(NIM_MODIFY, &tnid);

	if (hIconAtIndex)
		DestroyIcon(hIconAtIndex);

}


void CMyDigClockDlg::startanimateicon() 
{

	m_animate = 1;
    int nIndexFirstIcon = 0;
    animateicon(nIndexFirstIcon);
    SetTimer(1,1000,NULL);
	
}

void CMyDigClockDlg::stopanimateicon()
{
    m_animate = 0;
	tnid.cbSize=sizeof(NOTIFYICONDATA);
	tnid.hWnd=this->m_hWnd;
	tnid.uID=IDR_MAINFRAME;  /// you can customize icon ////
	tnid.uFlags=NIF_MESSAGE|NIF_ICON|NIF_TIP;
	tnid.uCallbackMessage=WM_TRAYICON;
	tnid.hIcon=LoadIcon(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDR_MAINFRAME)); /// you can customize icon ////
	strcpy(tnid.szTip,_T("Reminder")); /// you can use your words or names for tooltip. ////
	Shell_NotifyIcon(NIM_MODIFY,&tnid);
}




void CMyDigClockDlg::OnExit() 
{

deleteicon();
SendMessage(WM_CLOSE);
CDialog::OnClose();
	
}

void CMyDigClockDlg::OnClose() 
{

deleteicon();
SendMessage(WM_CLOSE);	
CDialog::OnClose();	

}

void CMyDigClockDlg::OnOpen() 
{
	// TODO: Add your command handler code here
	ShowWindow(SW_RESTORE);
	
}

void CMyDigClockDlg::OnTimer(UINT nIDEvent) 
{



	SYSTEMTIME CurTime; 
    CString Time, tmp;
    GetLocalTime(&CurTime);
    bool cPM = false;

	Time.Format("%u-%u", CurTime.wMonth, CurTime.wDay);

	if(CurTime.wHour >12) {
		CurTime.wHour -= 12; 
		cPM = true; }

	// midnight "0" fix // 
	if(CurTime.wHour == 0) {
	CurTime.wHour = 12; }


	  Time.Format("%u:", CurTime.wHour);
	
		if(CurTime.wMinute <= 9)
		{
			tmp.Format("0%u:", CurTime.wMinute);
			Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
		 }
		 else {
			tmp.Format("%u:",CurTime.wMinute);
			Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
		 }

			if(CurTime.wSecond <= 9)
			{
				tmp.Empty();
				tmp.Format("0%u", CurTime.wSecond);
				Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
			}
			else {
			    tmp.Empty();
			    tmp.Format("%u",CurTime.wSecond);
                Time.Insert(Time.GetLength(),tmp.GetBuffer(tmp.GetLength()));
			}

			CString setampm; 

			if(cPM == true)
			{
			  Time.Insert(Time.GetLength()," PM");
			  setampm = "PM"; 

			}
			else {
				Time.Insert(Time.GetLength()," AM");
				setampm = "AM";  
			}

      m_clock.SetWindowText(Time);

////////////day 


			 int CurDay;
			 if (m_days == "Sun") {
			 CurDay = 0;
			 }
			 else if (m_days == "Mon") {
			 CurDay = 1;
			 }
			 else if (m_days == "Tues") {
			 CurDay = 2;
			 }
			 else if (m_days == "Wed") {
			 CurDay = 3;
			 }
			 else if (m_days == "Thurs") {
			 CurDay = 4;
			 }
			 else if (m_days == "Fri") {
			 CurDay = 5;
			 }
			 else if (m_days == "Sat") {
			 CurDay = 6;
			 }

			 int CurDay2;
			 if (m_days2 == "Sun") {
			 CurDay2 = 0;
			 }
			 else if (m_days2 == "Mon") {
			 CurDay2 = 1;
			 }
			 else if (m_days2 == "Tues") {
			 CurDay2 = 2;
			 }
			 else if (m_days2 == "Wed") {
			 CurDay2 = 3;
			 }
			 else if (m_days2 == "Thurs") {
			 CurDay2 = 4;
			 }
			 else if (m_days2 == "Fri") {
			 CurDay2 = 5;
			 }
			 else if (m_days2 == "Sat") {
			 CurDay2 = 6;
			 }

			 int CurDay3;
			 if (m_days3 == "Sun") {
			 CurDay3 = 0;
			 }
			 else if (m_days3 == "Mon") {
			 CurDay3 = 1;
			 }
			 else if (m_days3 == "Tues") {
			 CurDay3 = 2;
			 }
			 else if (m_days3 == "Wed") {
			 CurDay3 = 3;
			 }
			 else if (m_days3 == "Thurs") {
			 CurDay3 = 4;
			 }
			 else if (m_days3 == "Fri") {
			 CurDay3 = 5;
			 }
			 else if (m_days3 == "Sat") {
			 CurDay3 = 6;
			 }

			 int CurDay4;
			 if (m_days4 == "Sun") {
			 CurDay4 = 0;
			 }
			 else if (m_days4 == "Mon") {
			 CurDay4 = 1;
			 }
			 else if (m_days4 == "Tues") {
			 CurDay4 = 2;
			 }
			 else if (m_days4 == "Wed") {
			 CurDay4 = 3;
			 }
			 else if (m_days4 == "Thurs") {
			 CurDay4 = 4;
			 }
			 else if (m_days4 == "Fri") {
			 CurDay4 = 5;
			 }
			 else if (m_days4 == "Sat") {
			 CurDay4 = 6;
			 }


			 int CurDay5;
			 if (m_days5 == "Sun") {
			 CurDay5 = 0;
			 }
			 else if (m_days5 == "Mon") {
			 CurDay5 = 1;
			 }
			 else if (m_days5 == "Tues") {
			 CurDay5 = 2;
			 }
			 else if (m_days5 == "Wed") {
			 CurDay5 = 3;
			 }
			 else if (m_days5 == "Thurs") {
			 CurDay5 = 4;
			 }
			 else if (m_days5 == "Fri") {
			 CurDay5 = 5;
			 }
			 else if (m_days5 == "Sat") {
			 CurDay5 = 6;
			 }

			 int CurDay6;
			 if (m_days6 == "Sun") {
			 CurDay6 = 0;
			 }
			 else if (m_days6 == "Mon") {
			 CurDay6 = 1;
			 }
			 else if (m_days6 == "Tues") {
			 CurDay6 = 2;
			 }
			 else if (m_days6 == "Wed") {
			 CurDay6 = 3;
			 }
			 else if (m_days6 == "Thurs") {
			 CurDay6 = 4;
			 }
			 else if (m_days6 == "Fri") {
			 CurDay6 = 5;
			 }
			 else if (m_days6 == "Sat") {
			 CurDay6 = 6;
			 }


			 int CurDay7;
			 if (m_days7 == "Sun") {
			 CurDay7 = 0;
			 }
			 else if (m_days7 == "Mon") {
			 CurDay7 = 1;
			 }
			 else if (m_days7 == "Tues") {
			 CurDay7 = 2;
			 }
			 else if (m_days7 == "Wed") {
			 CurDay7 = 3;
			 }
			 else if (m_days7 == "Thurs") {
			 CurDay7 = 4;
			 }
			 else if (m_days7 == "Fri") {
			 CurDay7 = 5;
			 }
			 else if (m_days7 == "Sat") {
			 CurDay7 = 6;
			 }

			 int CurDay8;
			 if (m_days8 == "Sun") {
			 CurDay8 = 0;
			 }
			 else if (m_days8 == "Mon") {
			 CurDay8 = 1;
			 }
			 else if (m_days8 == "Tues") {
			 CurDay8 = 2;
			 }
			 else if (m_days8 == "Wed") {
			 CurDay8 = 3;
			 }
			 else if (m_days8 == "Thurs") {
			 CurDay8 = 4;
			 }
			 else if (m_days8 == "Fri") {
			 CurDay8 = 5;
			 }
			 else if (m_days8 == "Sat") {
			 CurDay8 = 6;
			 }

			 int CurDay9;
			 if (m_days9 == "Sun") {
			 CurDay9 = 0;
			 }
			 else if (m_days9 == "Mon") {
			 CurDay9 = 1;
			 }
			 else if (m_days9 == "Tues") {
			 CurDay9 = 2;
			 }
			 else if (m_days9 == "Wed") {
			 CurDay9 = 3;
			 }
			 else if (m_days9 == "Thurs") {
			 CurDay9 = 4;
			 }
			 else if (m_days9 == "Fri") {
			 CurDay9 = 5;
			 }
			 else if (m_days9 == "Sat") {
			 CurDay9 = 6;
			 }


			 int CurDay10;
			 if (m_days10 == "Sun") {
			 CurDay10 = 0;
			 }
			 else if (m_days10 == "Mon") {
			 CurDay10 = 1;
			 }
			 else if (m_days10 == "Tues") {
			 CurDay10 = 2;
			 }
			 else if (m_days10 == "Wed") {
			 CurDay10 = 3;
			 }
			 else if (m_days10 == "Thurs") {
			 CurDay10 = 4;
			 }
			 else if (m_days10 == "Fri") {
			 CurDay10 = 5;
			 }
			 else if (m_days10 == "Sat") {
			 CurDay10 = 6;
			 }

			 int CurDay11;
			 if (m_days11 == "Sun") {
			 CurDay11 = 0;
			 }
			 else if (m_days11 == "Mon") {
			 CurDay11 = 1;
			 }
			 else if (m_days11 == "Tues") {
			 CurDay11 = 2;
			 }
			 else if (m_days11 == "Wed") {
			 CurDay11 = 3;
			 }
			 else if (m_days11 == "Thurs") {
			 CurDay11 = 4;
			 }
			 else if (m_days11 == "Fri") {
			 CurDay11 = 5;
			 }
			 else if (m_days11 == "Sat") {
			 CurDay11 = 6;
			 }
			 
			 int CurDay12;
			 if (m_days12 == "Sun") {
			 CurDay12 = 0;
			 }
			 else if (m_days12 == "Mon") {
			 CurDay12 = 1;
			 }
			 else if (m_days12 == "Tues") {
			 CurDay12 = 2;
			 }
			 else if (m_days12 == "Wed") {
			 CurDay12 = 3;
			 }
			 else if (m_days12 == "Thurs") {
			 CurDay12 = 4;
			 }
			 else if (m_days12 == "Fri") {
			 CurDay12 = 5;
			 }
			 else if (m_days12 == "Sat") {
			 CurDay12 = 6;
			 }
			 

			 int CurDay13;
			 if (m_days13 == "Sun") {
			 CurDay13 = 0;
			 }
			 else if (m_days13 == "Mon") {
			 CurDay13 = 1;
			 }
			 else if (m_days13 == "Tues") {
			 CurDay13 = 2;
			 }
			 else if (m_days13 == "Wed") {
			 CurDay13 = 3;
			 }
			 else if (m_days13 == "Thurs") {
			 CurDay13 = 4;
			 }
			 else if (m_days13 == "Fri") {
			 CurDay13 = 5;
			 }
			 else if (m_days13 == "Sat") {
			 CurDay13 = 6;
			 }



/////////////////ALARM///////////////////////

if(m_check) {
if((strcmp("Everyday", m_days) == 0) || (strcmp("", m_days) == 0)) {
if((!m_mon && !m_date) || (m_mon == 0 && m_date == 0)) {
if ((CurTime.wHour == m_hour) && (CurTime.wMinute == m_minutes) && (CurTime.wSecond == 00) && (setampm == m_ampm))
{
CString msg;
msg.Format("%s %d:%d %s",m_name, m_hour, m_minutes, m_ampm);
addiconballoon(1,m_name,msg,m_name,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon) && (CurTime.wDay == m_date) && (CurTime.wHour == m_hour) && (CurTime.wMinute == m_minutes) && (CurTime.wSecond == 00) && (setampm == m_ampm))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name, m_hour, m_minutes, m_ampm, m_mon, m_date);
addiconballoon(1,m_name,msg,m_name,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days) {
if((!m_mon && !m_date) || (m_mon == 0 && m_date == 0)) {
if (CurTime.wDayOfWeek == CurDay && (CurTime.wHour == m_hour) && (CurTime.wMinute == m_minutes) && (CurTime.wSecond == 00) && (setampm == m_ampm)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name, m_days, m_hour, m_minutes, m_ampm);
addiconballoon(1,m_name,msg,m_name,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay && (CurTime.wMonth == m_mon) && (CurTime.wDay == m_date) && (CurTime.wHour == m_hour) && (CurTime.wMinute == m_minutes) && (CurTime.wSecond == 00) && (setampm == m_ampm)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name, m_days, m_hour, m_minutes, m_ampm, m_mon, m_date);
addiconballoon(1,m_name,msg,m_name,10); 
startanimateicon();	
}
}
}
//days end  
}

if(m_check2) {
if((strcmp("Everyday", m_days2) == 0) || (strcmp("", m_days2) == 0)) {
if((!m_mon2 && !m_date2) || (m_mon2 == 0 && m_date2 == 0)) {
if ((CurTime.wHour == m_hour2) && (CurTime.wMinute == m_minutes2) && (CurTime.wSecond == 00) && (setampm == m_ampm2))
{
CString msg;
msg.Format("%s %d:%d %s",m_name2, m_hour2, m_minutes2, m_ampm2);
addiconballoon(1,m_name2,msg,m_name2,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon2) && (CurTime.wDay == m_date2) && (CurTime.wHour == m_hour2) && (CurTime.wMinute == m_minutes2) && (CurTime.wSecond == 00) && (setampm == m_ampm2))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name2, m_hour2, m_minutes2, m_ampm2, m_mon2, m_date2);
addiconballoon(1,m_name2,msg,m_name2,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days2) {
if((!m_mon2 && !m_date2) || (m_mon2 == 0 && m_date2 == 0)) {
if (CurTime.wDayOfWeek == CurDay2 && (CurTime.wHour == m_hour2) && (CurTime.wMinute == m_minutes2) && (CurTime.wSecond == 00) && (setampm == m_ampm2)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name2, m_days2, m_hour2, m_minutes2, m_ampm2);
addiconballoon(1,m_name2,msg,m_name2,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay2 && (CurTime.wMonth == m_mon2) && (CurTime.wDay == m_date2) && (CurTime.wHour == m_hour2) && (CurTime.wMinute == m_minutes2) && (CurTime.wSecond == 00) && (setampm == m_ampm2)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name2, m_days2, m_hour2, m_minutes2, m_ampm2, m_mon2, m_date2);
addiconballoon(1,m_name2,msg,m_name2,10); 
startanimateicon();	
}
}
}
//days end 
}

if(m_check3) {
if((strcmp("Everyday", m_days3) == 0) || (strcmp("", m_days3) == 0)) {
if((!m_mon3 && !m_date3) || (m_mon3 == 0 && m_date3 == 0)) {
if ((CurTime.wHour == m_hour3) && (CurTime.wMinute == m_minutes3) && (CurTime.wSecond == 00) && (setampm == m_ampm3))
{
CString msg;
msg.Format("%s %d:%d %s",m_name3, m_hour3, m_minutes3, m_ampm3);
addiconballoon(1,m_name3,msg,m_name3,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon3) && (CurTime.wDay == m_date3) && (CurTime.wHour == m_hour3) && (CurTime.wMinute == m_minutes3) && (CurTime.wSecond == 00) && (setampm == m_ampm3))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name3, m_hour3, m_minutes3, m_ampm3, m_mon3, m_date3);
addiconballoon(1,m_name3,msg,m_name3,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days3) {
if((!m_mon3 && !m_date3) || (m_mon3 == 0 && m_date3 == 0)) {
if (CurTime.wDayOfWeek == CurDay3 && (CurTime.wHour == m_hour3) && (CurTime.wMinute == m_minutes3) && (CurTime.wSecond == 00) && (setampm == m_ampm3)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name3, m_days3, m_hour3, m_minutes3, m_ampm3);
addiconballoon(1,m_name3,msg,m_name3,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay3 && (CurTime.wMonth == m_mon3) && (CurTime.wDay == m_date3) && (CurTime.wHour == m_hour3) && (CurTime.wMinute == m_minutes3) && (CurTime.wSecond == 00) && (setampm == m_ampm3)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name3, m_days3, m_hour3, m_minutes3, m_ampm3, m_mon3, m_date3);
addiconballoon(1,m_name3,msg,m_name3,10); 
startanimateicon();	
}
}
}
//days end 
}

if(m_check4) {
if((strcmp("Everyday", m_days4) == 0) || (strcmp("", m_days4) == 0)) {
if((!m_mon4 && !m_date4) || (m_mon4 == 0 && m_date4 == 0)) {
if ((CurTime.wHour == m_hour4) && (CurTime.wMinute == m_minutes4) && (CurTime.wSecond == 00) && (setampm == m_ampm4))
{
CString msg;
msg.Format("%s %d:%d %s",m_name4, m_hour4, m_minutes4, m_ampm4);
addiconballoon(1,m_name4,msg,m_name4,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon4) && (CurTime.wDay == m_date4) && (CurTime.wHour == m_hour4) && (CurTime.wMinute == m_minutes4) && (CurTime.wSecond == 00) && (setampm == m_ampm4))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name4, m_hour4, m_minutes4, m_ampm4, m_mon4, m_date4);
addiconballoon(1,m_name4,msg,m_name4,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days4) {
if((!m_mon4 && !m_date4) || (m_mon4 == 0 && m_date4 == 0)) {
if (CurTime.wDayOfWeek == CurDay4 && (CurTime.wHour == m_hour4) && (CurTime.wMinute == m_minutes4) && (CurTime.wSecond == 00) && (setampm == m_ampm4)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name4, m_days4, m_hour4, m_minutes4, m_ampm4);
addiconballoon(1,m_name4,msg,m_name4,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay4 && (CurTime.wMonth == m_mon4) && (CurTime.wDay == m_date4) && (CurTime.wHour == m_hour4) && (CurTime.wMinute == m_minutes4) && (CurTime.wSecond == 00) && (setampm == m_ampm4)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name4, m_days4, m_hour4, m_minutes4, m_ampm4, m_mon4, m_date4);
addiconballoon(1,m_name4,msg,m_name4,10); 
startanimateicon();	
}
}
}
//days end 
}

if(m_check5) {
if((strcmp("Everyday", m_days5) == 0) || (strcmp("", m_days5) == 0)) {
if((!m_mon5 && !m_date5) || (m_mon5 == 0 && m_date5 == 0)) {
if ((CurTime.wHour == m_hour5) && (CurTime.wMinute == m_minutes5) && (CurTime.wSecond == 00) && (setampm == m_ampm5))
{
CString msg;
msg.Format("%s %d:%d %s",m_name5, m_hour5, m_minutes5, m_ampm5);
addiconballoon(1,m_name5,msg,m_name5,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon5) && (CurTime.wDay == m_date5) && (CurTime.wHour == m_hour5) && (CurTime.wMinute == m_minutes5) && (CurTime.wSecond == 00) && (setampm == m_ampm5))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name5, m_hour5, m_minutes5, m_ampm5, m_mon5, m_date5);
addiconballoon(1,m_name5,msg,m_name5,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days5) {
if((!m_mon5 && !m_date5) || (m_mon5 == 0 && m_date5 == 0)) {
if (CurTime.wDayOfWeek == CurDay5 && (CurTime.wHour == m_hour5) && (CurTime.wMinute == m_minutes5) && (CurTime.wSecond == 00) && (setampm == m_ampm5)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name5, m_days5, m_hour5, m_minutes5, m_ampm5);
addiconballoon(1,m_name5,msg,m_name5,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay5 && (CurTime.wMonth == m_mon5) && (CurTime.wDay == m_date5) && (CurTime.wHour == m_hour5) && (CurTime.wMinute == m_minutes5) && (CurTime.wSecond == 00) && (setampm == m_ampm5)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name5, m_days5, m_hour5, m_minutes5, m_ampm5, m_mon5, m_date5);
addiconballoon(1,m_name5,msg,m_name5,10); 
startanimateicon();	
}
}
}
//days end 
}


if(m_check6) {
if((strcmp("Everyday", m_days6) == 0) || (strcmp("", m_days6) == 0)) {
if((!m_mon6 && !m_date6) || (m_mon6 == 0 && m_date6 == 0)) {
if ((CurTime.wHour == m_hour6) && (CurTime.wMinute == m_minutes6) && (CurTime.wSecond == 00) && (setampm == m_ampm6))
{
CString msg;
msg.Format("%s %d:%d %s",m_name6, m_hour6, m_minutes6, m_ampm6);
addiconballoon(1,m_name6,msg,m_name6,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon6) && (CurTime.wDay == m_date6) && (CurTime.wHour == m_hour6) && (CurTime.wMinute == m_minutes6) && (CurTime.wSecond == 00) && (setampm == m_ampm6))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name6, m_hour6, m_minutes6, m_ampm6, m_mon6, m_date6);
addiconballoon(1,m_name6,msg,m_name6,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days6) {
if((!m_mon6 && !m_date6) || (m_mon6 == 0 && m_date6 == 0)) {
if (CurTime.wDayOfWeek == CurDay6 && (CurTime.wHour == m_hour6) && (CurTime.wMinute == m_minutes6) && (CurTime.wSecond == 00) && (setampm == m_ampm6)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name6, m_days6, m_hour6, m_minutes6, m_ampm6);
addiconballoon(1,m_name6,msg,m_name6,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay6 && (CurTime.wMonth == m_mon6) && (CurTime.wDay == m_date6) && (CurTime.wHour == m_hour6) && (CurTime.wMinute == m_minutes6) && (CurTime.wSecond == 00) && (setampm == m_ampm6)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name6, m_days6, m_hour6, m_minutes6, m_ampm6, m_mon6, m_date6);
addiconballoon(1,m_name6,msg,m_name6,10); 
startanimateicon();	
}
}
}
//days end 
}


if(m_check7) {
if((strcmp("Everyday", m_days7) == 0) || (strcmp("", m_days7) == 0)) {
if((!m_mon7 && !m_date7) || (m_mon7 == 0 && m_date7 == 0)) {
if ((CurTime.wHour == m_hour7) && (CurTime.wMinute == m_minutes7) && (CurTime.wSecond == 00) && (setampm == m_ampm7))
{
CString msg;
msg.Format("%s %d:%d %s",m_name7, m_hour7, m_minutes7, m_ampm7);
addiconballoon(1,m_name7,msg,m_name7,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon7) && (CurTime.wDay == m_date7) && (CurTime.wHour == m_hour7) && (CurTime.wMinute == m_minutes7) && (CurTime.wSecond == 00) && (setampm == m_ampm7))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name7, m_hour7, m_minutes7, m_ampm7, m_mon7, m_date7);
addiconballoon(1,m_name7,msg,m_name7,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days7) {
if((!m_mon7 && !m_date7) || (m_mon7 == 0 && m_date7 == 0)) {
if (CurTime.wDayOfWeek == CurDay7 && (CurTime.wHour == m_hour7) && (CurTime.wMinute == m_minutes7) && (CurTime.wSecond == 00) && (setampm == m_ampm7)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name7, m_days7, m_hour7, m_minutes7, m_ampm7);
addiconballoon(1,m_name7,msg,m_name7,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay7 && (CurTime.wMonth == m_mon7) && (CurTime.wDay == m_date7) && (CurTime.wHour == m_hour7) && (CurTime.wMinute == m_minutes7) && (CurTime.wSecond == 00) && (setampm == m_ampm7)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name7, m_days7, m_hour7, m_minutes7, m_ampm7, m_mon7, m_date7);
addiconballoon(1,m_name7,msg,m_name7,10); 
startanimateicon();	
}
}
}
//days end 
}



if(m_check8) {
if((strcmp("Everyday", m_days8) == 0) || (strcmp("", m_days8) == 0)) {
if((!m_mon8 && !m_date8) || (m_mon8 == 0 && m_date8 == 0)) {
if ((CurTime.wHour == m_hour8) && (CurTime.wMinute == m_minutes8) && (CurTime.wSecond == 00) && (setampm == m_ampm8))
{
CString msg;
msg.Format("%s %d:%d %s",m_name8, m_hour8, m_minutes8, m_ampm8);
addiconballoon(1,m_name8,msg,m_name8,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon8) && (CurTime.wDay == m_date8) && (CurTime.wHour == m_hour8) && (CurTime.wMinute == m_minutes8) && (CurTime.wSecond == 00) && (setampm == m_ampm8))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name8, m_hour8, m_minutes8, m_ampm8, m_mon8, m_date8);
addiconballoon(1,m_name8,msg,m_name8,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days8) {
if((!m_mon8 && !m_date8) || (m_mon8 == 0 && m_date8 == 0)) {
if (CurTime.wDayOfWeek == CurDay8 && (CurTime.wHour == m_hour8) && (CurTime.wMinute == m_minutes8) && (CurTime.wSecond == 00) && (setampm == m_ampm8)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name8, m_days8, m_hour8, m_minutes8, m_ampm8);
addiconballoon(1,m_name8,msg,m_name8,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay8 && (CurTime.wMonth == m_mon8) && (CurTime.wDay == m_date8) && (CurTime.wHour == m_hour8) && (CurTime.wMinute == m_minutes8) && (CurTime.wSecond == 00) && (setampm == m_ampm8)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name8, m_days8, m_hour8, m_minutes8, m_ampm8, m_mon8, m_date8);
addiconballoon(1,m_name8,msg,m_name8,10); 
startanimateicon();	
}
}
}
//days end 
}


if(m_check9) {
if((strcmp("Everyday", m_days9) == 0) || (strcmp("", m_days9) == 0)) {
if((!m_mon9 && !m_date9) || (m_mon9 == 0 && m_date9 == 0)) {
if ((CurTime.wHour == m_hour9) && (CurTime.wMinute == m_minutes9) && (CurTime.wSecond == 00) && (setampm == m_ampm9))
{
CString msg;
msg.Format("%s %d:%d %s",m_name9, m_hour9, m_minutes9, m_ampm9);
addiconballoon(1,m_name9,msg,m_name9,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon9) && (CurTime.wDay == m_date9) && (CurTime.wHour == m_hour9) && (CurTime.wMinute == m_minutes9) && (CurTime.wSecond == 00) && (setampm == m_ampm9))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name9, m_hour9, m_minutes9, m_ampm9, m_mon9, m_date9);
addiconballoon(1,m_name9,msg,m_name9,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days9) {
if((!m_mon9 && !m_date9) || (m_mon9 == 0 && m_date9 == 0)) {
if (CurTime.wDayOfWeek == CurDay9 && (CurTime.wHour == m_hour9) && (CurTime.wMinute == m_minutes9) && (CurTime.wSecond == 00) && (setampm == m_ampm9)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name9, m_days9, m_hour9, m_minutes9, m_ampm9);
addiconballoon(1,m_name9,msg,m_name9,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay9 && (CurTime.wMonth == m_mon9) && (CurTime.wDay == m_date9) && (CurTime.wHour == m_hour9) && (CurTime.wMinute == m_minutes9) && (CurTime.wSecond == 00) && (setampm == m_ampm9)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name9, m_days9, m_hour9, m_minutes9, m_ampm9, m_mon9, m_date9);
addiconballoon(1,m_name9,msg,m_name9,10); 
startanimateicon();	
}
}
}
//days end 
}


if(m_check10) {
if((strcmp("Everyday", m_days10) == 0) || (strcmp("", m_days10) == 0)) {
if((!m_mon10 && !m_date10) || (m_mon10 == 0 && m_date10 == 0)) {
if ((CurTime.wHour == m_hour10) && (CurTime.wMinute == m_minutes10) && (CurTime.wSecond == 00) && (setampm == m_ampm10))
{
CString msg;
msg.Format("%s %d:%d %s",m_name10, m_hour10, m_minutes10, m_ampm10);
addiconballoon(1,m_name10,msg,m_name10,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon10) && (CurTime.wDay == m_date10) && (CurTime.wHour == m_hour10) && (CurTime.wMinute == m_minutes10) && (CurTime.wSecond == 00) && (setampm == m_ampm10))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name10, m_hour10, m_minutes10, m_ampm10, m_mon10, m_date10);
addiconballoon(1,m_name10,msg,m_name10,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days10) {
if((!m_mon10 && !m_date10) || (m_mon10 == 0 && m_date10 == 0)) {
if (CurTime.wDayOfWeek == CurDay10 && (CurTime.wHour == m_hour10) && (CurTime.wMinute == m_minutes10) && (CurTime.wSecond == 00) && (setampm == m_ampm10)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name10, m_days10, m_hour10, m_minutes10, m_ampm10);
addiconballoon(1,m_name10,msg,m_name10,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay10 && (CurTime.wMonth == m_mon10) && (CurTime.wDay == m_date10) && (CurTime.wHour == m_hour10) && (CurTime.wMinute == m_minutes10) && (CurTime.wSecond == 00) && (setampm == m_ampm10)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name10, m_days10, m_hour10, m_minutes10, m_ampm10, m_mon10, m_date10);
addiconballoon(1,m_name10,msg,m_name10,10); 
startanimateicon();	
}
}
}
//days end 
}

if(m_check11) {
if((strcmp("Everyday", m_days11) == 0) || (strcmp("", m_days11) == 0)) {
if((!m_mon11 && !m_date11) || (m_mon11 == 0 && m_date11 == 0)) {
if ((CurTime.wHour == m_hour11) && (CurTime.wMinute == m_minutes11) && (CurTime.wSecond == 00) && (setampm == m_ampm11))
{
CString msg;
msg.Format("%s %d:%d %s",m_name11, m_hour11, m_minutes11, m_ampm11);
addiconballoon(1,m_name11,msg,m_name11,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon11) && (CurTime.wDay == m_date11) && (CurTime.wHour == m_hour11) && (CurTime.wMinute == m_minutes11) && (CurTime.wSecond == 00) && (setampm == m_ampm11))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name11, m_hour11, m_minutes11, m_ampm11, m_mon11, m_date11);
addiconballoon(1,m_name11,msg,m_name11,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days11) {
if((!m_mon11 && !m_date11) || (m_mon11 == 0 && m_date11 == 0)) {
if (CurTime.wDayOfWeek == CurDay11 && (CurTime.wHour == m_hour11) && (CurTime.wMinute == m_minutes11) && (CurTime.wSecond == 00) && (setampm == m_ampm11)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name11, m_days11, m_hour11, m_minutes11, m_ampm11);
addiconballoon(1,m_name11,msg,m_name11,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay11 && (CurTime.wMonth == m_mon11) && (CurTime.wDay == m_date11) && (CurTime.wHour == m_hour11) && (CurTime.wMinute == m_minutes11) && (CurTime.wSecond == 00) && (setampm == m_ampm11)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name11, m_days11, m_hour11, m_minutes11, m_ampm11, m_mon11, m_date11);
addiconballoon(1,m_name11,msg,m_name11,10); 
startanimateicon();	
}
}
}
//days end 
}


if(m_check12) {
if((strcmp("Everyday", m_days12) == 0) || (strcmp("", m_days12) == 0)) {
if((!m_mon12 && !m_date12) || (m_mon12 == 0 && m_date12 == 0)) {
if ((CurTime.wHour == m_hour12) && (CurTime.wMinute == m_minutes12) && (CurTime.wSecond == 00) && (setampm == m_ampm12))
{
CString msg;
msg.Format("%s %d:%d %s",m_name12, m_hour12, m_minutes12, m_ampm12);
addiconballoon(1,m_name12,msg,m_name12,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon12) && (CurTime.wDay == m_date12) && (CurTime.wHour == m_hour12) && (CurTime.wMinute == m_minutes12) && (CurTime.wSecond == 00) && (setampm == m_ampm12))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name12, m_hour12, m_minutes12, m_ampm12, m_mon12, m_date12);
addiconballoon(1,m_name12,msg,m_name12,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days12) {
if((!m_mon12 && !m_date12) || (m_mon12 == 0 && m_date12 == 0)) {
if (CurTime.wDayOfWeek == CurDay12 && (CurTime.wHour == m_hour12) && (CurTime.wMinute == m_minutes12) && (CurTime.wSecond == 00) && (setampm == m_ampm12)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name12, m_days12, m_hour12, m_minutes12, m_ampm12);
addiconballoon(1,m_name12,msg,m_name12,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay12 && (CurTime.wMonth == m_mon12) && (CurTime.wDay == m_date12) && (CurTime.wHour == m_hour12) && (CurTime.wMinute == m_minutes12) && (CurTime.wSecond == 00) && (setampm == m_ampm12)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name12, m_days12, m_hour12, m_minutes12, m_ampm12, m_mon12, m_date12);
addiconballoon(1,m_name12,msg,m_name12,10); 
startanimateicon();	
}
}
}
//days end 
}

if(m_check13) {
if((strcmp("Everyday", m_days13) == 0) || (strcmp("", m_days13) == 0)) {
if((!m_mon13 && !m_date13) || (m_mon13 == 0 && m_date13 == 0)) {
if ((CurTime.wHour == m_hour13) && (CurTime.wMinute == m_minutes13) && (CurTime.wSecond == 00) && (setampm == m_ampm13))
{
CString msg;
msg.Format("%s %d:%d %s",m_name13, m_hour13, m_minutes13, m_ampm13);
addiconballoon(1,m_name13,msg,m_name13,10); 
startanimateicon();	
}
} else {
if ((CurTime.wMonth == m_mon13) && (CurTime.wDay == m_date13) && (CurTime.wHour == m_hour13) && (CurTime.wMinute == m_minutes13) && (CurTime.wSecond == 00) && (setampm == m_ampm13))
{
CString msg;
msg.Format("%s %d:%d %s on %d/%d",m_name13, m_hour13, m_minutes13, m_ampm13, m_mon13, m_date13);
addiconballoon(1,m_name13,msg,m_name13,10); 
startanimateicon();			
}
}
}

//check for everyday or every monday or one of weekdays....//
if (m_days13) {
if((!m_mon13 && !m_date13) || (m_mon13 == 0 && m_date13 == 0)) {
if (CurTime.wDayOfWeek == CurDay13 && (CurTime.wHour == m_hour13) && (CurTime.wMinute == m_minutes13) && (CurTime.wSecond == 00) && (setampm == m_ampm13)) {
CString msg;
msg.Format("%s %s at %d:%d %s",m_name13, m_days13, m_hour13, m_minutes13, m_ampm13);
addiconballoon(1,m_name13,msg,m_name13,10); 
startanimateicon();	
} 
} else {	
if (CurTime.wDayOfWeek == CurDay13 && (CurTime.wMonth == m_mon13) && (CurTime.wDay == m_date13) && (CurTime.wHour == m_hour13) && (CurTime.wMinute == m_minutes13) && (CurTime.wSecond == 00) && (setampm == m_ampm13)) {
CString msg;
msg.Format("%s %s at %d:%d %s on %d/%d",m_name13, m_days13, m_hour13, m_minutes13, m_ampm13, m_mon13, m_date13);
addiconballoon(1,m_name13,msg,m_name13,10); 
startanimateicon();	
}
}
}
//days end 
}

////////////////END OF ALARM///////////////////////////////////////

/// systray animation ///
if (m_animate == 1) {
	static int nCounter = 0;
	animateicon(nCounter); 
	nCounter++;
	nCounter = nCounter%(NUM_ICONS_IN_ANIMATION);    
		}
/// systray animation ///	



    	CDialog::OnTimer(nIDEvent);
}




void CMyDigClockDlg::OnSetalarm() 
{

UpdateData(TRUE); 

if (m_mon == NULL || m_date == NULL) {
m_mon = 0; 
m_date = 0; 
}

if (m_mon2 == NULL || m_date2 == NULL) {
m_mon2 = 0; 
m_date2 = 0; 
}


if (m_mon3 == NULL || m_date3 == NULL) {
m_mon3 = 0; 
m_date3 = 0; 
}

if (m_mon4 == NULL || m_date4 == NULL) {
m_mon4 = 0; 
m_date4 = 0; 
}

if (m_mon5 == NULL || m_date5 == NULL) {
m_mon5 = 0; 
m_date5 = 0; 
}

if (m_mon6 == NULL || m_date6 == NULL) {
m_mon6 = 0; 
m_date6 = 0; 
}

if (m_mon7 == NULL || m_date7 == NULL) {
m_mon7 = 0; 
m_date7 = 0; 
}

if (m_mon8 == NULL || m_date8 == NULL) {
m_mon8 = 0; 
m_date8 = 0; 
}

if (m_mon9 == NULL || m_date9 == NULL) {
m_mon9 = 0; 
m_date9 = 0; 
}

if (m_mon10 == NULL || m_date10 == NULL) {
m_mon10 = 0; 
m_date10 = 0; 
}


if (m_mon11 == NULL || m_date11 == NULL) {
m_mon11 = 0; 
m_date11 = 0; 
}


if (m_mon12 == NULL || m_date12 == NULL) {
m_mon12 = 0; 
m_date12 = 0; 
}

if (m_mon13 == NULL || m_date13 == NULL) {
m_mon13 = 0; 
m_date13 = 0; 
}

	
char sIniFile[MAX_PATH];
GetModuleFileName( NULL, sIniFile, MAX_PATH );
strcpy( strrchr( sIniFile, '\\' ) + 1, "reminderclock.ini" );

char ahour[40];
wsprintf(ahour, "%d", m_hour);
char aminutes[40];
wsprintf(aminutes, "%d", m_minutes);
char amon[40];
wsprintf(amon, "%d", m_mon);
char adate[40];
wsprintf(adate, "%d", m_date);

char ahour2[40];
wsprintf(ahour2, "%d", m_hour2);
char aminutes2[40];
wsprintf(aminutes2, "%d", m_minutes2);
char amon2[40];
wsprintf(amon2, "%d", m_mon2);
char adate2[40];
wsprintf(adate2, "%d", m_date2);

char ahour3[40];
wsprintf(ahour3, "%d", m_hour3);
char aminutes3[40];
wsprintf(aminutes3, "%d", m_minutes3);
char amon3[40];
wsprintf(amon3, "%d", m_mon3);
char adate3[40];
wsprintf(adate3, "%d", m_date3);

char ahour4[40];
wsprintf(ahour4, "%d", m_hour4);
char aminutes4[40];
wsprintf(aminutes4, "%d", m_minutes4);
char amon4[40];
wsprintf(amon4, "%d", m_mon4);
char adate4[40];
wsprintf(adate4, "%d", m_date4);

char ahour5[40];
wsprintf(ahour5, "%d", m_hour5);
char aminutes5[40];
wsprintf(aminutes5, "%d", m_minutes5);
char amon5[40];
wsprintf(amon5, "%d", m_mon5);
char adate5[40];
wsprintf(adate5, "%d", m_date5);

char ahour6[40];
wsprintf(ahour6, "%d", m_hour6);
char aminutes6[40];
wsprintf(aminutes6, "%d", m_minutes6);
char amon6[40];
wsprintf(amon6, "%d", m_mon6);
char adate6[40];
wsprintf(adate6, "%d", m_date6);

char ahour7[40];
wsprintf(ahour7, "%d", m_hour7);
char aminutes7[40];
wsprintf(aminutes7, "%d", m_minutes7);
char amon7[40];
wsprintf(amon7, "%d", m_mon7);
char adate7[40];
wsprintf(adate7, "%d", m_date7);

char ahour8[40];
wsprintf(ahour8, "%d", m_hour8);
char aminutes8[40];
wsprintf(aminutes8, "%d", m_minutes8);
char amon8[40];
wsprintf(amon8, "%d", m_mon8);
char adate8[40];
wsprintf(adate8, "%d", m_date8);

char ahour9[40];
wsprintf(ahour9, "%d", m_hour9);
char aminutes9[40];
wsprintf(aminutes9, "%d", m_minutes9);
char amon9[40];
wsprintf(amon9, "%d", m_mon9);
char adate9[40];
wsprintf(adate9, "%d", m_date9);

char ahour10[40];
wsprintf(ahour10, "%d", m_hour10);
char aminutes10[40];
wsprintf(aminutes10, "%d", m_minutes10);
char amon10[40];
wsprintf(amon10, "%d", m_mon10);
char adate10[40];
wsprintf(adate10, "%d", m_date10);

char ahour11[40];
wsprintf(ahour11, "%d", m_hour11);
char aminutes11[40];
wsprintf(aminutes11, "%d", m_minutes11);
char amon11[40];
wsprintf(amon11, "%d", m_mon11);
char adate11[40];
wsprintf(adate11, "%d", m_date11);

char ahour12[40];
wsprintf(ahour12, "%d", m_hour12);
char aminutes12[40];
wsprintf(aminutes12, "%d", m_minutes12);
char amon12[40];
wsprintf(amon12, "%d", m_mon12);
char adate12[40];
wsprintf(adate12, "%d", m_date12);

char ahour13[40];
wsprintf(ahour13, "%d", m_hour13);
char aminutes13[40];
wsprintf(aminutes13, "%d", m_minutes13);
char amon13[40];
wsprintf(amon13, "%d", m_mon13);
char adate13[40];
wsprintf(adate13, "%d", m_date13);

UpdateData();

CString scheck;
int check = m_check;
scheck.Format("%d",check);
WritePrivateProfileString ("BOX1", "Enable", scheck, sIniFile);
WritePrivateProfileString ("BOX1", "Title", m_name, sIniFile);
WritePrivateProfileString ("BOX1", "Hour", ahour, sIniFile);
WritePrivateProfileString ("BOX1", "Minutes", aminutes, sIniFile);
WritePrivateProfileString ("BOX1", "AM_PM", m_ampm, sIniFile);
WritePrivateProfileString ("BOX1", "Days", m_days, sIniFile);
WritePrivateProfileString ("BOX1", "Month", amon, sIniFile);
WritePrivateProfileString ("BOX1", "Day", adate, sIniFile);

CString scheck2;
int check2 = m_check2;
scheck2.Format("%d",check2);
WritePrivateProfileString ("BOX2", "Enable", scheck2, sIniFile);
WritePrivateProfileString ("BOX2", "Title", m_name2, sIniFile);
WritePrivateProfileString ("BOX2", "Hour", ahour2, sIniFile);
WritePrivateProfileString ("BOX2", "Minutes", aminutes2, sIniFile);
WritePrivateProfileString ("BOX2", "AM_PM", m_ampm2, sIniFile);
WritePrivateProfileString ("BOX2", "Days", m_days2, sIniFile);
WritePrivateProfileString ("BOX2", "Month", amon2, sIniFile);
WritePrivateProfileString ("BOX2", "Day", adate2, sIniFile);

CString scheck3;
int check3 = m_check3;
scheck3.Format("%d",check3);
WritePrivateProfileString ("BOX3", "Enable", scheck3, sIniFile);
WritePrivateProfileString ("BOX3", "Title", m_name3, sIniFile);
WritePrivateProfileString ("BOX3", "Hour", ahour3, sIniFile);
WritePrivateProfileString ("BOX3", "Minutes", aminutes3, sIniFile);
WritePrivateProfileString ("BOX3", "AM_PM", m_ampm3, sIniFile);
WritePrivateProfileString ("BOX3", "Days", m_days3, sIniFile);
WritePrivateProfileString ("BOX3", "Month", amon3, sIniFile);
WritePrivateProfileString ("BOX3", "Day", adate3, sIniFile);

CString scheck4;
int check4 = m_check4;
scheck4.Format("%d",check4);
WritePrivateProfileString ("BOX4", "Enable", scheck4, sIniFile);
WritePrivateProfileString ("BOX4", "Title", m_name4, sIniFile);
WritePrivateProfileString ("BOX4", "Hour", ahour4, sIniFile);
WritePrivateProfileString ("BOX4", "Minutes", aminutes4, sIniFile);
WritePrivateProfileString ("BOX4", "AM_PM", m_ampm4, sIniFile);
WritePrivateProfileString ("BOX4", "Days", m_days4, sIniFile);
WritePrivateProfileString ("BOX4", "Month", amon4, sIniFile);
WritePrivateProfileString ("BOX4", "Day", adate4, sIniFile);

CString scheck5;
int check5 = m_check5;
scheck5.Format("%d",check5);
WritePrivateProfileString ("BOX5", "Enable", scheck5, sIniFile);
WritePrivateProfileString ("BOX5", "Title", m_name5, sIniFile);
WritePrivateProfileString ("BOX5", "Hour", ahour5, sIniFile);
WritePrivateProfileString ("BOX5", "Minutes", aminutes5, sIniFile);
WritePrivateProfileString ("BOX5", "AM_PM", m_ampm5, sIniFile);
WritePrivateProfileString ("BOX5", "Days", m_days5, sIniFile);
WritePrivateProfileString ("BOX5", "Month", amon5, sIniFile);
WritePrivateProfileString ("BOX5", "Day", adate5, sIniFile);

CString scheck6;
int check6 = m_check6;
scheck6.Format("%d",check6);
WritePrivateProfileString ("BOX6", "Enable", scheck6, sIniFile);
WritePrivateProfileString ("BOX6", "Title", m_name6, sIniFile);
WritePrivateProfileString ("BOX6", "Hour", ahour6, sIniFile);
WritePrivateProfileString ("BOX6", "Minutes", aminutes6, sIniFile);
WritePrivateProfileString ("BOX6", "AM_PM", m_ampm6, sIniFile);
WritePrivateProfileString ("BOX6", "Days", m_days6, sIniFile);
WritePrivateProfileString ("BOX6", "Month", amon6, sIniFile);
WritePrivateProfileString ("BOX6", "Day", adate6, sIniFile);

CString scheck7;
int check7 = m_check7;
scheck7.Format("%d",check7);
WritePrivateProfileString ("BOX7", "Enable", scheck7, sIniFile);
WritePrivateProfileString ("BOX7", "Title", m_name7, sIniFile);
WritePrivateProfileString ("BOX7", "Hour", ahour7, sIniFile);
WritePrivateProfileString ("BOX7", "Minutes", aminutes7, sIniFile);
WritePrivateProfileString ("BOX7", "AM_PM", m_ampm7, sIniFile);
WritePrivateProfileString ("BOX7", "Days", m_days7, sIniFile);
WritePrivateProfileString ("BOX7", "Month", amon7, sIniFile);
WritePrivateProfileString ("BOX7", "Day", adate7, sIniFile);

CString scheck8;
int check8 = m_check8;
scheck8.Format("%d",check8);
WritePrivateProfileString ("BOX8", "Enable", scheck8, sIniFile);
WritePrivateProfileString ("BOX8", "Title", m_name8, sIniFile);
WritePrivateProfileString ("BOX8", "Hour", ahour8, sIniFile);
WritePrivateProfileString ("BOX8", "Minutes", aminutes8, sIniFile);
WritePrivateProfileString ("BOX8", "AM_PM", m_ampm8, sIniFile);
WritePrivateProfileString ("BOX8", "Days", m_days8, sIniFile);
WritePrivateProfileString ("BOX8", "Month", amon8, sIniFile);
WritePrivateProfileString ("BOX8", "Day", adate8, sIniFile);

CString scheck9;
int check9 = m_check9;
scheck9.Format("%d",check9);
WritePrivateProfileString ("BOX9", "Enable", scheck9, sIniFile);
WritePrivateProfileString ("BOX9", "Title", m_name9, sIniFile);
WritePrivateProfileString ("BOX9", "Hour", ahour9, sIniFile);
WritePrivateProfileString ("BOX9", "Minutes", aminutes9, sIniFile);
WritePrivateProfileString ("BOX9", "AM_PM", m_ampm9, sIniFile);
WritePrivateProfileString ("BOX9", "Days", m_days9, sIniFile);
WritePrivateProfileString ("BOX9", "Month", amon9, sIniFile);
WritePrivateProfileString ("BOX9", "Day", adate9, sIniFile);

CString scheck10;
int check10 = m_check10;
scheck10.Format("%d",check10);
WritePrivateProfileString ("BOX10", "Enable", scheck10, sIniFile);
WritePrivateProfileString ("BOX10", "Title", m_name10, sIniFile);
WritePrivateProfileString ("BOX10", "Hour", ahour10, sIniFile);
WritePrivateProfileString ("BOX10", "Minutes", aminutes10, sIniFile);
WritePrivateProfileString ("BOX10", "AM_PM", m_ampm10, sIniFile);
WritePrivateProfileString ("BOX10", "Days", m_days10, sIniFile);
WritePrivateProfileString ("BOX10", "Month", amon10, sIniFile);
WritePrivateProfileString ("BOX10", "Day", adate10, sIniFile);

CString scheck11;
int check11 = m_check11;
scheck11.Format("%d",check11);
WritePrivateProfileString ("BOX11", "Enable", scheck11, sIniFile);
WritePrivateProfileString ("BOX11", "Title", m_name11, sIniFile);
WritePrivateProfileString ("BOX11", "Hour", ahour11, sIniFile);
WritePrivateProfileString ("BOX11", "Minutes", aminutes11, sIniFile);
WritePrivateProfileString ("BOX11", "AM_PM", m_ampm11, sIniFile);
WritePrivateProfileString ("BOX11", "Days", m_days11, sIniFile);
WritePrivateProfileString ("BOX11", "Month", amon11, sIniFile);
WritePrivateProfileString ("BOX11", "Day", adate11, sIniFile);

CString scheck12;
int check12 = m_check12;
scheck12.Format("%d",check12);
WritePrivateProfileString ("BOX12", "Enable", scheck12, sIniFile);
WritePrivateProfileString ("BOX12", "Title", m_name12, sIniFile);
WritePrivateProfileString ("BOX12", "Hour", ahour12, sIniFile);
WritePrivateProfileString ("BOX12", "Minutes", aminutes12, sIniFile);
WritePrivateProfileString ("BOX12", "AM_PM", m_ampm12, sIniFile);
WritePrivateProfileString ("BOX12", "Days", m_days12, sIniFile);
WritePrivateProfileString ("BOX12", "Month", amon12, sIniFile);
WritePrivateProfileString ("BOX12", "Day", adate12, sIniFile);

CString scheck13;
int check13 = m_check13;
scheck13.Format("%d",check13);
WritePrivateProfileString ("BOX13", "Enable", scheck13, sIniFile);
WritePrivateProfileString ("BOX13", "Title", m_name13, sIniFile);
WritePrivateProfileString ("BOX13", "Hour", ahour13, sIniFile);
WritePrivateProfileString ("BOX13", "Minutes", aminutes13, sIniFile);
WritePrivateProfileString ("BOX13", "AM_PM", m_ampm13, sIniFile);
WritePrivateProfileString ("BOX13", "Days", m_days13, sIniFile);
WritePrivateProfileString ("BOX13", "Month", amon13, sIniFile);
WritePrivateProfileString ("BOX13", "Day", adate13, sIniFile);

}




void CMyDigClockDlg::OnTest1() 
{

CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name, m_hour, m_minutes, m_ampm, m_days, m_mon, m_date);
addiconballoon(1,m_name,msg,m_name,10); 
startanimateicon();
	
}

void CMyDigClockDlg::OnTest2() 
{

CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name2, m_hour2, m_minutes2, m_ampm2, m_days2, m_mon2, m_date2);
addiconballoon(1,m_name2,msg,m_name2,10);
startanimateicon();	
}

void CMyDigClockDlg::OnTest3() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name3, m_hour3, m_minutes3, m_ampm3, m_days3, m_mon3, m_date3);
addiconballoon(1,m_name3,msg,m_name3,10);
startanimateicon();	
}

void CMyDigClockDlg::OnTest4() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name4, m_hour4, m_minutes4, m_ampm4, m_days4, m_mon4, m_date4);
addiconballoon(1,m_name4,msg,m_name4,10);
startanimateicon();	
}

void CMyDigClockDlg::OnTest5() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name5, m_hour5, m_minutes5, m_ampm5, m_days5, m_mon5, m_date6);
addiconballoon(1,m_name5,msg,m_name5,10);	
startanimateicon();
}

void CMyDigClockDlg::OnTest6() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name6, m_hour6, m_minutes6, m_ampm6, m_days6, m_mon6, m_date6);
addiconballoon(1,m_name6,msg,m_name6,10);
startanimateicon();	
}

void CMyDigClockDlg::OnTest7() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name7, m_hour7, m_minutes7, m_ampm7, m_days7, m_mon7, m_date7);
addiconballoon(1,m_name7,msg,m_name7,10);
startanimateicon();		
}

void CMyDigClockDlg::OnTest8() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name8, m_hour8, m_minutes8, m_ampm8, m_days8, m_mon8, m_date8);
addiconballoon(1,m_name8,msg,m_name8,10);
startanimateicon();		
}

void CMyDigClockDlg::OnTest9() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name9, m_hour9, m_minutes9, m_ampm9, m_days9, m_mon9, m_date9);
addiconballoon(1,m_name9,msg,m_name9,10);
startanimateicon();		
}

void CMyDigClockDlg::OnTest10() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name10, m_hour10, m_minutes10, m_ampm10, m_days10, m_mon10, m_date10);
addiconballoon(1,m_name10,msg,m_name10,10);
startanimateicon();		
}

void CMyDigClockDlg::OnTest11() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name11, m_hour11, m_minutes11, m_ampm11, m_days11, m_mon11, m_date11);
addiconballoon(1,m_name11,msg,m_name11,10);
startanimateicon();	
}

void CMyDigClockDlg::OnTest12() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name12, m_hour12, m_minutes12, m_ampm12, m_days12, m_mon12, m_date12);
addiconballoon(1,m_name12,msg,m_name12,10);
startanimateicon();	
}

void CMyDigClockDlg::OnTest13() 
{
CString msg;
msg.Format("%s %d:%d %s on %s %d/%d",m_name13, m_hour13, m_minutes13, m_ampm13, m_days13, m_mon13, m_date13);
addiconballoon(1,m_name13,msg,m_name13,10);
startanimateicon();		
}






void CMyDigClockDlg::OnAbout() 
{
	
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	
}

void CMyDigClockDlg::OnSavenote() 
{

char sIniFile[MAX_PATH];
GetModuleFileName( NULL, sIniFile, MAX_PATH );
strcpy( strrchr( sIniFile, '\\' ) + 1, "reminderclock.ini" );


WritePrivateProfileString("NOTEPAD", NULL, NULL, sIniFile);

CString text;
GetDlgItemText(IDC_NOTEPAD, text);
CString line, label;
int count=0;
int pos; 

while (!text.IsEmpty()) {
    pos = text.Find("\r\n");
     if (pos<0) {
          text += "\r\n";
          continue;
     }

    line = text.Left(pos);
    label.Format("note%i", ++count);
	WritePrivateProfileString("NOTEPAD", label, line, sIniFile);
    text.Delete(0, pos+2);

}
		

}


void CAboutDlg::OnUrl() 
{	
	
ShellExecute(NULL, "open", "http://bmx3r.com", NULL, NULL, SW_SHOWNORMAL);	

}

void CAboutDlg::OnPaint() 
{

CPaintDC dc(this); // device context for painting

	
CWnd* wnds;
wnds = GetDlgItem(IDC_URL); //get a pointer to the static control
CPaintDC dc2(wnds); // pointer to the device context of the static control
CFont f;
f.CreateFont( 11, // nHeight
               0, // nWidth
               0, // nEscapement
               0, // nOrientation
               FW_NORMAL, // nWeight
               FALSE, // bItalic
               TRUE, // bUnderline   <----
               0, // cStrikeOut
               ANSI_CHARSET, // nCharSet
               OUT_DEFAULT_PRECIS, // nOutPrecision
               CLIP_DEFAULT_PRECIS, // nClipPrecision
               DEFAULT_QUALITY, // nQuality
               DEFAULT_PITCH | FF_SWISS, // nPitchAndFamily
               _T("fixedsys")); // lpszFacename

CFont *pOldFont = (CFont*)dc2.SelectObject(&f); //select the font
dc2.SetBkMode(TRANSPARENT);   // we want to draw without background
dc2.SetTextColor(RGB(0,0,255));  //set the text-color to blue
CString xx;
m_link.GetWindowText(xx);  //get the text of the hyperlink
                           //you must assign a member control variable to your static
dc2.TextOut(0, 0, xx);     //(over)write the text in the static control
dc2.SelectObject(pOldFont);


}


BOOL CAboutDlg::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message) 
{

/*
if (pWnd->GetDlgCtrlID() == IDC_URL)
{
HCURSOR newcursor = AfxGetApp()->LoadStandardCursor(IDC_HAND);
SetCursor(newcursor);
return TRUE;
}

*/

if (pWnd->GetDlgCtrlID() == IDC_URL)
{
::SetCursor(AfxGetApp()->LoadStandardCursor(IDC_HAND));
return TRUE;

}


return CDialog::OnSetCursor(pWnd, nHitTest, message);

}
