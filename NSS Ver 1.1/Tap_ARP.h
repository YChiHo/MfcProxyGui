#pragma once


// Tap_ARP ��ȭ �����Դϴ�.

class Tap_ARP : public CDialogEx
{
	DECLARE_DYNAMIC(Tap_ARP)

public:
	Tap_ARP(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Tap_ARP();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ARP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
