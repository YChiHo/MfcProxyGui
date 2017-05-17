
// NSS Ver 1.1Dlg.h : 헤더 파일
//

#pragma once
enum ThreadWorkingType {
	THREAD_STOP = 0,
	THREAD_RUNNING = 1,
};

// CNSSVer11Dlg 대화 상자
class CNSSVer11Dlg : public CDialogEx
{
// 생성입니다.
public:
	CNSSVer11Dlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NSSVER11_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedOption();
	afx_msg void OnBnClickedStop();
	afx_msg void OnBnClickedClear();
	static UINT ThreadFirst(LPVOID _mothod);
	CWinThread *p_ProxyThread;
	ThreadWorkingType m_eThreadWork;
};
