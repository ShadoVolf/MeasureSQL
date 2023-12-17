
#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3d
{
public :
    double x, y, z;

    Vector3d () {}
    Vector3d ( double a, double b, double c ) : x ( a ), y ( b ), z ( c ) {}
 
    Vector3d operator - () const
    {
        return Vector3d ( - x, - y, - z );
    }
 
    Vector3d & operator += ( const Vector3d & v )
    {
        x += v.x;
        y += v.y;
        z += v.z;
        return * this;
    }

    Vector3d & operator -= ( const Vector3d & v )
    {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return * this;
    }

    Vector3d & operator *= ( const double d )
    {
        x *= d;
        y *= d;
        z *= d;
        return * this;
    }

    Vector3d & operator /= ( const double d )
    {
        x /= d;
        y /= d;
        z /= d;
        return * this;
    }

    Vector3d & null ()
    {
        x = y = z = 0.;
        return * this;
    }

    bool operator ! () const
    {
        return !x && !y && !z;
    }

    Vector3d & norm ( double d = 1. );
    Vector3d   perpendicular () const;
    double     length () const;

};

inline Vector3d operator + ( const Vector3d& a, const Vector3d& b )
{
    return Vector3d ( a.x + b.x, a.y + b.y, a.z + b.z );
}

inline Vector3d operator - ( const Vector3d& a, const Vector3d& b )
{
    return Vector3d ( a.x - b.x, a.y - b.y, a.z - b.z );
}
 
inline Vector3d operator * ( const Vector3d& a, double d )
{
    return Vector3d ( a.x * d, a.y * d, a.z * d );
}
 
inline Vector3d operator / ( const Vector3d& a, double d )
{
    return Vector3d ( a.x / d, a.y / d, a.z / d );
}

inline Vector3d operator * ( double d, const Vector3d& a )
{
    return Vector3d ( a.x * d, a.y * d, a.z * d );
}

inline double operator * ( const Vector3d& a, const Vector3d& b )
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

inline double qmod ( const Vector3d& a )
{
    return a.x * a.x + a.y * a.y + a.z * a.z;
}

inline Vector3d operator % ( const Vector3d& a, const Vector3d& b )
{
    return Vector3d ( a.y * b.z - a.z * b.y,
                      a.z * b.x - a.x * b.z,
                      a.x * b.y - a.y * b.x );
}

inline bool operator != ( const Vector3d& a, const Vector3d& b )
{
    return a.x != b.x || a.y != b.y || a.z != b.z;
}

inline bool operator == ( const Vector3d& a, const Vector3d& b )
{
    return a.x == b.x && a.y == b.y && a.z == b.z;
}

void reper ( const Vector3d & x, Vector3d & y, Vector3d & z );

///////////////////////////////////////////////////////////////////////////////

class Segment3d
{
public:
    Vector3d a, b;

    Segment3d () {}
    Segment3d ( const Vector3d & va, const Vector3d & vb ) : a(va), b(vb) {}
};

///////////////////////////////////////////////////////////////////////////////

class Plane
{
public:
    Vector3d norm;
    double   dist;

    Plane () {}
    Plane ( const Vector3d &, const Vector3d &, const Vector3d & );
    Plane ( const Vector3d & v, const double & d ) : norm ( v ),
                                                     dist ( d ) {}
    double operator % ( const Vector3d & v ) const
    {
        return norm.x * v.x + norm.y * v.y + norm.z * v.z + dist;
    }

    Plane operator - () const
    {
        return Plane ( - norm, - dist );
    }

    Vector3d project ( const Vector3d & v ) const;
};

inline bool operator == ( const Plane & p1, const Plane & p2 )
{
    return p1.norm == p2.norm && p1.dist == p2.dist;
}

inline bool operator != ( const Plane & p1, const Plane & p2 )
{
    return p1.norm != p2.norm || p1.dist != p2.dist;
}

///////////////////////////////////////////////////////////////////////////////

class  Spin
{
        double  t, x, y, z;
public:
        Spin     () { t = 1.; x = y = z = 0.; }
        Spin     ( Vector3d, double );
		Spin     ( Vector3d v1, Vector3d v2 );
        Spin     ( const Vector3d & x, const Vector3d & y, const Vector3d & z );
        void     getReper ( Vector3d & ax, Vector3d & ay, Vector3d & az ) const;
        double   getAngle () const;
        Vector3d getAxis () const;
        Vector3d operator() ( const Vector3d & ) const;
        Spin &   operator*= ( const Spin & );
        Spin     operator ~ () const;
};

Spin    operator* ( const Spin &, const Spin & );

///////////////////////////////////////////////////////////////////////////////

class   Conform
{
public:
        Spin     spin;
        Vector3d trans;
        double   magn;

        Conform () : trans (0.,0.,0.), magn ( 1. ) {}
        explicit Conform ( const Spin & s ) : spin ( s ), trans (0.,0.,0.), magn ( 1.) {}
        Conform ( const Spin & s, const Vector3d & t, double m = 1. ) : spin(s), trans(t), magn(m) {}
        Conform operator~ () const;
        Plane   operator() ( const Plane & ) const;
        Vector3d operator() ( const Vector3d & ) const;
        Conform & operator*= ( const Conform & c );

};

Conform operator* ( const Conform &, const Conform & );

///////////////////////////////////////////////////////////////////////////////

class   Similarity
{
public:
        Vector3d ax, ay, az, trans;
        explicit Similarity ( const Spin & );
        explicit Similarity ( const Conform & );
        Vector3d operator () ( const Vector3d & ) const;
};

#endif