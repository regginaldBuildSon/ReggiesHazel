#pragma once

//===========================
//							|
//	Preprocessor Directives	|
//							|
//===========================

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel only Supports WinAPI
#endif


