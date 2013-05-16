// This is the main DLL file.

#include "stdafx.h"

#include "Test1.h"

#include "Stdafx.h"
#include "Form1.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

extern "C" __declspec(dllexport) int CreateInterface()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew Test1::Form1());

	return 0;
}
