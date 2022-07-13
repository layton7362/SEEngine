#include "SalamEngine/game_object/GameObject2D.h"

extern InputG input; 

GameObject2D::GameObject2D(vec2 position, vec2 scale)
{
    this->position = position;
    this->scale = scale;
}

GameObject2D::~GameObject2D()
{
}

void GameObject2D::on_create() {}
void GameObject2D::on_update() {}
void GameObject2D::on_destroy() {}
