/**
 * @file common.h
 * @brief Common definitions and macros
 * @author werdxz ^v^ lwerdxzl@hotmail.com
 * @version 1.0.0
 * @date 2022-11-12
 */
#ifndef OCC_COMMON_H
#define OCC_COMMON_H

#define OCC_VERSION_MAJOR 1
#define OCC_VERSION_MINOR 0
#define OCC_VERSION_STRING "1.0.0"

#ifdef WIN32
	#define OCCEXPORT __declspec(dllexport)
#else
	#define OCCEXPORT extern
#endif

#endif // OCC_COMMON_H
