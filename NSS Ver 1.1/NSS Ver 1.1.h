
// NSS Ver 1.1.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CNSSVer11App:
// �� Ŭ������ ������ ���ؼ��� NSS Ver 1.1.cpp�� �����Ͻʽÿ�.
//

class CNSSVer11App : public CWinApp
{
public:
	CNSSVer11App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CNSSVer11App theApp;