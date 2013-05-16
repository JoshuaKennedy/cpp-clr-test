// This is the main DLL file.

#include "stdafx.h"

#include "Test2.h"

#include "MainForm.h"

using namespace Test2;

void CSharpIntegrationTest::StartTest()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MainForm());
}

extern "C" __declspec(dllexport) int CreateInterface()
{
	CSharpIntegrationTest::StartTest();

	return 0;
}

