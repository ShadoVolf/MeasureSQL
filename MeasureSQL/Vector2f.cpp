
#include "math.h"
#include "vector2f.h"

Vector2f & Vector2f::norm ( float d )
{
    float t = x * x + y * y;
    if ( t )
    {
        d /= (float) sqrt ( t );
        x *= d;
        y *= d;
    }
    return * this;
}

float Vector2f::length () const
{
    return sqrtf ( x * x + y * y );
}