#pragma once


// Tap_ARP 대화 상자입니다.

class Tap_ARP : public CDialogEx
{
	DECLARE_DYNAMIC(Tap_ARP)

public:
	Tap_ARP(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Tap_ARP();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ARP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
