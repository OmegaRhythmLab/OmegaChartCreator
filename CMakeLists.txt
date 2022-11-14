# CMake entry point
cmake_minimum_required (VERSION 3.0)
project (OmegaChartCreator)

find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIRED)
find_package(GLEW REQUIRED)

# if( CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR )
#     message( FATAL_ERROR "Please select another Build Directory ! (and give it a clever name, like bin_Visual2012_64bits/)" )
# endif()
# if( CMAKE_SOURCE_DIR MATCHES " " )
# 	message( "Your Source Directory contains spaces. If you experience problems when compiling, this can be the cause." )
# endif()
# if( CMAKE_BINARY_DIR MATCHES " " )
# 	message( "Your Build Directory contains spaces. If you experience problems when compiling, this can be the cause." )
# endif()

include_directories(
	./src/include/
	./ext/nanogui/include/
	.
)
set(ALL_LIBS
	${OPENGL_LIBRARY}
	nanogui
	glfw
	GLEW
)

add_executable(OmegaChartCreator
	src/introPage.cpp
)
