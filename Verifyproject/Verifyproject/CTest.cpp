#include "stdafx.h"
#include "CTest.h"
#include <string>

using namespace std;
using namespace System::Runtime::InteropServices;
using namespace ORDTools;

int GetArrayElementNumber()
{
	return 10;
}

String^ PreViewControl::GetArrayElementString()
{
	//std::string pChar = new char[120];
	std::string pChar = "hello C#";
	String^ str = Marshal::PtrToStringAnsi((IntPtr)(char*)pChar.c_str());
	return str;
}