#pragma once
#include "afxcmn.h"


// Tap_Proxy 대화 상자입니다.

class Tap_Proxy : public CDialogEx
{
	DECLARE_DYNAMIC(Tap_Proxy)

public:
	Tap_Proxy(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Tap_Proxy();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Proxy };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl Proxy_Option;
};
