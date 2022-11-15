# CMake entry point
cmake_minimum_required (VERSION 3.0)
project (OmegaChartCreator)

find_package(OpenGL REQUIRED)
# find_package(glfw3 3.3 REQUIRED)
find_package(GLEW REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
# if( CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR )
#     message( FATAL_ERROR "Please select another Build Directory ! (and give it a clever name, like bin_Visual2012_64bits/)" )
# endif()
# if( CMAKE_SOURCE_DIR MATCHES " " )
# 	message( "Your Source Directory contains spaces. If you experience problems when compiling, this can be the cause." )
# endif()
# if( CMAKE_BINARY_DIR MATCHES " " )
# 	message( "Your Build Directory contains spaces. If you experience problems when compiling, this can be the cause." )
# endif()

#turnoff warnings 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")

#turn off nanogui examples
set(NANOGUI_BUILD_EXAMPLE OFF CACHE BOOL " " FORCE)
set(NANOGUI_BUILD_PYTHON OFF CACHE BOOL " " FORCE)

add_subdirectory (ext/nanogui)

include_directories(
	./src/include/
	./ext/nanogui/include/
	./ext/nanogui/ext/eigen/
	./ext/nanogui/ext/nanovg/src/
	./ext/json/single_include/
	./ext/hash/
	.
)
set(ALL_LIBS
	${OPENGL_LIBRARY}
	nanogui
)

add_executable(OmegaChartCreator
	src/introPage.cpp
)

target_link_libraries(OmegaChartCreator ${ALL_LIBS})
