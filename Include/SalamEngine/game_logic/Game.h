
#ifndef __Game__h
#define __Game__h

#include <SDL2/SDL.h>
#include <string>

using std::string;

class InputG;
class Asset;
class Sprite2D;

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

    bool is_running;
};

#endif
