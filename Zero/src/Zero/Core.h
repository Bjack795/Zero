#pragma once
#ifdef ZERO_PLATFORM_WINDOWS
	#ifdef ZERO_BUILD_DLL
		#define ZERO_API __declspec(dllexport)
	#else
		#define ZERO_API __declspec(dllimport)
	#endif // ZERO_BUILD_DLL
#else
	#error Zero only support Windows!
#endif // ZERO_PLATFORM_WINDOWS
