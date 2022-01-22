add_library(IMGUI imgui.cpp)

target_include_directories(
	IMGUI
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}/include

)