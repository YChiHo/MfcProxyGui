
// NSS Ver 1.1Dlg.cpp : ���� ����
//

#include "stdafx.h"
#include "NSS Ver 1.1.h"
#include "NSS Ver 1.1Dlg.h"
#include "afxdialogex.h"
#include "Option_main.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
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


// CNSSVer11Dlg ��ȭ ����



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


// CNSSVer11Dlg �޽��� ó����

BOOL CNSSVer11Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
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

	// �� ��ȭ ������ �������� �����մϴ�.  ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
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

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�.  ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CNSSVer11Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
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



	// TODO:  RICHEDIT ��Ʈ���� ���, �� ��Ʈ����
	// CDialogEx::OnInitDialog() �Լ��� ������ 
	//�ϰ� ����ũ�� OR �����Ͽ� ������ ENM_CHANGE �÷��׸� �����Ͽ� CRichEditCtrl().SetEventMask()�� ȣ������ ������
	// �� �˸� �޽����� ������ �ʽ��ϴ�.

	// TODO:  ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
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

	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
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

	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CNSSVer11Dlg::OnBnClickedClear()
{
	CEdit m_EditBox;
	m_EditBox.SetSel(0, -1, TRUE);
	m_EditBox.Clear();

	//m_ctrListBox.ResetContent();
	//m_ctrListBox.AddString(_T("1. ���� Ű���� ���� �ø��� â�� ��µǴ��� Ȯ���Ͻÿ�."));
	//m_editInput.EnableWindow(true);
	//// m_hCommander->SendTestSeq(3);
	//m_editInput.SetFocus();
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CNSSVer11Dlg::OnBnClickedOption()
{
	Option_main option;
	option.DoModal();
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

UINT CNSSVer11Dlg::ThreadFirst(LPVOID _mothod) {
	//CNSSVer11Dlg *fir = (CNSSVer11Dlg*)_mothod;

	HINSTANCE hDll = LoadLibrary(_T("c:\\prodll.dll"));
	if (!hDll)
	{
		AfxMessageBox(_T("prodll.dll �ε����!"));
		return 0;
	}
	BOOL(*pRun)(LPSTR, LPSTR);
	pRun = (BOOL(*)(LPSTR, LPSTR))GetProcAddress(hDll, "SSL_run");
	if (!pRun)
	{
		AfxMessageBox(_T("�Լ��� ���� �ּ� ���� �����µ� �����߽��ϴ�."));
		return 0;
	}
	BOOL bRet = (*pRun)("", "8080");
	Sleep(1000);
	FreeLibrary(hDll);
	return 0;
}

