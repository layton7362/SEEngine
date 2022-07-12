#include "SDL2/SDL.h"

class Renderer
{
// Methods

public:
    Renderer();
    virtual ~Renderer();
    
// Members

    SDL_Renderer* renderer;
    

};