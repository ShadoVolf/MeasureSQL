
#ifndef VECTOR2F_H
#define VECTOR2F_H

class Vector2f
{
public :
    float x, y;
    Vector2f () {}
    Vector2f ( float a, float b ) : x ( a ), y ( b ) {}

    Vector2f operator - () const
    {
        return Vector2f ( - x, - y );
    }
 
    Vector2f & operator += ( const Vector2f & u )
    {
        x += u.x;
        y += u.y;
        return * this;
    }

    Vector2f & operator -= ( const Vector2f & u )
    {
        x -= u.x;
        y -= u.y;
        return * this;
    }

    Vector2f & operator *= ( const float d )
    {
        x *= d;
        y *= d;
        return * this;
    }

    Vector2f & operator /= ( const float d )
    {
        x /= d;
        y /= d;
        return * this;
    }

    Vector2f & null ()
    {
        x = y = 0.;
        return * this;
    }

    bool operator ! () const
    {
        return !x && !y;
    }

    Vector2f & norm ( float d = 1. );

    Vector2f perpendicular () const
    {
        return Vector2f ( -y, x );
    }

    float length () const;
};

inline Vector2f operator + ( const Vector2f & a, const Vector2f & b )
{
        return Vector2f ( a.x + b.x, a.y + b.y );
}

inline Vector2f operator - ( const Vector2f & a, const Vector2f & b )
{
        return Vector2f ( a.x - b.x, a.y - b.y );
}

inline Vector2f operator * ( const Vector2f & a, const float & d )
{
        return Vector2f ( a.x * d, a.y * d );
}

inline Vector2f operator * ( const float & d, const Vector2f & a )
{
        return Vector2f ( a.x * d, a.y * d );
}

inline Vector2f operator / ( const Vector2f & a, const float & d )
{
        return Vector2f ( a.x / d, a.y / d );
}

inline float operator * ( const Vector2f & a, const Vector2f & b )
{
        return a.x * b.x + a.y * b.y;
}

inline float qmod ( const Vector2f & a )
{
        return a.x * a.x + a.y * a.y;
}

inline float operator % ( const Vector2f & a, const Vector2f & b )
{
        return a.x * b.y - a.y * b.x;
}

inline bool operator != ( const Vector2f & a, const Vector2f & b )
{
        return a.x != b.x || a.y != b.y;
}

inline bool operator == ( const Vector2f & a, const Vector2f & b )
{
        return a.x == b.x && a.y == b.y;
}

#endif