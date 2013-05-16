// This is the main DLL file.

#include "stdafx.h"

#include "CppHelper1.h"

using namespace System;
using namespace CppHelper1;

System::String^ Class1::GetRandomMessage()
{
	int randomNumber = rand() % 5;

	OperatingSystem^ os = Environment::OSVersion;

	switch(randomNumber)
	{
	case 0:
		return "I like pizza and soda pop!";
		break;
	case 1:
		return "C++/CLI is awesome!";
		break;
	case 2:
		return "Your OS is: " + os->VersionString;
		break;
	case 3:
		return "I like programming a lot! :-)";
		break;
	case 4:
		return "These are generated randomly from srand()";
		break;
	}
}

extern "C" __declspec(dllexport) void PInvokeTest()
{
	time_t start_time;
	time_t end_time;
	int elapsed;

	printf("\nP/Invokes works well!\n");
	start_time = time(NULL);
	MessageBoxA(GetConsoleWindow(), "Of course this should work!", "C++/CLI Test", MB_OK | MB_ICONWARNING);
	end_time = time(NULL);
	elapsed = difftime(end_time, start_time);
	printf("\nIt took the user %d seconds to respond to the MessageBox!\n\n", elapsed);
}

extern "C" __declspec(dllexport) void ShowTestInformation(HWND hostWindowHandle)
{
	MessageBoxA(hostWindowHandle, "This test tests the ability to call the managed C++ code from within C#, this means directly from the assembly, and P/Invokes.\n\nI noticed that when I created the CppHelper1 project in VS2010 it did not include the linker inputs like \"kernel32.lib\" etc. so when I used any Windows APIs, I would get linker, and code generation errors. I had to go to the input area on the linker settings, and set the additional dependencies to inherit from parent or project defaults.\n\nThis form is created using C# and WinForms. Pressing the button that says \"Click Me!\" will call a managed method that returns a System::String, clicking the \"P/Invoke Test\" button will test P/Invoke, clicking the ? button will show this message box, clicking the url will call ShellExecuteA from this DLL to open my website.", "C++/CLR Test 3", MB_OK | MB_ICONINFORMATION);
}

extern "C" __declspec(dllexport) void OpenMyWebsite(HWND hostWindowHandle)
{
	ShellExecuteA(hostWindowHandle, "open", "http://www.joshuakennedy.co.cc/", NULL, NULL, SW_SHOWDEFAULT);
}

