#pragma once

#ifdef CMG_PLATFORM_WINDOWS
	#ifdef CMG_BUILD_DLL
		#define CMG_API __declspec(dllexport)
	#else
		#define CMG_API __declspec(dllimport)
	#endif
#else
	#error CMG only supports Windows!
#endif
