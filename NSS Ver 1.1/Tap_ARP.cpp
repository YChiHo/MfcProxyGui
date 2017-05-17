// Tap_ARP.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "NSS Ver 1.1.h"
#include "Tap_ARP.h"
#include "afxdialogex.h"


// Tap_ARP 대화 상자입니다.

IMPLEMENT_DYNAMIC(Tap_ARP, CDialogEx)

Tap_ARP::Tap_ARP(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ARP, pParent)
{

}

Tap_ARP::~Tap_ARP()
{
}

void Tap_ARP::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Tap_ARP, CDialogEx)
END_MESSAGE_MAP()


// Tap_ARP 메시지 처리기입니다.
