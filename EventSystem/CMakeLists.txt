add_library(EventSystem EventBus.cpp)

target_include_directories(
	EventSystem
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}
)	