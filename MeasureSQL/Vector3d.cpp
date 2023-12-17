
#include "math.h"
#include "Vector3d.h"

Vector3d & Vector3d::norm ( double d )
{
    double t = x * x + y * y + z * z;
    if ( t )
    {
        d /= sqrt ( t );
        x *= d;
        y *= d;
        z *= d;
    }
    return * this;
}

Vector3d Vector3d::perpendicular () const
{
    double ax = fabs ( x );
    double ay = fabs ( y );
    double az = fabs ( z );
    if ( ax >= ay )
    {
        if ( ax >= az )
        {
            if ( ! ax ) return Vector3d (1.,0.,0.);
            double d = 1./ sqrt ( ax * ax + ay * ay );
            return Vector3d (-y*d, x*d, 0. );
        }
    }
    else
    {
        if ( ay >= az )
        {
            double d = 1./ sqrt ( ay * ay + az * az );
            return Vector3d ( 0.,-z*d, y*d );
        }
    }
    double d = 1./ sqrt ( ax * ax + az * az );
    return Vector3d ( z*d, 0.,-x*d );
}

double Vector3d::length () const
{
    return sqrt ( x * x + y * y + z * z );
}

void reper ( const Vector3d & x, Vector3d & y, Vector3d & z )
{
    y = x.perpendicular ();
    z = x % y;
}

///////////////////////////////////////////////////////////////////////////////

Plane::Plane ( const Vector3d & x, const Vector3d & y, const Vector3d & z )
{
    Vector3d v = x;
    v += y;
    v += z;
    v /= 3.;
    norm = x % y + y % z + z % x;
    if ( ! norm )
    {
        Vector3d xy = x - y;
        Vector3d yz = y - z;
        Vector3d zx = z - x;
        double d1 = qmod ( xy );
        double d2 = qmod ( yz );
        double d3 = qmod ( zx );
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

Vector3d Plane::project ( const Vector3d & v ) const
{
    return v - ( *this % v ) * norm;
}

///////////////////////////////////////////////////////////////////////////////

Spin::Spin ( Vector3d axis, double angle )
{
    if ( ! axis )
    {
        t = 1.;
        x = y = z = 0.;
    }
    else
    {
        angle *= 0.5;
        t = cos (angle);
        axis.norm ( sin (angle) );
        x = axis.x;
        y = axis.y;
        z = axis.z;
    }
}

Spin::Spin ( Vector3d v1, Vector3d v2 )
{
    t = v1.norm() * v2.norm();
    if ( ! v1 || ! v2 || t >= 1.)
    {
        t = 1.;
        x = y = z = 0.;
        return;
    }
    t += 1.;
    Vector3d v = v1 % v2;
    double d = t*t + v*v;
    if ( t <= 0 || d < 1e-18 )
    {
        v = v1.perpendicular();
        t = 0.;
        x = v.x;
        y = v.y;
        z = v.z;
        return;
    }
    d = 1./ sqrt ( d );
    t *= d;
    x = v.x * d;
    y = v.y * d;
    z = v.z * d;
}

Spin::Spin ( const Vector3d & vx, const Vector3d & vy, const Vector3d & vz )
{
    double la = 0.25 * ( 1. + vx.x - vy.y - vz.z );
    double mu = 0.25 * ( 1. - vx.x + vy.y - vz.z );
    double nu = 0.25 * ( 1. - vx.x - vy.y + vz.z );
    double ro = 0.25 * ( 1. + vx.x + vy.y + vz.z );
    la = ( la <= 0 ) ? 0. : sqrt ( la );
    mu = ( mu <= 0 ) ? 0. : sqrt ( mu );
    nu = ( nu <= 0 ) ? 0. : sqrt ( nu );
    ro = ( ro <= 0 ) ? 0. : sqrt ( ro );
    if ( la >= mu )
        if ( la >= nu )
        {
            if ( vx.y + vy.x < 0 ) mu = - mu;
            if ( vy.z - vz.y < 0 ) ro = - ro;
            if ( vz.x + vx.z < 0 ) nu = - nu;
        }
        else
        {
            if ( vx.y - vy.x < 0 ) ro = - ro;
            if ( vy.z + vz.y < 0 ) mu = - mu;
            if ( vz.x + vx.z < 0 ) la = - la;
        }
    else
        if ( nu >= mu )
        {
            if ( vx.y - vy.x < 0 ) ro = - ro;
            if ( vy.z + vz.y < 0 ) mu = - mu;
            if ( vz.x + vx.z < 0 ) la = - la;
        }
        else
        {
            if ( vx.y + vy.x < 0 ) la = - la;
            if ( vy.z + vz.y < 0 ) nu = - nu;
            if ( vz.x - vx.z < 0 ) ro = - ro;
        }
    x = la;
    y = mu;
    z = nu;
    t = ro;
}

Spin Spin::operator~ () const
{
    Spin s = *this;
    s.t = - t;
    return s;
}

Spin & Spin::operator *= ( const Spin & s )
{
    double st = t*s.t - x*s.x - y*s.y - z*s.z;
    double sx = t*s.x + x*s.t + y*s.z - z*s.y;
    double sy = t*s.y + y*s.t + z*s.x - x*s.z;
    double sz = t*s.z + z*s.t + x*s.y - y*s.x;
    double d = st*st + sx*sx + sy*sy + sz*sz;
    if ( fabs ( d - 1.) > 1e-14 )
    {
        d = 1./ sqrt ( d );
        t = st*d; x = sx*d; y = sy*d; z = sz*d;
    }
    else
    {
        t = st; x = sx; y = sy; z = sz;
    }
    return * this;
}

Spin operator * ( const Spin & s1, const Spin & s2 )
{
    Spin   s  = s1;
    return s *= s2;
}

Vector3d Spin::getAxis () const
{
    if ( !x && !y && !z )
    {
        return Vector3d ( 1., 0., 0. );
    }
    else
    {
        Vector3d v ( x, y, z );
        return v.norm();
    }
}

double Spin::getAngle () const
{
    return fabs ( t ) >= 1. ? 0. : 2.* acos ( t );
}

void Spin::getReper ( Vector3d & ax, Vector3d & ay, Vector3d & az ) const
{
    const double xx = x * x;
    const double yy = y * y;
    const double zz = z * z;
    const double tt = t * t;
    const double xy = x * y;
    const double yz = y * z;
    const double zx = z * x;
    const double xt = x * t;
    const double yt = y * t;
    const double zt = z * t;
    ax.x = tt + xx - yy - zz; ax.y = 2. * ( xy - zt );  ax.z = 2. * ( zx + yt );
    ay.x = 2. * ( xy + zt );  ay.y = tt + yy - zz - xx; ay.z = 2. * ( yz - xt );
    az.x = 2. * ( zx - yt );  az.y = 2. * ( yz + xt );  az.z = tt + zz - xx - yy;
}

Vector3d Spin::operator() ( const Vector3d & v ) const
{
    Vector3d ax, ay, az;
    getReper ( ax, ay, az );
    return Vector3d ( v*ax, v*ay, v*az );
}

///////////////////////////////////////////////////////////////////////////////

Conform Conform::operator ~ () const
{
    Spin s ( ~spin );
    double m = 1./magn;
    return Conform ( s, (-m) * s ( trans ), m );
}

Vector3d Conform::operator () ( const Vector3d & v ) const
{
    return magn * spin ( v ) + trans;
}

Plane Conform::operator () ( const Plane & p ) const
{
    Vector3d v = spin ( p.norm );
    return Plane ( v, magn * p.dist - v * trans );
}

Conform & Conform::operator *= ( const Conform & c )
{
    trans += spin ( c.trans ) * magn;
    spin  *= c.spin;
    magn  *= c.magn;
    return * this;
}

Conform operator * ( const Conform & c1, const Conform & c2 )
{
    Conform c = c1;
    return c *= c2;
}

///////////////////////////////////////////////////////////////////////////////

Similarity::Similarity ( const Spin & spin ) : trans ( 0., 0., 0. )
{
    spin.getReper ( ax, ay, az );
}

Similarity::Similarity ( const Conform & c )
{
    trans = c.trans;
    c.spin.getReper ( ax, ay, az );
    ax *= c.magn;
    ay *= c.magn;
    az *= c.magn;
}

Vector3d Similarity::operator () ( const Vector3d & p ) const
{
    return Vector3d ( ax*p, ay*p, az*p ) + trans;
}

