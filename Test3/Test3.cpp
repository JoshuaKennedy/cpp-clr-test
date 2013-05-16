// This is the main DLL file.

#include "stdafx.h"

#include "Test3.h"
using namespace System;
using namespace Test3;
using namespace CSharpHelper2;
using namespace System::Windows::Forms;

void Class1::StartTest()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MainForm());
}

extern "C" __declspec (dllexport) int CreateInterface()
{
	Class1::StartTest();

	return 0;
}
