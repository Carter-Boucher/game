#pragma once

#if GXE_BUILD_DLL
#define GXE_API __declspec(dllexport)
#else
#define GXE_API __declspec(dllimport)
#endif