#pragma once
#include "afxcmn.h"
#include "Tap_Proxy.h"
#include "Tap_ARP.h"
#include "Tap_Others.h"


// Option_main 대화 상자입니다.

class Option_main : public CDialogEx
{
	DECLARE_DYNAMIC(Option_main)

public:
	Option_main(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Option_main();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Option_main };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_ctlTab;
	Tap_Proxy *m_pTap_Proxy;
	Tap_ARP *m_pTap_ARP;
	Tap_Others *m_pTap_Others;
	CWnd *c_pWnd;
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};