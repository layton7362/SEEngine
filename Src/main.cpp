#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SalamEngine/game_logic/Game.h>
#include <stdio.h>

int main()
{
    Game game;
    int result = game.start();
    printf("========Game Ends========\n");
    return result;
}