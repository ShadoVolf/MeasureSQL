
#ifndef VECTOR3F_H
#define VECTOR3F_H

class Vector3f
{
public :
    float x, y, z;
    Vector3f () {}
    Vector3f ( float a, float b, float c ) : x ( a ), y ( b ), z ( c ) {}
 
    Vector3f operator - ()
    {
        return Vector3f ( - x, - y, - z );
    }
 
    Vector3f & operator += ( const Vector3f & v )
    {
        x += v.x;
        y += v.y;
        z += v.z;
        return * this;
    }

    Vector3f & operator -= ( const Vector3f & v )
    {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return * this;
    }

    Vector3f & operator *= ( const float d )
    {
        x *= d;
        y *= d;
        z *= d;
        return * this;
    }

    Vector3f & operator /= ( const float d )
    {
        x /= d;
        y /= d;
        z /= d;
        return * this;
    }

    Vector3f & null()
    {
        x = y = z = 0.f;
        return * this;
    }

    int operator ! () const
    {
        return !x && !y && !z;
    }

    Vector3f & norm ( float d = 1. );
    Vector3f perpendicular () const;
    float    length () const;

};

inline Vector3f operator + ( const Vector3f& a, const Vector3f& b )
{
    return Vector3f ( a.x + b.x, a.y + b.y, a.z + b.z );
}

inline Vector3f operator - ( const Vector3f& a, const Vector3f& b )
{
    return Vector3f ( a.x - b.x, a.y - b.y, a.z - b.z );
}
 
inline Vector3f operator * ( const Vector3f& a, float d )
{
    return Vector3f ( a.x * d, a.y * d, a.z * d );
}
 
inline Vector3f operator / ( const Vector3f& a, float d )
{
    return Vector3f ( a.x / d, a.y / d, a.z / d );
}

inline Vector3f operator * ( float d, const Vector3f& a )
{
    return Vector3f ( a.x * d, a.y * d, a.z * d );
}

inline float operator * ( const Vector3f& a, const Vector3f& b )
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

inline float qmod ( const Vector3f& a )
{
    return a.x * a.x + a.y * a.y + a.z * a.z;
}

inline Vector3f operator % ( const Vector3f& a, const Vector3f& b )
{
    return Vector3f ( a.y * b.z - a.z * b.y,
                      a.z * b.x - a.x * b.z,
                      a.x * b.y - a.y * b.x );
}

inline float operator != ( const Vector3f& a, const Vector3f& b )
{
    return a.x != b.x || a.y != b.y || a.z != b.z;
}

inline float operator == ( const Vector3f& a, const Vector3f& b )
{
    return a.x == b.x && a.y == b.y && a.z == b.z;
}

void reper ( const Vector3f & x, Vector3f & y, Vector3f & z );

class Plane3f
{
public:
    Vector3f norm;
    float    dist;
    Plane3f () {}
    Plane3f ( const Vector3f &, const Vector3f &, const Vector3f & );
    Plane3f ( const Vector3f & v, const float & d ) : norm ( v ),
                                                      dist ( d ) {}
    float operator % ( const Vector3f & v ) const
    {
        return norm.x * v.x + norm.y * v.y + norm.z * v.z + dist;
    }
};

inline int operator == ( const Plane3f & p1, const Plane3f & p2 )
{
   return p1.norm == p2.norm && p1.dist == p2.dist;
}

inline int operator != ( const Plane3f & p1, const Plane3f & p2 )
{
   return p1.norm != p2.norm || p1.dist != p2.dist;
}

#endif