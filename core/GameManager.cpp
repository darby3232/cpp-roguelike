#include "GameManager.hpp"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void GameManager::start()
{
    // This is my little tester
    LilTester tester;
    tester.doTest();

    printf("Starting Game Manager.");

    this->graphicsData = new GraphicsData();
    this->graphicsData->load("./graphics_data.toml");

    this->gameWindow = new GameWindow();
    

    //GameManager* gm = new GameManager();
    // gm -> start();

    // Wait two seconds
    SDL_Delay(2000);

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

    }
    
    

}