#pragma once
#include <afxver_.h>

#pragma managed
using namespace System;

extern "C" AFX_API_EXPORT int GetArrayElementNumber();
#define  _EXPORTING 1;
#ifdef _EXPORTING
#define API_DECLSPEC    __declspec(dllexport)  
#else  
#define API_DECLSPEC    __declspec(dllimport)  
#endif  
namespace ORDTools {

	public ref class PreViewControl
	{
	public:
		static String^ GetArrayElementString();
	};
}