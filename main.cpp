// Using SDL and standard IO 
#include <SDL.h>
#include <stdio.h>
#include<imgui.h>
#include<imgui_impl_sdl.h>
// #include<imgui_impl_sdlrenderer.h>

// #include "GameManager.hpp"

// Screen dimension constraints
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
    // The window we'll be rendering to
    SDL_Window* window = NULL;

    // The SDL renderer rendering to our window, useful for imgui 
    SDL_Renderer* renderer = SDL_GetRenderer(window);

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
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);

    if(renderer == NULL){
        SDL_Log("Error creating SDL_Renderer!");
        exit(1);
    }

    // Setup Deart ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;

    // Set the imgui style
    ImGui::StyleColorsDark();

    // Maybe we want to load fonts here??

    // Setup Platform/Renderer backends
    ImGui_ImplSDL2_InitForSDLRenderer(window);
    ImGui_ImplSDLRenderer_Init(renderer);

    // Fill the surface white
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x00, 0xFF, 0xFF));

    // Update the surface
    SDL_UpdateWindowSurface(window);


    //GameManager* gm = new GameManager();
    // gm -> start();

    // Wait two seconds
    SDL_Delay(2000);

    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

    bool done = false;
    while(!done)
    {
        SDL_Event event;

        while(SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if(event.type == SDL_QUIT)
                done = true;
             if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }

        // Start the Dear ImGui frame
        ImGui_ImplSDLRenderer_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();

        bool show_window = true;
        ImGui::ShowDemoWindow(&show_window);

        // Rendering
        ImGui::Render();
        SDL_SetRenderDrawColor(renderer, (Uint8)(clear_color.x * 255), (Uint8)(clear_color.y * 255), (Uint8)(clear_color.z * 255), (Uint8)(clear_color.w * 255));
        SDL_RenderClear(renderer);
        ImGui_ImplSDLRenderer_RenderDrawData(ImGui::GetDrawData());
        SDL_RenderPresent(renderer);

    }

    //  Cleanup
    ImGui_ImplSDLRenderer_Shutdown();
    ImGui_ImplSDL2_Shutdown();
    ImGui::DestroyContext();

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;

}