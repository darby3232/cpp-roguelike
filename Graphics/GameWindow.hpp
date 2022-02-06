#ifndef GAME_WINDOW 
#define GAME_WINDOW

#include <string>
#include <iostream>

#include <SDL.h>
#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_sdlrenderer.h>

#include "GraphicsData.hpp" 

class GameWindow 
{

public:
	void start(GraphicsData& graphicsData);
	void update();
	bool handleEvent(SDL_Event& event); // returns true if 
	void cleanup();

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Surface* screenSurface = NULL;


};

#endif