
// Prografix 13.03.2004, 27.03.2004, 05.06.2004, 26.06.2004

#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
    double ** p;
// Запрет оператора присваивания
    void operator = ( const Matrix & );
public:
    const int nRow; // к-во строк
    const int nCol; // к-во столбцов

    Matrix ( int r, int c );
    Matrix ( int r, int c, const double * const * a );
    Matrix ( const Matrix & );
   ~Matrix ();

    void fill ( double );
    Matrix & operator *= ( double );
    operator       double * const * ()       { return p; }
    operator const double * const * () const { return p; }
};

// Матричные нормы

double norm1 ( const Matrix & ); // 1-норма
double norm2 ( const Matrix & ); // 2-норма
double normF ( const Matrix & ); // норма Фробениуса
double normU ( const Matrix & ); // бесконечная норма

// Разные функции

bool determinant ( const Matrix & m, double & d );
bool copy   ( const Matrix & a, Matrix & b ); // b = a
bool trans  ( const Matrix & a, Matrix & b ); // b = aT
bool inverse( const Matrix & a, Matrix & b ); // a * b = 1

bool  plus ( const Matrix & a, const Matrix & b, Matrix & c ); // c = a + b;
bool minus ( const Matrix & a, const Matrix & b, Matrix & c ); // c = a - b;
bool multi ( const Matrix & a, const Matrix & b, Matrix & c ); // c = a * b;

// Cингулярное разложение: A = U * W * V

bool svd ( const Matrix & A, Matrix & U, Matrix & W, Matrix & V ); 

///////////////////////////////////////////////////////////////////////////////

template < int r, int c > 
class Matr : public Matrix
{
public:
    Matr () : Matrix ( r, c ) {}
    Matr ( const Matr & m ) : Matrix ( m ) {}

    Matr & operator = ( const Matr & m )
    {
        copy ( m, *this );
        return *this;
    }

    Matr & operator += ( const Matr & m )
    {
        plus ( *this, m, *this );
        return *this;
    }

    Matr & operator -= ( const Matr & m )
    {
        plus ( *this, m, *this );
        return *this;
    }

    Matr & operator *= ( double d )
    {
        Matrix::operator *= ( d );
        return *this;
    }
};

template < int m, int n > 
const Matr<m,n> operator + ( const Matr<m,n> & a, const Matr<m,n> & b )
{
    Matr<m,n> c;
    plus ( a, b, c );
    return c;
}

template < int m, int n > 
const Matr<m,n> operator - ( const Matr<m,n> & a, const Matr<m,n> & b )
{
    Matr<m,n> c;
    minus ( a, b, c );
    return c;
}

template < int m, int n > 
const Matr<n,m> operator * ( const Matr<n,m> & a, double d )
{
    Matr<n,m> b = a;
    b *= d;
    return b;
}

template < int m, int n > 
const Matr<n,m> operator * ( double d, const Matr<n,m> & a )
{
    Matr<n,m> b = a;
    b *= d;
    return b;
}

template < int l, int m, int n > 
const Matr<l,n> operator * ( const Matr<l,m> & a, const Matr<m,n> & b )
{
    Matr<l,n> c;
    multi ( a, b, c );
    return c;
}

template < int m, int n >
const Matr<n,m> trans ( const Matr<m,n> & a )
{
    Matr<n,m> b;
    trans ( a, b );
    return b;
}

template < int m, int n >
const Matr<n,m> inverse ( const Matr<m,n> & a )
{
    Matr<n,m> b;
    inverse ( a, b );
    return b;
}

#endif