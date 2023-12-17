
#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2d
{
public :
    double x, y;
    Vector2d () {}
    Vector2d ( double a, double b ) : x ( a ), y ( b ) {}

    Vector2d operator - () const
    {
        return Vector2d ( - x, - y );
    }
 
    Vector2d & operator += ( const Vector2d & u )
    {
        x += u.x;
        y += u.y;
        return * this;
    }

    Vector2d & operator -= ( const Vector2d & u )
    {
        x -= u.x;
        y -= u.y;
        return * this;
    }

    Vector2d & operator *= ( const double d )
    {
        x *= d;
        y *= d;
        return * this;
    }

    Vector2d & operator /= ( const double d )
    {
        x /= d;
        y /= d;
        return * this;
    }

    Vector2d & null ()
    {
        x = y = 0.;
        return * this;
    }

    bool operator ! () const
    {
        return !x && !y;
    }

    Vector2d & norm ( double d = 1. );

    Vector2d perpendicular () const
    {
        return Vector2d ( -y, x );
    }

    double length () const;
};

inline Vector2d operator + ( const Vector2d & a, const Vector2d & b )
{
        return Vector2d ( a.x + b.x, a.y + b.y );
}

inline Vector2d operator - ( const Vector2d & a, const Vector2d & b )
{
        return Vector2d ( a.x - b.x, a.y - b.y );
}

inline Vector2d operator * ( const Vector2d & a, const double & d )
{
        return Vector2d ( a.x * d, a.y * d );
}

inline Vector2d operator * ( const double & d, const Vector2d & a )
{
        return Vector2d ( a.x * d, a.y * d );
}

inline Vector2d operator / ( const Vector2d & a, const double & d )
{
        return Vector2d ( a.x / d, a.y / d );
}

inline double operator * ( const Vector2d & a, const Vector2d & b )
{
        return a.x * b.x + a.y * b.y;
}

inline double qmod ( const Vector2d & a )
{
        return a.x * a.x + a.y * a.y;
}

inline double operator % ( const Vector2d & a, const Vector2d & b )
{
        return a.x * b.y - a.y * b.x;
}

inline bool operator != ( const Vector2d & a, const Vector2d & b )
{
        return ( a.x != b.x ) || ( a.y != b.y );
}

inline bool operator == ( const Vector2d & a, const Vector2d & b )
{
        return ( a.x == b.x ) && ( a.y == b.y );
}

/********************************************************************/

class Line2
{
public:
    Vector2d norm;
    double  dist;

    Line2 () {}
    Line2 ( const Vector2d & v, const double & d ) : norm ( v ), dist ( d ) {}
    Line2 ( const Vector2d & a, const Vector2d & b );

    double operator % ( const Vector2d & v ) const
    {
        return norm.x * v.x + norm.y * v.y + dist;
    }

    Line2 operator - () const
    {
        return Line2 ( - norm, - dist );
    }

    Vector2d project ( const Vector2d & v ) const;
};

/********************************************************************/

class Similar2d
{
public:
    Vector2d ax, ay, trans;

    Similar2d () : ax ( 1., 0. ), ay ( 0., 1. ), trans ( 0., 0. ) {}
    Similar2d ( const Vector2d & x, const Vector2d & y, const Vector2d & t ) : ax(x), ay(y), trans(t) {}

    void rotateRadian ( double angle );
    void rotateDegree ( double angle );

    Vector2d operator () ( const Vector2d & ) const;
    Similar2d operator ~ () const;
};

Similar2d operator * ( const Similar2d & sim1, const Similar2d & sim2 );

void transform ( int n, Vector2d * v, const Similar2d & sim );

#endif
