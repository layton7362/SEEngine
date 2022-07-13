
#ifndef __Input__h
#define __Input__h

#include <SDL2/SDL.h>
#include <map>

using std::map;

class Game;

enum Key_Code
{
    // Move
    LEFT,
    RIGHT,
    UP,
    DOWN,
    
    // Action
    RUN,
    JUMP,

    // Interaktion
    OK,
    CANCEL
};


class InputG
{
public:

    // Methods

    InputG();
    virtual ~InputG();
    void process(Game* game);
    void doKeyUp(SDL_KeyboardEvent *event);
    void doKeyDown(SDL_KeyboardEvent *event);

    void set_default_key_input();
    bool is_key_pressed(Key_Code key);

    // Members

    map<int, bool> key_input;

};

#endif
