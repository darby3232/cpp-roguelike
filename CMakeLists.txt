cmake_minimum_required(VERSION 3.20)


set(
	CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
	CACHE STRING ""
)

set(VCPKG_TARGET_TRIPLET "x86-windows")

set(VCPKG_FEATURE_FLAGS "versions")

# set the project name
project(CPP_Roguelike VERSION 0.1)


# This copies SDL's dll from the lib folder into the binary folder
#add_custom_command( 
#	TARGET CPP_Roguelike POST_BUILD					# Adds a post-build event to CPP_Roguelike
#	COMMAND ${CMAKE_COMMAND} -E copy_if_different 	# Executes 'cmake -E copy_if_different ...'
#	"${PROJECT_SOURCE_DIR}/libs/SDL2.dll"
#	$<>
#)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass the version number of the src code
configure_file(Config.h.in Config.h)

# List all the libraries used
#list(
#	APPEND EXTRA_LIBS
#   ObserverSystem
#	imgui
#	SDL2
#   core
#	)

# Add library's subdirectory
#add_subdirectory(imgui)
#add_subdirectory(SDL2)

# add the executable
add_executable(CPP_Roguelike main.cpp)

# Add SDL
find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC SDL2::SDL2 SDL2::SDL2main)

# Add imgui
find_package(imgui CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC imgui::imgui)

# Add tomlplusplus
find_package(tomlplusplus CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PUBLIC tomlplusplus::tomlplusplus)

# Add Observer System
add_subdirectory(ObserverSystem)	
target_link_libraries(CPP_Roguelike PUBLIC ObserverSystem)

# Add Graphics System
add_subdirectory(Graphics)
target_link_libraries(CPP_Roguelike PUBLIC Graphics)

# Add testing
add_subdirectory(Testing)
target_link_libraries(CPP_Roguelike PUBLIC LilTester)

# Add core
add_subdirectory(core)	
target_link_libraries(CPP_Roguelike PUBLIC core)

# Add my libraries
# target_link_libraries(CPP_Roguelike PUBLIC ${EXTRA_LIBS})


# Copy assets to the exe folder
add_custom_command(TARGET CPP_Roguelike POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
	${CMAKE_SOURCE_DIR}/assets/ $<TARGET_FILE_DIR:CPP_Roguelike>/assets
)
