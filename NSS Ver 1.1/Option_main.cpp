// Option_main.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "NSS Ver 1.1.h"
#include "Option_main.h"
#include "afxdialogex.h"

#define SAFE_DELETE(p) { if(p) {delete p; p = NULL;}}
// Option_main 대화 상자입니다.

IMPLEMENT_DYNAMIC(Option_main, CDialogEx)

Option_main::Option_main(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Option_main, pParent)
{
	m_pTap_Proxy = NULL;
	m_pTap_ARP = NULL;
	m_pTap_Others = NULL;
	c_pWnd = NULL;
}

Option_main::~Option_main()
{
	SAFE_DELETE(m_pTap_Proxy);
	SAFE_DELETE(m_pTap_ARP);
	SAFE_DELETE(m_pTap_Others);
	SAFE_DELETE(c_pWnd);
}

void Option_main::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_ctlTab);
	
	LPCTSTR tap1 = _T("Proxy");
	LPCTSTR tap2 = _T("ARP");
	LPCTSTR tap3 = _T("Others");

	m_ctlTab.InsertItem(0, tap1);
	m_ctlTab.InsertItem(1, tap2);
	m_ctlTab.InsertItem(2, tap3);

	m_pTap_Proxy = new Tap_Proxy;
	m_pTap_Proxy->Create(IDD_Proxy, this);
	m_pTap_Proxy->ShowWindow(SW_SHOW);
	m_pTap_Proxy->MoveWindow(20, 40, 600, 200);

	//CRect rt;
	//m_ctlTab.GetClientRect(&rt);

	//m_Tap_Proxy.Create(IDD_Proxy, &m_Tap_Proxy);
	//m_Tap_Proxy.SetWindowPos(NULL, 10, 10, rt.Width() - 10, rt.Height() - 30, SWP_SHOWWINDOW | SWP_NOZORDER);
	//c_pWnd = &m_Tap_Proxy;

	//if (c_pWnd != NULL) {
	//	c_pWnd->ShowWindow(SW_HIDE);
	//	c_pWnd = NULL;
	//}
	//int index = m_ctlTab.GetCurSel();

	//switch (index) {
	//case 0:
	//	m_Tap_Proxy.ShowWindow(SW_SHOW);
	//	c_pWnd = &m_Tap_Proxy;
	//	break;
	//case 1:
	//	m_Tap_Proxy.ShowWindow(SW_SHOW);
	//	c_pWnd = &m_Tap_Proxy;
	//	break;
	//}
}


BEGIN_MESSAGE_MAP(Option_main, CDialogEx)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &Option_main::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// Option_main 메시지 처리기입니다.


void Option_main::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	int iSelect = m_ctlTab.GetCurSel();
	
	switch (iSelect) {
	case 0:
		m_pTap_Proxy = new Tap_Proxy;
		m_pTap_Proxy->Create(IDD_Proxy, this);
		m_pTap_Proxy->ShowWindow(SW_SHOW);
		m_pTap_Proxy->MoveWindow(20, 40, 600, 200);
		break;
	case 1:
		m_pTap_ARP = new Tap_ARP;
		m_pTap_ARP->Create(IDD_ARP, this);
		m_pTap_ARP->ShowWindow(SW_SHOW);
		m_pTap_ARP->MoveWindow(20, 40, 600, 200);
		break;
	case 2:
		m_pTap_Others = new Tap_Others;
		m_pTap_Others->Create(IDD_Others, this);
		m_pTap_Others->ShowWindow(SW_SHOW);
		m_pTap_Others->MoveWindow(20, 40, 600, 200);
		break;
	}
	*pResult = 0;
}
