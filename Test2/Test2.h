// Test2.h

#pragma once

using namespace System;

namespace Test2 {

	public ref class CSharpIntegrationTest
	{
	public:
		static void StartTest();
	};
}

extern "C" __declspec(dllexport) int CreateInterface();
