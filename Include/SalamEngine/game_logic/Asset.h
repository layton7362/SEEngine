
#ifndef __Asset__h
#define __Asset__h

#include <SDL2/SDL.h>
#include <string>
#include <map>

using std::map;
using std::string;

class Game;
class InputG;

class Asset 
{
public:

    // Methods

    Asset();
    virtual ~Asset();
    SDL_Texture *load_texture(SDL_Renderer &renderer, string &&texture_path);

    // Members

    map<const char*, SDL_Texture*> tex_manager;
}asset;

#endif
