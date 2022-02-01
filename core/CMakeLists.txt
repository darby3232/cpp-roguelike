add_library(core GameManager.cpp)

target_link_libraries(core PUBLIC SDL2::SDL2 SDL2::SDL2main)
target_link_libraries(core PUBLIC imgui::imgui)

target_link_libraries(core PUBLIC Graphics)
target_link_libraries(core PUBLIC ObserverSystem)
target_link_libraries(core PUBLIC LilTester)

target_include_directories(
	core	
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}
)