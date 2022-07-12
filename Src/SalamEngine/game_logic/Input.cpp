
#include "SalamEngine/game_logic/Input.h"
#include "SalamEngine/game_logic/Game.h"

Input::Input()
{
}

Input::~Input()
{
}

void Input::process(Game* game)
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            game->is_running = false;
            break;

        case SDL_KEYDOWN:
            doKeyDown(&event.key);
            break;

        case SDL_KEYUP:
            doKeyUp(&event.key);
            break;

        default:
            break;
        }
    }
}

void Input::doKeyUp(SDL_KeyboardEvent *event)
{
    
}

void Input::doKeyDown(SDL_KeyboardEvent *event)
{

}
