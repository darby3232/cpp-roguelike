#include <iostream>
// #include "Config.h"

#include "EventBus.hpp"

#define SDL_MAIN_HANDLED
#include "SDL.h"

int main(int argc, char* args[])
{
	//std::cout << "Version " << CPP_Roguelike_VERSION_MAJOR << "." << CPP_Roguelike_VERSION_MINOR << std::endl;

	EventBus::AddListener(EventName::FIRST_LOAD, nullptr);

	return 0;
}