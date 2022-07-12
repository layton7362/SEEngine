
#include "SalamEngine/game_logic/Game.h"


Game::Game()
{
}

Game::~Game()
{
}

int Game::start()
{

    SDL_Init(SDL_INIT_EVERYTHING);

    // Set postion and size for main window
    int mainSizeX = 600;
    int mainSizeY = 600;
    int mainPosX = 100;
    int mainPosY = 100;

    // Set postion and size for sub window based on those of main window
    int subSizeX = mainSizeX / 2;
    int subSizeY = mainSizeY / 2;
    int subPosX = mainPosX + mainSizeX / 4;
    int subPosY = mainPosY + mainSizeY / 4;

    // Set up main window
    SDL_Window *mainWindow = SDL_CreateWindow("Main Window", mainPosX, mainPosY, mainSizeX, mainSizeY, 0);
    SDL_Renderer *mainRenderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(mainRenderer, 255, 0, 0, 255);

    // Set up sub window
    SDL_Window *subWindow = SDL_CreateWindow("Sub Window", subPosX, subPosY, subSizeX, subSizeY, 0);
    SDL_Renderer *subRenderer = SDL_CreateRenderer(subWindow, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(subRenderer, 0, 255, 0, 255);

    // Render empty ( red ) background in mainWindow
    SDL_RenderClear(mainRenderer);
    SDL_RenderPresent(mainRenderer);

    // Render empty ( green ) background in subWindow
    SDL_RenderClear(subRenderer);
    SDL_RenderPresent(subRenderer);
    
    return 0;
}

