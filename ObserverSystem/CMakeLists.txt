add_library(ObserverSystem ObserverSubject.cpp)

target_include_directories(
	ObserverSystem
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}
)	