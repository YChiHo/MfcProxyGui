// Tap_Proxy.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "NSS Ver 1.1.h"
#include "Tap_Proxy.h"
#include "afxdialogex.h"


// Tap_Proxy ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(Tap_Proxy, CDialogEx)

Tap_Proxy::Tap_Proxy(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Proxy, pParent)
{

}

Tap_Proxy::~Tap_Proxy()
{
}

void Tap_Proxy::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, Proxy_Option);

	LPCTSTR tap1 = _T("HTTP");
	LPCTSTR tap2 = _T("HTTPS");

	Proxy_Option.InsertItem(1, tap1);
	Proxy_Option.InsertItem(1, tap2);
}


BEGIN_MESSAGE_MAP(Tap_Proxy, CDialogEx)
END_MESSAGE_MAP()


// Tap_Proxy �޽��� ó�����Դϴ�.
