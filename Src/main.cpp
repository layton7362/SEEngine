#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <stdio.h>
#include <SalamEngine/common.h>

Game game;

int main()
{
    int result = game.start();
    printf("========Game Ends========\n");
    return 0;
}