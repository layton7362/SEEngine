
#include "SalamEngine/game_logic/Asset.h"

Asset::Asset()
{
}

Asset::~Asset()
{
}

SDL_Texture *Asset::load_texture(SDL_Renderer &renderer, string &texture_path)
{
    auto it = tex_manager.find(texture_path.c_str());
    if (it != tex_manager.end())
    {
        return it->second;
    }

    SDL_Surface *pTempSurface = SDL_LoadBMP(texture_path.c_str());
    SDL_Texture *texture = SDL_CreateTextureFromSurface(&renderer, pTempSurface);
    SDL_FreeSurface(pTempSurface);
    if (!texture)
    {
        printf("%s could not be loaded", texture_path.c_str());
        return nullptr;
    }
    tex_manager[texture_path.c_str()] = texture;
    return texture;
}
