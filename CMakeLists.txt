cmake_minimum_required(VERSION 3.20)

set(
	CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
	CACHE STRING ""
)

set(VCPKG_TARGET_TRIPLET "x86-windows")

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

# Add SDL
find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2 SDL2::SDL2main)

# add imgui
find_package(imgui CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE imgui::imgui)


target_link_libraries(CPP_Roguelike PUBLIC ${EXTRA_LIBS})


# have now been provided with: 
# find_package(SDL2 CONFIG REQUIRED)
# target_link_libraries(main PRIVATE SDL2::SDL2 SDL2::SDL2main)

# find_package(sdl2-ttf CONFIG REQUIRED)
# target_link_libraries(main PRIVATE SDL2::SDL2_ttf)

# find_package(imgui CONFIG REQUIRED)
# target_link_libraries(main PRIVATE imgui::imgui)
