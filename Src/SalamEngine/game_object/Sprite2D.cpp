
#include "SalamEngine/game_object/Sprite2D.h"

Sprite2D::Sprite2D(vec2 position):GameObject2D(position)
{
}

Sprite2D::~Sprite2D()
{
}

void Sprite2D::set_scale(int &&x, int &&y)
{
    this->scale.x = x;
    this->scale.y = y;
}

void Sprite2D::set_position(vec2 &&position)
{
    this->position = position;
}

vec2 Sprite2D::get_position()
{
    return this->position;
}

void Sprite2D::move(vec2&& direction)
{
    set_position(this->position + direction);
}

void Sprite2D::set_sprite(SDL_Texture *texture)
{
    this->texture = texture;
    SDL_QueryTexture(texture, NULL, NULL, &sbox.w, &sbox.h);
}

void Sprite2D::draw(SDL_Renderer *renderer)
{
    dbox.x = sbox.x = this->position.x;
    dbox.y = sbox.y = this->position.y;
    dbox.w = sbox.w *  this->scale.x;
    dbox.h = sbox.h *  this->scale.y;
    SDL_RenderCopy(renderer, texture, &sbox, &dbox);
}

