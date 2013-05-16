// StartTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef int (*importFunction) ();

extern "C" __declspec(dllexport) int LoadTest(const char* library)
{
	importFunction interfaceCreation;
	int returnVal = 0;

	HINSTANCE hinstLib = LoadLibraryA(library);

	if (hinstLib == NULL)
	{
		MessageBoxA(GetConsoleWindow(), "The DLL couldn't be loaded!", "DLL Loading Failed", MB_OK | MB_ICONERROR);
		exit(1);
	}

	interfaceCreation = (importFunction)GetProcAddress(hinstLib, "CreateInterface");

	if (interfaceCreation == NULL)
	{
		MessageBoxA(GetConsoleWindow(), "The function \"CreateInterface\" could not be found in the DLL!", "DLL Initialization Failed", MB_OK | MB_ICONERROR);
		exit(2);
	}

	returnVal = interfaceCreation();

	FreeLibrary(hinstLib);

	return returnVal;
}

void UninitializeCOM()
{
	CoUninitialize();
}

void ExitMethod()
{
	printf("\nTesting Session Ended..\n");
	UninitializeCOM();
	//Sleep(250);
}

void InitializeCOM()
{
	CoInitialize(NULL);

	atexit(ExitMethod);
}

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Preparing the testing environment and starting the first test . . . ");
	InitializeCOM();
	SetConsoleTitleA("C++/CLR Test - (This is a C++ Native Application)");
	LoadTest("Test1.dll");
	printf("\nStarting Test 2 . . . \n");
	LoadTest("Test2.dll");
	printf("\nStarting Test 3 . . . \n");
	LoadTest("Test3.dll");
	return 0;
}

