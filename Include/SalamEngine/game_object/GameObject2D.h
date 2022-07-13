#ifndef __GameObject2D_H
#define __GameObject2D_H

#include <SalamEngine/common.h>

class GameObject2D
{
public:
    // Methods
    GameObject2D(vec2 position, vec2 scale = vec2(1,1));
    virtual ~GameObject2D();

    virtual void on_create();
    virtual void on_update();
    virtual void on_destroy();

    // Members
    vec2 position;
    vec2 scale;
};

#endif //__GameObject2D_H