
#ifndef __Input__h
#define __Input__h

#include <SDL2/SDL.h>

class Game;

class Input
{
public:

    // Methods

    Input();
    virtual ~Input();
    void process(Game* game);
    void doKeyUp(SDL_KeyboardEvent *event);
    void doKeyDown(SDL_KeyboardEvent *event);

    // Members
};

#endif
