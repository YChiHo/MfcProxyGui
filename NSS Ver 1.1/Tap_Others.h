#pragma once


// Tap_Others 대화 상자입니다.

class Tap_Others : public CDialogEx
{
	DECLARE_DYNAMIC(Tap_Others)

public:
	Tap_Others(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~Tap_Others();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Others };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
