
// NSS Ver 1.1Dlg.h : ��� ����
//

#pragma once
enum ThreadWorkingType {
	THREAD_STOP = 0,
	THREAD_RUNNING = 1,
};

// CNSSVer11Dlg ��ȭ ����
class CNSSVer11Dlg : public CDialogEx
{
// �����Դϴ�.
public:
	CNSSVer11Dlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NSSVER11_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
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
