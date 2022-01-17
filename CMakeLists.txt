cmake_minimum_required(VERSION 3.15)

# set the project name
project(CPP_Roguelike VERSION 0.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass the version number of the src code
configure_file(Config.h.in Config.h)

# List all the libraries used
list(
	APPEND EXTRA_LIBS
	EventSystem
)

# Add library's subdirectory
add_subdirectory(EventSystem)

# add the executable
add_executable(CPP_Roguelike main.cpp)

target_link_libraries(CPP_Roguelike PUBLIC ${EXTRA_LIBS})

#target_include_directories(
#	CPP_Roguelike 
#	PUBLIC 
#	"${PROJECT_BINARY_DIR}"
#)