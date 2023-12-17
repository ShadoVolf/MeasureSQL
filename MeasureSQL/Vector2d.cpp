
#include "math.h"
#include "Vector2d.h"

Vector2d & Vector2d::norm ( double d )
{
    double t = x * x + y * y;
    if ( t )
    {
        d /= sqrt ( t );
        x *= d;
        y *= d;
    }
    return * this;
}

double Vector2d::length () const
{
    return sqrt ( x * x + y * y );
}

/********************************************************************/

Line2::Line2 ( const Vector2d & a, const Vector2d & b )
{
    norm.x = b.y - a.y;
    norm.y = a.x - b.x;
    const double t = norm.x * norm.x + norm.y * norm.y;
    if ( t )
    {
        const double d = sqrt ( t );
        norm.x /= d;
        norm.y /= d;
    }
    else
    {
        norm.x = 1.;
        norm.y = 0.;
    }
    dist = - ( norm * a );
}

Vector2d Line2::project ( const Vector2d & v ) const
{
    return v - ( *this % v ) * norm;
}

/********************************************************************/

Similar2d Similar2d::operator ~ () const
{
    const double d = 1. / ( ax.x * ay.y - ay.x * ax.y );
    Similar2d sim;
    sim.ax.x =   ay.y * d;
    sim.ax.y = - ax.y * d;
    sim.ay.x = - ay.x * d;
    sim.ay.y =   ax.x * d;
    sim.trans.x = ( ax.y * trans.y - ay.y * trans.x ) * d;
    sim.trans.y = ( ay.x * trans.x - ax.x * trans.y ) * d;
    return sim;
}

Vector2d Similar2d::operator () ( const Vector2d & v ) const
{
    return Vector2d ( ax.x * v.x + ax.y * v.y + trans.x,
                      ay.x * v.x + ay.y * v.y + trans.y );
}

void Similar2d::rotateRadian ( double angle )
{
    const double c = cos ( angle );
    const double s = sin ( angle );
    const Vector2d bx ( c * ax.x - s * ay.x, c * ax.y - s * ay.y );
    const Vector2d by ( s * ax.x + c * ay.x, s * ax.y + c * ay.y );
    const Vector2d bt ( c * trans.x - s * trans.y, s * trans.x + c * trans.y );
    ax = bx;
    ay = by;
    trans = bt;
}

void Similar2d::rotateDegree ( double angle )
{
    rotateRadian ( angle * 3.14159265358979323846 / 180. );
}

Similar2d operator * ( const Similar2d & sim1, const Similar2d & sim2 )
{
    Similar2d sim;
    sim.ax.x = sim1.ax.x * sim2.ax.x + sim1.ax.y * sim2.ay.x;
    sim.ax.y = sim1.ax.x * sim2.ax.y + sim1.ax.y * sim2.ay.y;
    sim.ay.x = sim1.ay.x * sim2.ax.x + sim1.ay.y * sim2.ay.x;
    sim.ay.y = sim1.ay.x * sim2.ax.y + sim1.ay.y * sim2.ay.y;
    sim.trans.x = sim1.ax.x * sim2.trans.x + sim1.ax.y * sim2.trans.y + sim1.trans.x;
    sim.trans.y = sim1.ay.x * sim2.trans.x + sim1.ay.y * sim2.trans.y + sim1.trans.y;
    return sim;
}

void transform ( int n, Vector2d * v, const Similar2d & sim )
{
    for ( int j = n; --j >= 0; )
    {
        Vector2d & u = v[j];
        u = sim ( u );
    }
}