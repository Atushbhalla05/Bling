#pragma once

#ifdef BL_PLATFORM_WINDOWS
	#ifdef BL_BUILD_DLL
		#define BLING_API __declspec(dllexport)
	#else
		#define BLING_API __declspec(dllimport)
	#endif
#else
	#error Bling only supports Windows!

#endif