add_library(LilTester LilTester.cpp ObserverTester.cpp)

target_link_libraries(LilTester PUBLIC ObserverSystem)

target_include_directories(
	LilTester	
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}
)