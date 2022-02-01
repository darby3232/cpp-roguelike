add_library(Graphics GameWindow.cpp GraphicsData.cpp)

target_link_libraries(Graphics PUBLIC SDL2::SDL2 SDL2::SDL2main)
target_link_libraries(Graphics PUBLIC imgui::imgui)
target_link_libraries(Graphics PUBLIC tomlplusplus::tomlplusplus)

target_include_directories(
	Graphics	
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}
)	