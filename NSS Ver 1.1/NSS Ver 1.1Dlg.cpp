
// NSS Ver 1.1Dlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "NSS Ver 1.1.h"
#include "NSS Ver 1.1Dlg.h"
#include "afxdialogex.h"
#include "Option_main.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
	GetDlgItem(IDC_STOP)->EnableWindow(FALSE);

}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CNSSVer11Dlg 대화 상자



CNSSVer11Dlg::CNSSVer11Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_NSSVER11_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CNSSVer11Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CNSSVer11Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, &CNSSVer11Dlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_START, &CNSSVer11Dlg::OnBnClickedStart)
	ON_BN_CLICKED(IDC_OPTION, &CNSSVer11Dlg::OnBnClickedOption)
	ON_BN_CLICKED(IDC_STOP, &CNSSVer11Dlg::OnBnClickedStop)
	ON_BN_CLICKED(IDC_CLEAR, &CNSSVer11Dlg::OnBnClickedClear)
END_MESSAGE_MAP()


// CNSSVer11Dlg 메시지 처리기

BOOL CNSSVer11Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CNSSVer11Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CNSSVer11Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CNSSVer11Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CNSSVer11Dlg::OnEnChangeEdit1()
{
	CEdit m_EditBox;

	CString sData;

	m_EditBox.ReplaceSel(sData);

	m_EditBox.LineScroll(m_EditBox.GetLineCount());



	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CNSSVer11Dlg::OnBnClickedStart()
{
	GetDlgItem(IDC_OPTION)->EnableWindow(FALSE);
	GetDlgItem(IDC_STOP)->EnableWindow(TRUE);

	p_ProxyThread = NULL;

	if (p_ProxyThread == NULL) {
		p_ProxyThread = AfxBeginThread(ThreadFirst, this);

		if (p_ProxyThread == NULL) {
			AfxMessageBox(L"Error");
		}

		p_ProxyThread->m_bAutoDelete = FALSE;
		m_eThreadWork = THREAD_RUNNING;
	}
	CloseHandle(p_ProxyThread);

	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CNSSVer11Dlg::OnBnClickedStop()
{
	p_ProxyThread->SuspendThread();
	DWORD dwResult;
	::GetExitCodeThread(p_ProxyThread->m_hThread, &dwResult);

	delete p_ProxyThread;
	p_ProxyThread = NULL;
	m_eThreadWork = THREAD_STOP;

	GetDlgItem(IDC_OPTION)->EnableWindow(TRUE);

	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CNSSVer11Dlg::OnBnClickedClear()
{
	CEdit m_EditBox;
	m_EditBox.SetSel(0, -1, TRUE);
	m_EditBox.Clear();

	//m_ctrListBox.ResetContent();
	//m_ctrListBox.AddString(_T("1. 눌린 키보드 값이 시리얼 창에 출력되는지 확인하시오."));
	//m_editInput.EnableWindow(true);
	//// m_hCommander->SendTestSeq(3);
	//m_editInput.SetFocus();
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CNSSVer11Dlg::OnBnClickedOption()
{
	Option_main option;
	option.DoModal();
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

UINT CNSSVer11Dlg::ThreadFirst(LPVOID _mothod) {
	//CNSSVer11Dlg *fir = (CNSSVer11Dlg*)_mothod;

	HINSTANCE hDll = LoadLibrary(_T("c:\\prodll.dll"));
	if (!hDll)
	{
		AfxMessageBox(_T("prodll.dll 로드실패!"));
		return 0;
	}
	BOOL(*pRun)(LPSTR, LPSTR);
	pRun = (BOOL(*)(LPSTR, LPSTR))GetProcAddress(hDll, "SSL_run");
	if (!pRun)
	{
		AfxMessageBox(_T("함수에 대한 주소 값을 얻어오는데 실패했습니다."));
		return 0;
	}
	BOOL bRet = (*pRun)("", "8080");
	Sleep(1000);
	FreeLibrary(hDll);
	return 0;
}

