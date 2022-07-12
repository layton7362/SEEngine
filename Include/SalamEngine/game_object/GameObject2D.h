#include "SalamEngine/math/Math.h"

class GameObject2D
{
public:
    // Methods
    GameObject2D(vec2 position, vec2 scale = vec2(1,1));
    virtual ~GameObject2D();

    // Members

    vec2 position;
    vec2 scale;
};