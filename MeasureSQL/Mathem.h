
#ifndef MATHEM_H
#define MATHEM_H

#include "Matrix.h"

//*********************** 13.05.2004 ************************//
//
//                      Сubic root.
//
//                      Кубический корень.
//
//***********************************************************//

double cbrt ( double x );


//*************************************************************//
//
//      Solution of Algebraic Equations of 2, 3, 4 Powers.
//      Return number of roots.
//
//      Решение алгебраических уравнений 2, 3 и 4 степени.
//      Возвращаемое значение - количество найденных корней.
//
//*************************************************************//

// x^2 + a * x + b = 0

int root2 ( double a, double b, double * x );


// x^3 + p * x + q = 0

int root3s ( double p, double q, double * x );


// x^3 + a * x^2 + b * x + c = 0

int root3 ( double a, double b, double c, double * x );


// x^4 + p * x^2 + q * x + r = 0

int root4s ( double p, double q, double r, double * x );


// x^4 + a * x^3 + b * x^2 + c * x + d = 0

int root4 ( double a, double b, double c, double d, double * x );


//*************************************************************//
//
//      Solution of System of Linear Equations of 2 and 3 Orders.
//
//      Решение систем линейных уравнений 2-го и 3-го порядка.
//
//*************************************************************//

class SLU2S
{
public:
    double aa, ab, ac,
           ba, bb, bc;
    bool kramer ( double & x, double & y ) const;
    void null ()
    {
        aa = ab = ac =
        ba = bb = bc = 0.;
    }
};

class SLU3S
{
public:
    double aa, ab, ac, ad,
           ba, bb, bc, bd,
           ca, cb, cc, cd;
    bool kramer ( double & x, double & y, double & z ) const;
    void null ()
    {
        aa = ab = ac = ad =
        ba = bb = bc = bd =
        ca = cb = cc = cd = 0.;
    }
};


//*************************************************************//
//
//      Gaussian Solution of System of Linear Equations.
//
//      Решение систем линейных уравнений методом Гаусса.
//
//*************************************************************//

class SLU_Gauss
{
    const int n;
    int * ipvt;
    double ** a;
    double cond;
// Запрет конструктора копии и оператора присваивания:
    SLU_Gauss ( SLU_Gauss & );
    void operator = ( SLU_Gauss & );
public:
    SLU_Gauss ( int k, const double * const * a );
    bool solve ( const double * b, double * x ) const; // b[n], x[n]
    double condition () const { return cond; }
    double determinant () const;
    ~SLU_Gauss ();
};


//*********************************************************************//
//
//      Orthogonal Solution of System of Linear Equations ( n <= m ).
//
//      Решение систем линейных уравнений методом ортогонализации.
//
//*********************************************************************//

bool slu_ortho ( int n, int m, const double * const * a, const double * b, double * x );



//*************************************************************//
//
//      Symmetric Positive Definite Matrices.
//              Cholesky Decomposition.
//
//      Симметричные положительно определённые матрицы.
//              Разложение Холецкого.
//
//*************************************************************//

class SM_Chol
{
    const int n;
    double * g;
// Запрет конструктора копии и оператора присваивания:
    SM_Chol ( SM_Chol & );
    void operator = ( SM_Chol & );
public:
    SM_Chol ( int k, const double * const * a );
    bool solve ( const double * b, double * x ) const; // b[n], x[n]
    double determinant () const;
    ~SM_Chol ();
};



//*************************************************************//
//
//      Symmetric Positive Definite Matrices.
//              LDLt Decomposition.
//
//      Симметричные положительно определённые матрицы.
//              LDLt разложение.
//
//*************************************************************//

class SM_LDLt
{
    const int n;
    double * g;
// Запрет конструктора копии и оператора присваивания:
    SM_LDLt ( SM_LDLt & );
    void operator = ( SM_LDLt & );
public:
    SM_LDLt ( int k, const double * const * a );
    bool solve ( const double * b, double * x ) const; // b[n], x[n]
    double determinant () const;
    ~SM_LDLt ();
};


//*************************************************************//
//
//      Least Squares Solution ( n >= m ).
//      Householder Transformations.
//
//      Метод наименьших квадратов ( n >= m ).
//      Преобразования Хаусхолдера.
//
//*********************** 02.03.2005 **************************//

class LSS_H_Stor
{
    int * pivot;
    const int n, m;
    double * const * qr;
    double * alpha;
    double * sum;
    double * y;
    bool ok;
// Запрет конструктора копии и оператора присваивания:
    LSS_H_Stor ( LSS_H_Stor & );
    void operator = ( LSS_H_Stor & );
public:
    LSS_H_Stor ( Matrix & a );
    bool solve ( const double * b, double * x ) const; // b[n], x[m]
    ~LSS_H_Stor ();
};

class LSS_H
{
    Matrix matrix;
    LSS_H_Stor lss;
public:
    LSS_H ( int n, int m, const double * const * a ) : matrix ( n, m, a ), lss ( matrix ) {}
    bool solve ( const double * b, double * x ) const // b[n], x[m]
    {
        return lss.solve ( b, x );
    }
};

bool lss_h ( Matrix & a, const double * b, double * x );

bool lss_h ( int n, int m, const double * const * a, const double * b, double * x );


//***************************************************************************//
//
//      Least Squares Solution ( n >= m ). Gram-Schmidt Orthogonalization.
//
//      Метод наименьших квадратов ( n >= m ). Oртогонализация Грама-Шмидта.
//
//****************************** 12.02.2005 *********************************//

bool ortholin ( Matrix & a, const double * b, double * x );
bool ortholin ( int n, int m, const double * const * a, const double * b, double * x );


//***************************************************************************//
//
//  The Jacobi Method for Finding the Eigenvalue and Eigenvectors
//                      of Symmetric Matrices.
// 
//  Метод Якоби нахождения собственных значений и собственных векторов
//                       для симметричных матриц
//    Входные данные:
//        n - размерность матрицы
//        a - исходная матрица. В процессе работы наддиагональные элементы
//            будут изменены, но их легко восстановить по поддиагональным
//    Выходные данные:
//        d - массив собственных значений
//        v - массив собственных векторов
//        значение функции - количество проведённых вращений ( для интереса )
//
//***************************************************************************//

int jacobi ( const int n, double * const * a, double * d, double * const * v );


//************************* 03.12.2005 **************************************//
//
//        Поиск нуля функции на заданном интервале
//        Значения функции в ax и bx должны иметь разные знаки
//
//***************************************************************************//

class MathemFunc1
{
public:
    virtual double operator () ( double ) const = 0;
};

bool zeroin ( double ax, double bx, const MathemFunc1 & func, double tol, double & res );

#endif