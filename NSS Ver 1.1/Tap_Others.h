#pragma once


// Tap_Others ��ȭ �����Դϴ�.

class Tap_Others : public CDialogEx
{
	DECLARE_DYNAMIC(Tap_Others)

public:
	Tap_Others(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Tap_Others();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Others };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
