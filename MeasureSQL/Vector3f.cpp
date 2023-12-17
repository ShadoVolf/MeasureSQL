
#include "math.h"
#include "vector3f.h"

Vector3f & Vector3f::norm ( float d )
{
    float t = x*x + y*y + z*z;
    if ( t )
    {
        d /= sqrtf ( t );
        x *= d;
        y *= d;
        z *= d;
    }
    return * this;
}

Vector3f Vector3f::perpendicular () const
{
    float ax = fabsf ( x );
    float ay = fabsf ( y );
    float az = fabsf ( z );
    if ( ax >= ay )
    {
        if ( ax >= az )
        {
            if ( ! ax ) return Vector3f (1.f,0.f,0.f);
            float d = 1.f / sqrtf ( ax * ax + ay * ay );
            return Vector3f (-y*d, x*d, 0.f );
        }
    }
    else
    {
        if ( ay >= az )
        {
            float d = 1.f / sqrtf ( ay * ay + az * az );
            return Vector3f ( 0.f,-z*d, y*d );
        }
    }
    float d = 1.f / sqrtf ( ax * ax + az * az );
    return Vector3f ( z*d, 0.f,-x*d );
}

float Vector3f::length () const
{
    return sqrtf ( x * x + y * y + z * z );
}

void reper ( const Vector3f & x, Vector3f & y, Vector3f & z )
{
    y = x.perpendicular ();
    z = x % y;
}

Plane3f::Plane3f ( const Vector3f & x, const Vector3f & y, const Vector3f & z )
{
    Vector3f v = x;
    v += y;
    v += z;
    v /= 3.f;
    norm = x % y + y % z + z % x;
    if ( ! norm )
    {
        Vector3f xy = x - y;
        Vector3f yz = y - z;
        Vector3f zx = z - x;
        float d1 = qmod ( xy );
        float d2 = qmod ( yz );
        float d3 = qmod ( zx );
        if ( d1 >= d2 )
            if ( d1 >= d3 ) norm = xy.perpendicular();
            else            norm = zx.perpendicular();
        else
            if ( d2 >= d3 ) norm = yz.perpendicular();
            else            norm = zx.perpendicular();
    }
    else
        norm.norm ();
    dist = - ( v * norm );
}