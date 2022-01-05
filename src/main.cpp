// Using SDL and standard IO 
#include <SDL2/SDL.h>
#include <stdio.h>

#include "GameManager.hpp"

// Screen dimension constraints
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
    // The window we'll be rendering to
    SDL_Window* window = NULL;

    // The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    // Initialize SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not be initialized! SDL Error: %s\n", SDL_GetError());
        exit(1);
    }

    // Create the window
    window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if(window == NULL)
    {
        printf("Window could not be created. SDL_Error: %s\n", SDL_GetError());
        exit(1);
    }

    // Get the window surface
    screenSurface = SDL_GetWindowSurface(window);

    // Fill the surface white
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x00, 0xFF, 0xFF));

    // Update the surface
    SDL_UpdateWindowSurface(window);

    GameManager* gm = new GameManager();
    gm -> start();

    // Wait two seconds
    SDL_Delay(2000);

    return 0;

}