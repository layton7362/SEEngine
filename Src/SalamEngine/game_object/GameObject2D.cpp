
#include "SalamEngine/game_object/GameObject2D.h"

GameObject2D::GameObject2D(vec2 position, vec2 scale)
{
    this->position = position;
    this->scale = scale;
}

GameObject2D::~GameObject2D()
{
}
