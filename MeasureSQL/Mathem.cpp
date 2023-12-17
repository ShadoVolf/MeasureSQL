
#include "math.h"
#include "mathem.h"

//*********************** 13.05.2004 ************************//
//
//                      Сubic root.
//
//                      Кубический корень.
//
//***********************************************************//

static double _cbrt ( double x )
{
    double s = 1.;
    while ( x < 1. )
    {
        x *= 8.;
        s *= 0.5;
    }
    while ( x > 8. )
    {
        x *= 0.125;
        s *= 2.;
    }
    double r = 1.5;
    for ( int i = 6; --i >= 0; )
    {
        r -= 1./3. * ( r - x / ( r * r ) );
    }
    return r * s;
}

double cbrt ( double x )
{
    if ( x > 0 ) return _cbrt ( x ); else
    if ( x < 0 ) return-_cbrt (-x ); else
    return 0.;
}

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

int root2 ( double a, double b, double * x )
{
    if ( b == 0 )
    {
        x[0] = -a;
        x[1] = 0.;
    }
    else
    {
        a *= -0.5;
        double d = a * a - b;
        if ( d < 0 ) return 0;
        d = sqrt ( d );
        x[0] = a > 0 ? a + d : a - d;
        x[1] = b / x[0];
    }
    return 2;
}

// x^3 + a * x + b = 0

static void cubic ( double a, double b, double & x )
{
    double s = 1.;
    while ( b + a > -1. )
    {
        a *= 4.;
        b *= 8.;
        s *= 0.5;
    }
    while ( b + a + a < -8. )
    {
        a *= 0.25;
        b *= 0.125;
        s *= 2.;
    }
    x = 1.5;
    for ( int i = 9; --i >= 0; )
    {
        x -= ( x * ( x * x + a ) + b ) / ( 3. * x * x + a );
    }
    x *= s;
}

// x^3 + p * x + q = 0

int root3s ( double p, double q, double * x )
{
    if ( q < 0 )
    {
        cubic ( p, q, *x );
    }
    else
    if ( q > 0 )
    {
        cubic ( p, -q, *x );
        *x = - *x;
    }
    else
    {
        *x = 0;
    }
    return 1 + root2 ( *x, p + (*x)*(*x), x+1 );
}

// x^3 + a * x^2 + b * x + c = 0

int root3 ( double a, double b, double c, double * x )
{
    if ( c == 0 )
    {
        *x = 0;
    }
    else
    {
        const double a3 = a / 3.;
        double p = b - 3.* a3 * a3;
        double q = c - ( a3 * a3 + p ) * a3;
        if ( q < 0 )
        {
            cubic ( p, q, *x );
        }
        else
        if ( q > 0 )
        {
            cubic ( p, -q, *x );
            *x = - *x;
        }
        else
        {
            *x = 0;
        }
        *x -= a3;
        const double t = *x * ( *x * 3. + a * 2. ) + b;
        if ( fabs ( t ) > 1e-3 )
        {
            *x -= ( *x * ( *x * ( *x + a ) + b ) + c ) / t;
        }
        a += *x;
        b += *x * a;
    }
    return 1 + root2 ( a, b, x+1 );
}

// x^4 + p * x^2 + q * x + r = 0

int root4s ( double p, double q, double r, double * x )
{
    if ( q == 0 )
    {
        double t[2];
        int n = root2 ( p, r, t );
        if ( n == 0 ) return 0;
        if ( t[0] >= 0 )
        {
            double s = sqrt ( t[0] );
            x[0] = s;
            x[1] = -s;
            n = 2;
        }
        else
        {
            n = 0;
        }
        if ( t[1] >= 0 )
        {
            double s = sqrt ( t[1] );
            x[n] = s;
            x[n+1] = -s;
            n += 2;
        }
        return n;
    }
    int n = root3 ( p+p, p*p - 4.*r, -q*q, x );
    double a = *x;
    if ( n == 3 )
    {
        if ( a < x[1] ) a = x[1];
        if ( a < x[2] ) a = x[2];
    }
    if ( a < 0 ) return 0;
    p += a;
    a = sqrt(a);
    double b = q/a;
    n = root2 (  a, 0.5*(p-b), x   );
    n+= root2 ( -a, 0.5*(p+b), x+n );
    return n;
}

// x^4 + a * x^3 + b * x^2 + c * x + d = 0

int root4 ( double a, double b, double c, double d, double * x )
{
    if ( a == 0 )
    {
        return root4s ( b, c, d, x );
    }
    if ( d == 0 )
    {
        *x = 0;
        return 1 + root3 ( a, b, c, x+1 );
    }
    double e = a / 4;
    double p = -6*e*e + b;
    double q = 8*e*e*e -2*b*e + c;
    double r = -3*e*e*e*e + b*e*e - c*e + d;
    int n = root4s ( p, q, r, x );
    for ( int i = 0; i < n; ++i )
    {
        x[i] -= e;
    }
    return n;
}

//*************************************************************//
//
//      Solution of System of Linear Equations of 2 and 3 Orders.
//
//      Решение систем линейных уравнений 2-го и 3-го порядка.
//
//*************************************************************//

bool SLU2S::kramer ( double & x, double & y ) const
{
    double d = aa*bb - ba*ab;
    if ( ! d ) return false;
    x = ( ac*bb - bc*ab ) / d;
    y = ( aa*bc - ba*ac ) / d;
    return true;
}

bool SLU3S::kramer ( double & x, double & y, double & z ) const
{
    double
    d = aa * ( bb*cc - cb*bc ) + 
        ba * ( cb*ac - ab*cc ) +
        ca * ( ab*bc - bb*ac );
    if ( ! d ) return false;
    x = ad * ( bb*cc - cb*bc ) + 
        bd * ( cb*ac - ab*cc ) +
        cd * ( ab*bc - bb*ac );
    y = aa * ( bd*cc - cd*bc ) + 
        ba * ( cd*ac - ad*cc ) +
        ca * ( ad*bc - bd*ac );
    z = aa * ( bb*cd - cb*bd ) + 
        ba * ( cb*ad - ab*cd ) +
        ca * ( ab*bd - bb*ad );
    x /= d;
    y /= d;
    z /= d;
    return true;
}

//*************************************************************//
//
//      Gaussian Solution of System of Linear Equations.
//
//      Решение систем линейных уравнений методом Гаусса.
//
//*************************************************************//

SLU_Gauss::SLU_Gauss ( int m, const double * const * u ) : n ( m ), cond ( 1e32 )
{
    if ( n < 1 )
    {
        a = 0;
        return;
    }
    a = new double *[n];
    a[0] = new double[n*n];
    for ( int i = 0; i < n; ++i )
    {
        if ( i > 0 ) a[i] = a[i-1] + n;
        for ( int j = 0; j < n; ++j ) a[i][j] = u[i][j];
    }
    const int nm1 = n - 1;
    ipvt = new int[n];
    ipvt[nm1] = 1;
    if ( n == 1 )
    {
        if ( a[0][0] != 0 ) cond = 1.;
        return;
    }
// Вычисляем 1-норму матрицы A
    double anorm = 0.;
    for ( int j = 0; j < n; ++j )
    {
        double t = 0.;
        for ( int i = 0; i < n; ++i ) t += fabs ( a[i][j] );
        if ( anorm < t ) anorm = t;
    }
// Гауссово исключение с частичным выбором ведущего элемента
    for ( int k = 0; k < nm1; ++k )
    {
        int m = k;
        const int kp1 = k + 1;
        for ( int i = kp1; i < n; ++i )
        {
            if ( fabs ( a[i][k] ) > fabs ( a[m][k] ) ) m = i;
        }
        ipvt[k] = m;
        if ( m != k ) ipvt[nm1] = - ipvt[nm1];
        double t = a[m][k];
        a[m][k] = a[k][k];
        a[k][k] = t;
        if ( t )
        {
            t = -1. / t;
            for ( int i = kp1; i < n; ++i ) a[i][k] = a[i][k] * t;
            for ( int j = kp1; j < n; ++j )
            {
                double t = a[m][j];
                a[m][j] = a[k][j];
                a[k][j] = t;
                if ( t )
                {
                    for ( int i = kp1; i < n; ++i ) a[i][j] += a[i][k] * t;
                }
            }
        }
        else
        {
            return;
        }
    }
    if ( ! a[nm1][nm1] ) return; // Эта строка добавлена 12.05.2004
// Вычисление обусловленности
    double * work = new double[n];
    for ( k = 0; k < n; ++k )
    {
        double t = 0.;
        const int km1 = k - 1;
        for ( int i = 0; i < km1; ++i )
        {
            t += a[i][k] * work[i];
        }
        double ek = t < 0 ? -1. : 1.;
        work[k] = - ( ek + t ) / a[k][k];
    }
    for ( k = nm1; --k >= 0; )
    {
        double t = 0.;
        const int kp1 = k + 1;
        for ( int i = kp1; i < n; ++i )
        {
            t += a[i][k] * work[k];
        }
        work[k] = t;
        const int m = ipvt[k];
        if ( m != k )
        {
            t = work[m];
            work[m] = work[k];
            work[k] = t;
        }
    }
    double ynorm = 0.;
    for ( k = 0; k < n; ++k ) ynorm += fabs ( work[k] );
    cond = 1.; // для того, чтобы сработал solve
    solve ( work, work );
    double znorm = 0.;
    for ( k = 0; k < n; ++k ) znorm += fabs ( work[k] );
    delete[] work;
    cond = anorm * znorm / ynorm;
    if ( cond < 1. ) cond = 1.;
}

bool SLU_Gauss::solve ( const double * b, double * x ) const // b[n], x[n]
{
    if ( cond + 1. == cond ) return false;
    if ( b != x )
    {
        for ( int i = 0; i < n; ++i ) x[i] = b[i];
    }
// Прямой ход
    const int nm1 = n - 1;
    for ( int k = 0; k < nm1; ++k )
    {
        const int m = ipvt[k];
        const double t = x[m];
        x[m] = x[k];
        x[k] = t;
        for ( int i = k + 1; i < n; ++i )
        {
            x[i] += a[i][k] * t;
        }
    }
// Обратная подстановка
    for ( int km1 = n - 2; km1 >= 0; --km1 )
    {
        const int k = km1 + 1;
        x[k] /= a[k][k];
        const double t = - x[k];
        for ( int i = 0; i <= km1; ++i )
        {
            x[i] += a[i][k] * t;
        }
    }
    x[0] /= a[0][0];
    return true;
}

double SLU_Gauss::determinant () const
{
    if ( cond + 1. == cond ) return 0.;
    double d = ipvt[n-1];
    for ( int i = n; --i >= 0; ) d *= a[i][i];
    return d;
}

SLU_Gauss::~SLU_Gauss()
{
    if ( a )
    {
        delete[] ipvt;
        delete[] a[0];
        delete[] a;
    }
}


//*********************************************************************//
//
//      Orthogonal Solution of System of Linear Equations ( n <= m ).
//
//      Решение систем линейных уравнений методом ортогонализации.
//
//*********************************************************************//

bool slu_ortho ( int n, int m, const double * const * a, const double * b, double * x )
{
    if ( n < 1 || n > m ) return false;
    const int n1 = n + 1;
    const int m1 = m + 1;
// Создаём и заполняем матрицу C[n1][m1]
    double ** c = new double*[n1];
    for ( int i = 0; i < n; ++i )
    {
        const double * p = a[i];
        double * t = c[i] = i ? c[i-1] + m1 : new double[n1*m1];
        for ( int j = 0; j < m; ++j ) *t++ = *p++;
        *t = b[i];
    }
    {
        double * t = c[n] = c[n-1] + m1;
        for ( int j = 0; j < m; ++j ) *t++ = 0.;
        *t = 1.;
    }
// Делаем строки матрицы С ортогональными
    for ( int k = 0; k < n; ++k )
    {
        double q = 0.;
        const double * p = c[k];
        for ( int j = 0; j < m1; ++j ) q += p[j] * p[j];
        if ( q == 0 ) continue;
        q = 1. / q;
        for ( int i = k+1; i < n1; ++i )
        {
            double * t = c[i];
            double s = 0.;
            for ( j = 0; j < m1; ++j ) s += t[j] * p[j];
            s *= q;
            for ( j = 0; j < m1; ++j ) t[j] -= s * p[j];
        }
    }
// Если решение найдено записываем результат в вектор x
    const bool ok = c[n][m] != 0;
    if ( ok )
    {
        const double * p = c[n];
        const double t = -1. / p[m];
        for ( int i = 0; i < m; ++i ) x[i] = p[i] * t;
    }
    delete[] c[0];
    delete[] c;
    return ok;
}


//*************************************************************//
//
//      Symmetric Positive Definite Matrices.
//              Cholesky Decomposition.
//
//      Симметричные положительно определённые матрицы.
//              Разложение Холецкого.
//
//*************************************************************//

SM_Chol::SM_Chol ( int k, const double * const * a ) : n(k)
{
    if ( n < 1 )
    {
        g = 0;
        return;
    }
    const double * si = g = new double[n*(n+1)/2];
    int l = 0;
    for ( int i = 0; i < n; ++i )
    {
        si += i;
        const double * sj = g;
        for ( int j = 0; j <= i; ++j )
        {
            sj += j;
            double x = a[i][j];
            const double * pi = si;
            const double * pj = sj;
            for ( int k = j; --k >= 0; )
            {
                x -= (*pi++) * (*pj++);
            }
            if ( i == j )
            {
                if ( x <= 0 )
                {
                    delete[] g;
                    g = 0;
                    return;
                }
                g[l] = 1. / sqrt(x);
            }
            else
            {
                g[l] = x * (*pj);
            }
            ++l;
        }
    }
}

bool SM_Chol::solve ( const double * b, double * x ) const
{
    if ( g == 0 ) return false;
// Решение системы Ly = b
    int p = 0;
    for ( int i = 0; i < n; ++i )
    {
        double t = b[i];
        for ( int k = 0; k < i; ++k )
        {
            t -= g[p] * x[k];
            ++p;
        }
        x[i] = t * g[p++];
    }
// Решение системы Ux = y;
    for ( i = n; --i >= 0; )
    {
        int s = --p;
        double t = x[i];
        for ( int k = n; --k > i; )
        {
            t -= g[s] * x[k];
            s -= k;
        }
        x[i] = t * g[s];
    }
    return true;
}

double SM_Chol::determinant () const 
{
    if ( g == 0 ) return 0.;
    int p = 0;
    double det = 1.;
    for ( int i = 0; i < n; ++i )
    {
        det *= g[p];
        p += i + 2;
    }
    return 1. / ( det * det );
}

SM_Chol::~SM_Chol ()
{
    delete[] g;
}

//*************************************************************//
//
//      Symmetric Positive Definite Matrices.
//              LDLt Decomposition.
//
//      Симметричные положительно определённые матрицы.
//              LDLt разложение.
//
//*************************************************************//

SM_LDLt::SM_LDLt ( int k, const double * const * a ) : n(k)
{
    if ( n < 1 )
    {
        g = 0;
        return;
    }
    const double * si = g = new double[n*(n+1)/2];
    int l = 0;
    for ( int i = 0; i < n; ++i )
    {
        si += i;
        double * sj = g;
        for ( int j = 0; j <= i; ++j )
        {
            sj += j;
            double x = a[i][j];
            double * pj = sj;
            if ( i == j )
            {
                const double * p = g;
                for ( int k = 0; k < j; ++k )
                {
                    double y = *pj;
                    *pj *= *p;
                    x -= y * (*pj++);
                    p += k + 2;
                }
                if ( x == 0 )
                {
                    delete[] g;
                    g = 0;
                    return;
                }
                g[l] = 1. / x;
            }
            else
            {
                const double * pi = si;
                for ( int k = j; --k >= 0; ) x -= (*pi++) * (*pj++);
                g[l] = x;
            }
            ++l;
        }
    }
}

bool SM_LDLt::solve ( const double * b, double * x ) const
{
    if ( g == 0 ) return false;
// Решение системы Ly = b
    int p = 0;
    for ( int i = 0; i < n; ++i )
    {
        double t = b[i];
        for ( int k = 0; k < i; ++k )
        {
            t -= g[p] * x[k];
            ++p;
        }
        x[i] = t;
        ++p;
    }
// Решение системы DUx = y;
    for ( i = n; --i >= 0; )
    {
        int s = --p;
        double t = x[i] * g[i*(i+3)/2];
        for ( int k = n; --k > i; )
        {
            t -= g[s] * x[k];
            s -= k;
        }
        x[i] = t;
    }
    return true;
}

double SM_LDLt::determinant () const 
{
    if ( g == 0 ) return 0.;
    int p = 0;
    double det = 1.;
    for ( int i = 0; i < n; ++i )
    {
        det *= g[p];
        p += i + 2;
    }
    return 1. / det;
}

SM_LDLt::~SM_LDLt ()
{
    delete[] g;
}

//*************************************************************//
//
//      Least Squares Solution ( n >= m ).
//      Householder Transformations.
//
//      Метод наименьших квадратов ( n >= m ).
//      Преобразования Хаусхолдера.
//
//*********************** 02.03.2005 **************************//

LSS_H_Stor::LSS_H_Stor ( Matrix & a ) : n(a.nRow), m(a.nCol)
{
    if ( n < m || m <= 0 )
    {
        ok = false;
        pivot = 0;
        alpha = 0;
        sum = 0;
        qr = 0;
        y = 0;
        return;
    }
    ok = true;
    qr = a;
    y = new double[m+m+n];
    sum = y + m;
    alpha = sum + n;
    pivot = new int[m];
    for ( int j = 0; j < m; ++j )
    {
        pivot[j] = j;
        double s = 0.;
        for ( int i = n; --i >= 0; ) s += qr[i][j] * qr[i][j];
        sum[j] = s;
    }
    for ( int k = 0; k < m; ++k )
    {
        double sigma = sum[k];
        int jbar = k;
        for ( int j = k + 1; j < m; ++j )
        {
            if ( sigma < sum[j] ) sigma = sum[j], jbar = j;
        }
        if ( jbar != k ) // перестановка столбцов
        {
            int i = pivot[k];
            pivot[k] = pivot[jbar];
            pivot[jbar] = i;
            sum[jbar] = sum[k];
            sum[k] = sigma;
            for ( i = n; --i >= 0; )
            {
                sigma = qr[i][k];
                qr[i][k] = qr[i][jbar];
                qr[i][jbar] = sigma;
            }
        }
        sigma = 0.;
        for ( int i = n; --i >= k; ) sigma += qr[i][k] * qr[i][k];
        if ( sigma == 0 )
        {
            ok = false;
            break;
        }
        double qrkk = qr[k][k];
        double alphak = alpha[k] = qrkk < 0 ? sqrt ( sigma ) : - sqrt ( sigma );
        double beta = 1. / ( sigma - qrkk * alphak );
        qr[k][k] = qrkk - alphak;
        for ( j = k + 1; j < m; ++j )
        {
            double s = 0.;
            for ( int i = n; --i >= k; ) s += qr[i][k] * qr[i][j];
            y[j] = beta * s;
        }
        for ( j = k + 1; j < m; ++j )
        {
            for ( int i = n; --i >= k; )
            {
                qr[i][j] -= qr[i][k] * y[j];
                sum[j] -= qr[k][j] * qr[k][j];
            }
        }
    }
}

bool LSS_H_Stor::solve ( const double * b, double * x ) const
{
    if ( ok == false || b == 0 || x == 0 ) return false;
    for ( int i = 0; i < n; ++i ) sum[i] = b[i];
    for ( int j = 0; j < m; ++j )
    {
        double gamma = 0.;
        for ( int i = j; i < n; ++i ) gamma += qr[i][j] * sum[i];
        gamma /= alpha[j] * qr[j][j];
        for ( i = j; i < n; ++i ) sum[i] += qr[i][j] * gamma;
    }
    y[m-1] = sum[m-1] / alpha[m-1];
    for ( i = m - 1; --i >= 0; )
    {
        y[i] = sum[i];
        for ( int j = i + 1; j < m; ++j ) y[i] -= y[j] * qr[i][j];
        y[i] /= alpha[i];
    }
    for ( i = m; --i >= 0; ) x[pivot[i]] = y[i];
    return ok;
}

LSS_H_Stor::~LSS_H_Stor ()
{
    if ( y )
    {
        delete[] pivot;
        delete[] y;
    }
}

bool lss_h ( Matrix & a, const double * b, double * x )
{
    LSS_H_Stor lss ( a );
    return lss.solve ( b, x );
}

bool lss_h ( int n, int m, const double * const * a, const double * b, double * x )
{
    Matrix A ( n, m, a );
    LSS_H_Stor lss ( A );
    return lss.solve ( b, x );
}

//***************************************************************************//
//
//      Least Squares Solution ( n >= m ). Gram-Schmidt Orthogonalization.
//
//      Метод наименьших квадратов ( n >= m ). Oртогонализация Грама-Шмидта.
//
//****************************** 12.02.2005 *********************************//

bool ortholin ( Matrix & a, const double * b, double * x )
{
    const int n = a.nRow;
    const int m = a.nCol;
    if ( m <= 0 || m > n || b == 0 || x == 0 ) return false;
    double * const * u = a;
    double * p = new double[n+m*(m+1)/2];
    double * q = p + n;
    int l = -1;
    bool ok = true;
    for ( int i = 0; i < m; ++i )
    {
        double s = 0.;
        for ( int j = 0; j < n; ++j )
        {
            double t = p[j] = u[j][i];
            s += t * t;
        }
        if ( s == 0 )
        {
            ok = false;
            break;
        }
        q[++l] = s;
        double t = 0.;
        for ( j = 0; j < n; ++j ) t += p[j] * b[j];
        x[i] = t;
        for ( int h = i + 1; h < m; ++h )
        {
            t = 0.;
            for ( j = 0; j < n; ++j ) t += p[j] * u[j][h];
            q[++l] = t;
            t /= s;
            for ( j = 0; j < n; ++j ) u[j][h] -= p[j] * t;
        }
    }
// Обратная подстановка 
    if ( ok )
    {
        int mm = m + 1;
        for ( i = m; --i >= 0; )
        {
            int h = l - i;
            double s = x[i];
            for ( int j = i + 1; j < m; ++j ) s -= q[j+h] * x[j];
            x[i] = s / q[l];
            l += i - mm;
        }
    }
// Освобождение занятой памяти
    delete[] p;
    return ok;
}

bool ortholin ( int n, int m, const double * const * a, const double * b, double * x )
{
    return ortholin ( Matrix ( n, m, a ), b, x );
}


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

int jacobi ( const int n, double * const * a, double * d, double * const * v )
{
    double * b = new double[n+n];
    double * z = b + n;
    for ( int i = n; --i >= 0; )
    {
        z[i] = 0.;
        b[i] = d[i] = a[i][i];
        for ( int j = n; --j >= 0; )
        {
            v[i][j] = i == j ? 1. : 0.;
        }
    }
    int rot = 0;
    for ( i = 0; i < 50; ++i )
    {
        double sm = 0.;
        for ( int p = n - 1; --p >= 0; )
        {
            for ( int q = n; --q > p; )
            {
                sm += fabs ( a[p][q] );
            }
        }
        if ( sm == 0 ) break;
        const double tresh = i < 3 ? 0.2 * sm / ( n*n ) : 0.;
        for ( p = 0; p < n - 1; ++p )
        {
            for ( int q = p + 1; q < n; ++q )
            {
                const double g = 1e12 * fabs ( a[p][q] );
                if ( i >= 3 && fabs ( d[p] ) > g && fabs ( d[q] ) > g ) a[p][q] = 0.;
                else
                if ( fabs ( a[p][q] ) > tresh )
                {
                    const double theta = 0.5 * ( d[q] - d[p] ) / a[p][q];
                    double t = 1. / ( fabs(theta) + sqrt(1.+theta*theta) );
                    if ( theta < 0 ) t = - t;
                    const double c = 1. / sqrt ( 1. + t*t );
                    const double s = t * c;
                    const double tau = s / ( 1. + c );
                    const double h = t * a[p][q];
                    z[p] -= h;
                    z[q] += h;
                    d[p] -= h;
                    d[q] += h;
                    a[p][q] = 0.;
                    for ( int j = 0; j < p; ++j )
                    {
                        const double g = a[j][p];
                        const double h = a[j][q];
                        a[j][p] = g - s * ( h + g * tau );
                        a[j][q] = h + s * ( g - h * tau );
                    }
                    for ( j = p+1; j < q; ++j )
                    {
                        const double g = a[p][j];
                        const double h = a[j][q];
                        a[p][j] = g - s * ( h + g * tau );
                        a[j][q] = h + s * ( g - h * tau );
                    }
                    for ( j = q+1; j < n; ++j )
                    {
                        const double g = a[p][j];
                        const double h = a[q][j];
                        a[p][j] = g - s * ( h + g * tau );
                        a[q][j] = h + s * ( g - h * tau );
                    }
                    for ( j = 0; j < n; ++j )
                    {
                        const double g = v[j][p];
                        const double h = v[j][q];
                        v[j][p] = g - s * ( h + g * tau );
                        v[j][q] = h + s * ( g - h * tau );
                    }
                    ++rot;
                }
            }
        }
        for ( p = n; --p >= 0; )
        {
            d[p] = ( b[p] += z[p] );
            z[p] = 0.;
        }
    }
    delete[] b;
    return rot;
}


//************************* 03.12.2005 **************************************//
//
//        Поиск нуля функции на заданном интервале
//        Значения функции в ax и bx должны иметь разные знаки
//
//***************************************************************************//

// Вычислить eps, относительную машинную точность
static double getEps ()
{
    double eps = 1.;
    for(;;)
    {
        eps /= 2.;
        double t = 1. + eps;
        if ( t == 1. ) break;
    }
    return eps;
}

inline int sign ( double d )
{
    if ( d > 0 ) return 1;
    if ( d < 0 ) return -1;
    return 0;
}

bool zeroin ( double ax, double bx, const MathemFunc1 & func, double tol, double & res )
{
    double fa = func(ax);
    double fb = func(bx);
    if ( sign(fa) * sign(fb) > 0 ) return false;
    if ( tol < 0 ) tol = 0.;
// Вычислить eps, относительную машинную точность
    static const double eps = getEps ();
// Присвоение начальных значений
    double a = ax;
    double b = bx;
    for(;;)
    {
        double c = a;
        double fc = fa;
        double d = b - a;
        double e = d;
m30:    if ( fabs(fc) < fabs(fb) )
        {
            a = b;
            b = c;
            c = a;
            fa = fb;
            fb = fc;
            fc = fa;

        }
// Проверка сходимости
        if ( fb == 0 ) break;
        double tol1 = 2. * eps * fabs(b) + 0.5 * tol;
        double xm = 0.5 * ( c - b );
        if ( fabs(xm) <= tol1 ) break;
// Необходима ли бисекция?
        if ( fabs(e) < tol1 || fabs(fa) <= fabs(fb) ) goto m70;
        {
            double p, q;
            const double s = fb / fa;
            if ( a == c )
            {
// Линейная интерполяция
                p = 2. * xm * s;
                q = 1. - s;
            }
            else
            {
// Обратная квадратичная интерполяция
                q = fa / fc;
                const double r = fb / fc;
                p = s * ( 2. * xm * q * ( q - r ) - ( b - a ) * ( r - 1. ) );
                q = ( q - 1. ) * ( r - 1. ) * ( s - 1. );
            }
            if ( p > 0 ) q = -q;
            p = fabs ( p );
// Приемлема ли интерполяция
            if ( p + p >= 3.*xm*q - fabs(tol1*q) ) goto m70;
            if ( p >= fabs(0.5*e*q) ) goto m70;
            e = d;
            d = p / q;
            goto m80;
        }
m70:    e = d = xm; // бисекция
// Завершить шаг
m80:    a = b;
        fa = fb;
        if ( fabs(d) > tol1 ) b += d;
        else
        {
            if ( xm > 0 ) b += tol1;
            else          b -= tol1;
        }
        fb = func(b);
        if ( sign(fb) * sign(fc) <= 0 ) goto m30;

    }
    res = b;
    return true;
}
