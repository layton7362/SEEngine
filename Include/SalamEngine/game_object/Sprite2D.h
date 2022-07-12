
#ifndef __Sprite2D__h
#define __Sprite2D__h

#include <SDL2/SDL.h>

#include "GameObject2D.h"

class Sprite2D : public GameObject2D
{
public:
    // Methods

    Sprite2D(vec2 position);
    virtual ~Sprite2D();

    void set_sprite(SDL_Texture *texture);
    void draw(SDL_Renderer *renderer);
    void set_scale(int&& x, int&& y);
    void set_position(vec2&& position);
    vec2 get_position();
    void move(vec2&& direction);

    // Members
private:
    SDL_Texture *texture;
    SDL_Rect sbox;
    SDL_Rect dbox;
};

#endif
