
#ifndef __Game__h
#define __Game__h

#include <SDL2/SDL.h>
#include <string>
#include "SalamEngine/game_logic/Input.h"
#include "SalamEngine/game_logic/Asset.h"

using std::string;

class Game
{
public:
    // Methods

    Game();
    virtual ~Game();

    int start();
    int init();
    int game_loop();
    int destroy();

    // Members

    string game_name;
    int game_fps;

    SDL_Window *mainWindow;
    SDL_Renderer *renderer;
    
    Input *input;
    Asset *asset;

    bool is_running;
};

#endif
