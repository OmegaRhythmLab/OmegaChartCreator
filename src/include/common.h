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

#ifdef _WIN32
	#ifdef OMG_BUILD_DLL
		#define OCCEXPORT __declspec(dllexport)
	#else
		#define OCCEXPORT __declspec(dllimport)
	#endif
	#define APPDATA std::string(getenv("LOCALAPPDATA")) + "\\OmegaChartCreator\\"
	#define TEMP std::string(getenv("TEMP")) + "\\OmegaChartCreator\\"
	#define OMGCINFO "\\omginfo"
#else
	#define OCCEXPORT __attribute__ ((visibility("default")))
	#define APPDATA std::string(getenv("HOME")) + "/Library/Application Support/OmegaChartCreator/"
	#define TEMP std::string(getenv("TMPDIR")) + "/OmegaChartCreator/"
	#define OMGCINFO "/omginfo"
#endif

#endif // OCC_COMMON_H
