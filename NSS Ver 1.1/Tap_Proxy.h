#pragma once
#include "afxcmn.h"


// Tap_Proxy ��ȭ �����Դϴ�.

class Tap_Proxy : public CDialogEx
{
	DECLARE_DYNAMIC(Tap_Proxy)

public:
	Tap_Proxy(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Tap_Proxy();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Proxy };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl Proxy_Option;
};
