
// VCL_Object_Scanner_SDI.h : VCL_Object_Scanner_SDI ���� ���α׷��� ���� �� ��� ����
//
#pragma once

// under construction...
#include "STAC/_yooji_2016_object_scanning.h"

#include "STAC/Util/_yooji_kaision_openni.h"


#ifndef __AFXWIN_H__
#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CVCL_Object_Scanner_SDIApp:
// �� Ŭ������ ������ ���ؼ��� VCL_Object_Scanner_SDI.cpp�� �����Ͻʽÿ�.
//

class CVCL_Volume_Scanner_App : public CWinAppEx
{
public:
	CVCL_Volume_Scanner_App();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnAppExit();
};

extern CVCL_Volume_Scanner_App theApp;
