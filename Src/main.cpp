#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SalamEngine/game_logic/Game.h>


int main()
{
    Game game;
    return game.start();
}