#ifndef GAME_MANAGER
#define GAME_MANAGER

#include <iostream>

#include <SDL.h>
#include <imgui.h>
#include <imgui_impl_sdl.h>
#include <imgui_impl_sdlrenderer.h>

#include "LilTester.hpp"
#include "GraphicsData.hpp"
#include "GameWindow.hpp"

class GameManager
{
public:
    // GameManager();
    void start();

private:
    GraphicsData* graphicsData;
    GameWindow* gameWindow;

};

#endif