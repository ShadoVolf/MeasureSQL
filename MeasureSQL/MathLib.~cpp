//---------------------------------------------------------------------------
#pragma hdrstop
#include "ap.h"
#include "MathLib.h"
#include <vcl.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <condefs.h>
#include "math.h"
#include "mathem.h"
#include "Matrix.h"
#include <process.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
static const int maxsvditerations = 30;
void lagrangederivative(int n,
     const ap::real_1d_array& x,
     ap::real_1d_array f,
     double t,
     double& p,
     double& dp)
{                                         
    int m;
    int i;
    ap::real_1d_array df;

    n = n-1;
    df.setbounds(0, n);
    for(i = 0; i <= n; i++)
    {
        df(i) = 0;
    }
    for(m = 1; m <= n; m++)
    {
        for(i = 0; i <= n-m; i++)
        {
            df(i) = ((t-x(i+m))*df(i)+f(i)+(x(i)-t)*df(i+1)-f(i+1))/(x(i)-x(i+m));
            f(i) = ((t-x(i+m))*f(i)+(x(i)-t)*f(i+1))/(x(i)-x(i+m));
        }
    }
    p = f(0);
    dp = df(0);
}
//*********************************************
bool svdsolve(ap::real_2d_array a, int m, int n, ap::real_1d_array& sol)
{
    bool result;
    int nm;
    int minmn;
    int l;
    int k;
    int j;
    int jj;
    int its;
    int i;
    double z;
    double y;
    double x;
    double vscale;
    double s;
    double h;
    double g;
    double f;
    double c;
    double anorm;
    ap::real_1d_array rv1;
    ap::real_1d_array w;
    ap::real_2d_array v;
    bool flag;
    double epsilon;

    rv1.setbounds(1, n);
    w.setbounds(1, n);
    v.setbounds(1, n, 1, n);
    if( m<n )
    {
        minmn = m;
    }
    else
    {
        minmn = n;
    }
    g = 0.0;
    vscale = 0.0;
    anorm = 0.0;
    for(i = 1; i <= n; i++)
    {
        l = i+1;
        rv1(i) = vscale*g;
        g = 0;
        s = 0;
        vscale = 0;
        if( i<=m )
        {
            for(k = i; k <= m; k++)
            {
                vscale = vscale+fabs(a(k,i));
            }
            if( vscale!=0.0 )
            {
                for(k = i; k <= m; k++)
                {
                    a(k,i) = a(k,i)/vscale;
                    s = s+a(k,i)*a(k,i);
                }
                f = a(i,i);
                g = -extsign(sqrt(s), f);
                h = f*g-s;
                a(i,i) = f-g;
                if( i!=n )
                {
                    for(j = l; j <= n; j++)
                    {
                        s = 0.0;
                        for(k = i; k <= m; k++)
                        {
                            s = s+a(k,i)*a(k,j);
                        }
                        f = s/h;
                        for(k = i; k <= m; k++)
                        {
                            a(k,j) = a(k,j)+f*a(k,i);
                        }
                    }
                }
                for(k = i; k <= m; k++)
                {
                    a(k,i) = vscale*a(k,i);
                }
            }
        }
        w(i) = vscale*g;
        g = 0.0;
        s = 0.0;
        vscale = 0.0;
        if( i<=m&&i!=n )
        {
            for(k = l; k <= n; k++)
            {
                vscale = vscale+fabs(a(i,k));
            }
            if( vscale!=0.0 )
            {
                for(k = l; k <= n; k++)
                {
                    a(i,k) = a(i,k)/vscale;
                    s = s+a(i,k)*a(i,k);
                }
                f = a(i,l);
                g = -extsign(sqrt(s), f);
                h = f*g-s;
                a(i,l) = f-g;
                for(k = l; k <= n; k++)
                {
                    rv1(k) = a(i,k)/h;
                }
                if( i!=m )
                {
                    for(j = l; j <= m; j++)
                    {
                        s = 0.0;
                        for(k = l; k <= n; k++)
                        {
                            s = s+a(j,k)*a(i,k);
                        }
                        for(k = l; k <= n; k++)
                        {
                            a(j,k) = a(j,k)+s*rv1(k);
                        }
                    }
                }
                for(k = l; k <= n; k++)
                {
                    a(i,k) = vscale*a(i,k);
                }
            }
        }
        anorm = mymax(anorm, fabs(w(i))+fabs(rv1(i)));
    }
    for(i = n; i >= 1; i--)
    {
        if( i<n )
        {
            if( g!=0.0 )
            {
                for(j = l; j <= n; j++)
                {
                    v(j,i) = a(i,j)/a(i,l)/g;
                }
                for(j = l; j <= n; j++)
                {
                    s = 0.0;
                    for(k = l; k <= n; k++)
                    {
                        s = s+a(i,k)*v(k,j);
                    }
                    for(k = l; k <= n; k++)
                    {
                        v(k,j) = v(k,j)+s*v(k,i);
                    }
                }
            }
            for(j = l; j <= n; j++)
            {
                v(i,j) = 0.0;
                v(j,i) = 0.0;
            }
        }
        v(i,i) = 1.0;
        g = rv1(i);
        l = i;
    }
    for(i = minmn; i >= 1; i--)
    {
        l = i+1;
        g = w(i);
        if( i<n )
        {
            for(j = l; j <= n; j++)
            {
                a(i,j) = 0.0;
            }
        }
        if( g!=0.0 )
        {
            g = 1.0/g;
            if( i!=n )
            {
                for(j = l; j <= n; j++)
                {
                    s = 0.0;
                    for(k = l; k <= m; k++)
                    {
                        s = s+a(k,i)*a(k,j);
                    }
                    f = s/a(i,i)*g;
                    for(k = i; k <= m; k++)
                    {
                        a(k,j) = a(k,j)+f*a(k,i);
                    }
                }
            }
            for(j = i; j <= m; j++)
            {
                a(j,i) = a(j,i)*g;
            }
        }
        else
        {
            for(j = i; j <= m; j++)
            {
                a(j,i) = 0.0;
            }
        }
        a(i,i) = a(i,i)+1.0;
    }
    for(k = n; k >= 1; k--)
    {
        for(its = 1; its <= maxsvditerations; its++)
        {
            flag = true;
            for(l = k; l >= 1; l--)
            {
                nm = l-1;
                if( fabs(rv1(l))+anorm==anorm )
                {
                    flag = false;
                    break;
                }
                if( fabs(w(nm))+anorm==anorm )
                {
                    break;
                }
            }
            if( flag )
            {
                c = 0.0;
                s = 1.0;
                for(i = l; i <= k; i++)
                {
                    f = s*rv1(i);
                    if( fabs(f)+anorm!=anorm )
                    {
                        g = w(i);
                        h = pythag(f, g);
                        w(i) = h;
                        h = 1.0/h;
                        c = g*h;
                        s = -f*h;
                        for(j = 1; j <= m; j++)
                        {
                            y = a(j,nm);
                            z = a(j,i);
                            a(j,nm) = y*c+z*s;
                            a(j,i) = -y*s+z*c;
                        }
                    }
                }
            }
            z = w(k);
            if( l==k )
            {
                if( z<0.0 )
                {
                    w(k) = -z;
                    for(j = 1; j <= n; j++)
                    {
                        v(j,k) = -v(j,k);
                    }
                }
                break;
            }
            x = w(l);
            nm = k-1;
            y = w(nm);
            g = rv1(nm);
            h = rv1(k);
            f = ((y-z)*(y+z)+(g-h)*(g+h))/(2.0*h*y);
            g = pythag(f, 1);
            f = ((x-z)*(x+z)+h*(y/(f+extsign(g, f))-h))/x;
            c = 1.0;
            s = 1.0;
            for(j = l; j <= nm; j++)
            {
                i = j+1;
                g = rv1(i);
                y = w(i);
                h = s*g;
                g = c*g;
                z = pythag(f, h);
                rv1(j) = z;
                c = f/z;
                s = h/z;
                f = x*c+g*s;
                g = -x*s+g*c;
                h = y*s;
                y = y*c;
                for(jj = 1; jj <= n; jj++)
                {
                    x = v(jj,j);
                    z = v(jj,i);
                    v(jj,j) = x*c+z*s;
                    v(jj,i) = -x*s+z*c;
                }
                z = pythag(f, h);
                w(j) = z;
                if( z!=0.0 )
                {
                    z = 1.0/z;
                    c = f*z;
                    s = h*z;
                }
                f = c*g+s*y;
                x = -s*g+c*y;
                for(jj = 1; jj <= m; jj++)
                {
                    y = a(jj,j);
                    z = a(jj,i);
                    a(jj,j) = y*c+z*s;
                    a(jj,i) = -y*s+z*c;
                }
            }
            rv1(l) = 0.0;
            rv1(k) = f;
            w(k) = x;
        }
    }
    epsilon = fabs(w(1));
    for(i = 2; i <= n; i++)
    {
        if( fabs(w(i))>epsilon )
        {
            epsilon = fabs(w(i));
        }
    }
    epsilon = epsilon*n*ap::machineepsilon;
    sol.setbounds(1, n);
    for(i = 1; i <= n; i++)
    {
        sol(i) = 0;
        for(j = 1; j <= m; j++)
        {
            sol(i) = sol(i)+a(j,i)*a(j,n+1);
        }
    }
    result = true;
    for(j = 1; j <= n; j++)
    {
        if( fabs(w(j))>epsilon )
        {
            for(i = 1; i <= n; i++)
            {
                v(i,j) = v(i,j)/w(j);
            }
        }
        else
        {
            result = false;
        }
    }
    for(i = 1; i <= n; i++)
    {
        a(1,i) = 0;
        for(j = 1; j <= n; j++)
        {
            if( fabs(w(j))>epsilon )
            {
                a(1,i) = a(1,i)+v(i,j)*sol(j);
            }
        }
    }
    for(i = 1; i <= n; i++)
    {
        sol(i) = a(1,i);
    }
    return result;
}

 // знак функции **********************************
  double extsign(double a, double b)
{
    double result;

    if( b>=0 )
    {
        result = fabs(a);
    }
    else
    {
        result = -fabs(a);
    }
    return result;
}

  /*************************************************************************
Служебная подпрограмма: вычисление максимума
*************************************************************************/
double mymax(double a, double b)
{
    double result;

    if( a>b )
    {
        result = a;
    }
    else
    {
        result = b;
    }
    return result;
}


/*************************************************************************
Служебная подпрограмма:
вычисление Sqrt(A*A+B*B) безопасным методом, не приводящим к
переполнению или потере точности.
*************************************************************************/
double pythag(double a, double b)
{
    double result;

    if( fabs(a)<fabs(b) )
    {
        result = fabs(b)*sqrt(1+ap::sqr(a/b));
    }
    else
    {
        result = fabs(a)*sqrt(1+ap::sqr(b/a));
    }
    return result;
}

// *******************************
//  построения полинома методом наименьшим квадратов
void buildpolynomialleastsquares(const ap::real_1d_array& x,
     const ap::real_1d_array& y,
     int n,
     int m,
     ap::real_1d_array& c)
{
    int i;
    int j;
    int k;
    double v;
    ap::real_2d_array fmatrix;
    ap::real_2d_array alpha;
    ap::real_1d_array t;

    fmatrix.setbounds(0, n-1, 0, m);
    for(i = 0; i <= n-1; i++)
    {
        for(j = 0; j <= m; j++)
        {
            if( j==0 )
            {
                fmatrix(i,j) = 1;
            }
            else
            {
                fmatrix(i,j) = fmatrix(i,j-1)*x(i);
            }
        }
    }
    alpha.setbounds(1, m+1, 1, m+2);
    for(i = 1; i <= m+1; i++)
    {
        for(j = 1; j <= m+1; j++)
        {
            alpha(i,j) = 0;
            for(k = 1; k <= n; k++)
            {
                alpha(i,j) = alpha(i,j)+fmatrix(k-1,i-1)*fmatrix(k-1,j-1);
            }
        }
    }
    for(i = 1; i <= m+1; i++)
    {
        alpha(i,m+2) = 0;
        for(k = 1; k <= n; k++)
        {
            alpha(i,m+2) = alpha(i,m+2)+y(k-1)*fmatrix(k-1,i-1);
        }
    }
    svdsolve(alpha, m+1, m+1, t);
    c.setbounds(0, m);
    for(i = 1; i <= m+1; i++)
    {
        c(i-1) = t(i);
    }
}
//******************************************************
//интерполяция ньютона
double newtoninterpolate(int n,
     const ap::real_1d_array& x,
     ap::real_1d_array y,
     double t)
{
    double result;
    int i;
    int k;
    int i1;
    double l;
    double s;

    l = y(0);
    s = 1;
    for(i = n; i >= 1; i--)
    {
        i1 = n-i;
        for(k = 0; k <= i-1; k++)
        {
            y(k) = (y(k+1)-y(k))/(x(k+1+i1)-x(k));
        }
        s = s*(t-x(i1));
        l = l+y(0)*s;
    }
    result = l;
    return result;
}

//*****************************************************
//построения сплайна
void spline3buildtable(int n,
     int diffn,
     ap::real_1d_array x,
     ap::real_1d_array y,
     double boundl,
     double boundr,
     ap::real_2d_array& ctbl)
{
    bool c;
    int e;
    int g;
    double tmp;
    int nxm1;
    int i;
    int j;
    double dx;
    double dxj;
    double dyj;
    double dxjp1;
    double dyjp1;
    double dxp;
    double dyp;
    double yppa;
    double yppb;
    double pj;
    double b1;
    double b2;
    double b3;
    double b4;

    n = n-1;
    g = (n+1)/2;
    do
    {
        i = g;
        do
        {
            j = i-g;
            c = true;
            do
            {
                if( x(j)<=x(j+g) )
                {
                    c = false;
                }
                else
                {
                    tmp = x(j);
                    x(j) = x(j+g);
                    x(j+g) = tmp;
                    tmp = y(j);
                    y(j) = y(j+g);
                    y(j+g) = tmp;
                }
                j = j-1;
            }
            while(j>=0&&c);
            i = i+1;
        }
        while(i<=n);
        g = g/2;
    }
    while(g>0);
    ctbl.setbounds(0, 4, 0, n);
    n = n+1;
    if( diffn==1 )
    {
        b1 = 1;
        b2 = double(6)/double(x(1)-x(0))*((y(1)-y(0))/(x(1)-x(0))-boundl);
        b3 = 1;
        b4 = double(6)/double(x(n-1)-x(n-2))*(boundr-(y(n-1)-y(n-2))/(x(n-1)-x(n-2)));
    }
    else
    {
        b1 = 0;
        b2 = 2*boundl;
        b3 = 0;
        b4 = 2*boundr;
    }
    nxm1 = n-1;
    if( n>=2 )
    {
        if( n>2 )
        {
            dxj = x(1)-x(0);
            dyj = y(1)-y(0);
            j = 2;
            while(j<=nxm1)
            {
                dxjp1 = x(j)-x(j-1);
                dyjp1 = y(j)-y(j-1);
                dxp = dxj+dxjp1;
                ctbl(1,j-1) = dxjp1/dxp;
                ctbl(2,j-1) = 1-ctbl(1,j-1);
                ctbl(3,j-1) = 6*(dyjp1/dxjp1-dyj/dxj)/dxp;
                dxj = dxjp1;
                dyj = dyjp1;
                j = j+1;
            }
        }
        ctbl(1,0) = -double(b1)/double(2);
        ctbl(2,0) = double(b2)/double(2);
        if( n!=2 )
        {
            j = 2;
            while(j<=nxm1)
            {
                pj = ctbl(2,j-1)*ctbl(1,j-2)+2;
                ctbl(1,j-1) = -ctbl(1,j-1)/pj;
                ctbl(2,j-1) = (ctbl(3,j-1)-ctbl(2,j-1)*ctbl(2,j-2))/pj;
                j = j+1;
            }
        }
        yppb = (b4-b3*ctbl(2,nxm1-1))/(b3*ctbl(1,nxm1-1)+2);
        i = 1;
        while(i<=nxm1)
        {
            j = n-i;
            yppa = ctbl(1,j-1)*yppb+ctbl(2,j-1);
            dx = x(j)-x(j-1);
            ctbl(3,j-1) = double((yppb-yppa)/dx)/double(6);
            ctbl(2,j-1) = double(yppa)/double(2);
            ctbl(1,j-1) = (y(j)-y(j-1))/dx-(ctbl(2,j-1)+ctbl(3,j-1)*dx)*dx;
            yppb = yppa;
            i = i+1;
        }
        for(i = 1; i <= n; i++)
        {
            ctbl(0,i-1) = y(i-1);
            ctbl(4,i-1) = x(i-1);
        }
    }
}


/*************************************************************************
Вычисление значения сплайна в точке по таблице коэффициентов

Функция Spline3Interpolate по построенной процедурой Spline3BuildTable
таблице коэффициентов вычисляет значение интерполируемой функции в
заданной точке.

Параметры:
    N       - число точек, переданных в процедуру Spline3BuildTable
    C       - таблица коэффициентов, построенная процедурой
              Spline3BuildTable
    X       - точка, в которой ведем расчет
    
Результат:
    значение кубического сплайна, заданного таблицей C, в точке X
*************************************************************************/
double spline3interpolate(int n, const ap::real_2d_array& c, double x)
{
    double result;
    int i;
    int l;
    int half;
    int first;
    int middle;

    n = n-1;
    l = n;
    first = 0;
    while(l>0)
    {
        half = l/2;
        middle = first+half;
        if( c(4,middle)<x )
        {
            first = middle+1;
            l = l-half-1;
        }
        else
        {
            l = half;
        }
    }
    i = first-1;
    if( i<0 )
    {
        i = 0;
    }
    result = c(0,i)+(x-c(4,i))*(c(1,i)+(x-c(4,i))*(c(2,i)+c(3,i)*(x-c(4,i))));
    return result;
    }
//*********************
//определение знака наклона
//*********************
    void datego(double X1,double X2,int& Z)
    {
         if (X2-X1>0){
          Z=1;
          }
          if (X2-X1==0){
          Z=1;
          }
          if(X2-X1<0) {
          Z=0;
          }
    
     }
 /*************************************************************************
Взвешенная аппроксимация кубическими сплайнами по МНК

Входные параметры:
    X   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор абсцисс, в которых известны значения функции.
    Y   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор значений функции.
    W   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор весов, сопоставленных значениям функции.
            Каждое  слагаемое в сумме квадратов отклонений аппроксимации от
            заданных  значений  умножается  на  квадрат сопоставленного ему
            веса.
    A,B -   отрезок, на котором строятся сплайны
    N   -   число точек, N>=1
    M   -   число базовых сплайнов, M>=1. Этот параметр передается в
            функцию Spline3Interpolate в качестве числа точек.

Выходные параметры:
    CTbl    таблица коэффициентов сплайна для использования функцией
            Spline3Interpolate
*************************************************************************/
void buildsplineleastsquares(const ap::real_1d_array& x,
     const ap::real_1d_array& y,
     const ap::real_1d_array& w,
     double a,
     double b,
     int n,
     int m,
     ap::real_2d_array& ctbl)
{
    int i;
    int j;
    int k;
    ap::real_2d_array fmatrix;
    ap::real_2d_array alpha;
    ap::real_1d_array sx;
    ap::real_1d_array sy;
    ap::real_1d_array t;

    fmatrix.setbounds(0, n-1, 0, m-1);
    sx.setbounds(0, m-1);
    sy.setbounds(0, m-1);
    if( a==b )
    {
        a = a-0.5;
        b = b+0.5;
    }
    for(j = 0; j <= m-1; j++)
    {
        sx(j) = a+double((b-a)*j)/double(m-1);
    }
    for(j = 0; j <= m-1; j++)
    {
        for(i = 0; i <= m-1; i++)
        {
            sy(i) = 0;
        }
        sy(j) = 1;
        spline3buildtable(m, 2, sx, sy, 0, 0, ctbl);
        for(i = 0; i <= n-1; i++)
        {
            fmatrix(i,j) = spline3interpolate(m, ctbl, x(i));
        }
    }
    alpha.setbounds(1, m, 1, m+1);
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= m; j++)
        {
            alpha(i,j) = 0;
            for(k = 1; k <= n; k++)
            {
                alpha(i,j) = alpha(i,j)+fmatrix(k-1,i-1)*fmatrix(k-1,j-1)*ap::sqr(w(k-1));
            }
        }
    }
    for(i = 1; i <= m; i++)
    {
        alpha(i,m+1) = 0;
        for(k = 1; k <= n; k++)
        {
            alpha(i,m+1) = alpha(i,m+1)+y(k-1)*fmatrix(k-1,i-1)*ap::sqr(w(k-1));
        }
    }
    svdsolve(alpha, m, m, t);
    for(i = 0; i <= m-1; i++)
    {
        sy(i) = t(i+1);
    }
    spline3buildtable(m, 2, sx, sy, 0, 0, ctbl);
}
 //Поиск экстремума функции
 void TurnOver(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double Precision,
               double &TMAX,
               double &TMIN,
               int N,
               ap::real_1d_array& W,
               double M)
 {
 ap::real_2d_array S;
  S.setbounds(0,4,0,N);
 buildsplineleastsquares(X,Y,W,A,B,N,M,S);
 int N1;
 N1=((B-A)/Precision)+1;
 double K=A;
 double F1,F2;
 ap::real_1d_array fk;
 fk.setbounds(0,N1+1);
  F1=spline3interpolate(M,S,K);
  F2=spline3interpolate(M,S,K+Precision);
  int i=0;
  int f0;
  datego(F1,F2,f0);
  fk(0)=f0;
  while(K<=B){
  i++;
  K=A+Precision*i;
  F1=spline3interpolate(M,S,K);
  F2=spline3interpolate(M,S,K+Precision);
  datego(F1,F2,f0);
  fk(i)=f0;
  if (fk(i-1)!=fk(i)) //определяем наличие экстремума
  {
  // определяем тип экстремума
      if(fk(i-1)==1){
      TMAX=K;}
      if(fk(i-1)==0){
      TMIN=K;}
   } //if
  }//while
 }

 //поиск экстремума функции методом золотого сечения
 //максимум
 void TurnOverGoldMax(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double Precision,
               double &TMAX,
               int N,
               ap::real_1d_array& W,
               double M,
               double a,
               double b)
 {
 ap::real_2d_array S;
  S.setbounds(0,4,0,N);
 buildsplineleastsquares(X,Y,W,A,B,N,M,S);
 double F1a,F1b,F2a,F2b,F1k,F2k,k;
 int f0a,f0b,f0k;
  F1a=spline3interpolate(M,S,a);
  F1b=spline3interpolate(M,S,b);

  F2a=spline3interpolate(M,S,a+0.1);
  F2b=spline3interpolate(M,S,b-0.1);
  datego(F1a,F2a,f0a);
  datego(F1b,F2b,f0b);
  if (f0a==1){
    if (f0b==0){
  while((b-a)>5*Precision){
  k=(a+b)/2;
  F1k=spline3interpolate(M,S,k);
  F2k=spline3interpolate(M,S,k+0.1);
  datego(F1k,F2k,f0k);
  if(f0k==0){b=k;}
  if(f0k==1){a=k;}
   }//while
  TMAX=(a+b)/2;
 }
}
else
{TMAX=0;}

}
//минимум
void TurnOverGoldMin(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double Precision,
               double &TMIN,
               int N,
               ap::real_1d_array& W,
               double M,
               double a,
               double b)
 {
 ap::real_2d_array S;
  S.setbounds(0,4,0,N-1);
 buildsplineleastsquares(X,Y,W,A,B,N,M,S);
 double F1a,F1b,F2a,F2b,F1k,F2k,k;
 int f0a,f0b,f0k;
  F1a=spline3interpolate(M,S,a);
  F1b=spline3interpolate(M,S,b);

  F2a=spline3interpolate(M,S,a+0.1);
  F2b=spline3interpolate(M,S,b-0.1);
  datego(F1a,F2a,f0a);
  datego(F1b,F2b,f0b);
  if (f0a==0){
    if (f0b==1){
  while((b-a)>5*Precision){
  k=(a+b)/2;
  F1k=spline3interpolate(M,S,k);
  F2k=spline3interpolate(M,S,k+0.1);
  datego(F1k,F2k,f0k);
  if(f0k==1){b=k;}
  if(f0k==0){a=k;}
   }//while
  TMIN=(a+b)/2;
 }
}
else
{TMIN=0;}

}
 //поиск максимума функции
void TurnOverMax(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double Precision,
               double &TMAX,
               int N,
               ap::real_1d_array& W,
               double M)

 {
 ap::real_2d_array S;
 S.setbounds(0,4,0,N);
 buildsplineleastsquares(X,Y,W,A,B,N,M,S);
 double Fmax,Tk,Fk;
 int N1;
  TMAX=B;
  Fmax=spline3interpolate(M,S,A);
  N1=(B-A)/Precision;
  for(int I=0;I<N1-1;I++){
  Tk=A+I*Precision;
  Fk=spline3interpolate(M,S,Tk);
  if (Fk>Fmax){Fmax=Fk; TMAX=Tk;}
  }
}
//поиск минимума функции
 void TurnOverMin(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double Precision,
               double &TMIN,
               int N,
               ap::real_1d_array& W,
               double M)

 {
 ap::real_2d_array S;
 S.setbounds(0,4,0,N);
 buildsplineleastsquares(X,Y,W,A,B,N,M,S);
 double Fmin,Tk,Fk;
 int N1;
  TMIN=A;
  Fmin=spline3interpolate(M,S,A);
  N1=(B-A)/Precision;
  for(int I=0;I<N1-1;I++){
  Tk=A+I*Precision;
  Fk=spline3interpolate(M,S,Tk);
  if (Fk<Fmin){Fmin=Fk; TMIN=Tk;}
  }
}
// Нахождение среднего
//******************************************

 double MeanX(double* X,double Nr)
 {
 double Mean,Sum;
 Sum=0;
 for (int i=0;i<Nr;i++){
 Sum=Sum+X[i];
 }
 Mean=Sum/Nr;
 return Mean;
 }
//*************************************
//  расчет СКО
double SigmaX(double* X,double Nr,double M)
 {
 double Sum,Sigma1,Sigma;
 Sum=0;
 for (int i=0;i<Nr;i++){
 Sum=Sum+(X[i]-M)*(X[i]-M);
 }
 Sigma1=Sum/(Nr-1);
 Sigma=sqrt(Sigma1);
 return Sigma;
 }

//**************************************
//нахождение максимума
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
double MaxX(double* X,double Nr)
{
double max;
max=X[0];
for (int i=0;i<Nr;i++){
if (max<X[i]){
max=X[i];
}
}
return max;
}
//+++++++++++++++++++++++++++
//нахождение минимума
//++++++++++++++++++++++++++++++++++++++++++++++++++++
double MinX(double* X,double Nr)
{
double min;
min=X[0];
for (int i=0;i<Nr;i++){
if (min>X[i]){
min=X[i];
}
}
return min;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++
//Случайные числа с нормальным распределением.
  void gennormrnd(int n, ap::real_1d_array& r)
{
    int i;
    double u;
    double v;
    double s;
    double sum;

    if( n%2!=0 )
    {
        n = n+1;
    }
    r.setbounds(1, n);
    i = 1;
    while(i<=n)
    {
        u = (2*ap::randominteger(2)-1)*ap::randomreal();
        v = (2*ap::randominteger(2)-1)*ap::randomreal();
        sum = u*u+v*v;
        if( sum<1&&sum>0 )
        {
            sum = sqrt(-2*log(sum)/sum);
            r(i) = u*sum;
            r(i+1) = v*sum;
            i = i+2;
        }
    }
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//***********************************************************
//новый метод аппроксимации полиномамаи чебушева
 /*************************************************************************
Приведение прямоугольной матрицы к двухдиагональному виду

Алгоритм  приводит   прямоугольную  матрицу  A  к  двухдиагональному  виду
ортогональными преобразованиями P и Q, такими, что A = Q*B*P'

Входные параметры:
    A   -   исходная матрица A. Массив с нумерацией элементов [1..M, 1..N]
    M   -   число строк в матрице
    N   -   число столбцов в матрице
    
Выходные параметры:
    A   -   матрицы Q, B, P в упакованной форме (см. ниже).
    TauQ-   скалярные множители, участвующие в формировании матрицы Q
    TauP-   скалярные множители, участвующие в формировании матрицы Q

В результате работы алгоритма главная диагональ матрицы A и одна из побочных
замещаются бидиагональной матрицей B, а  в  остальных  элементах  хранятся
элементарные  отражения,  формирующие  матрицы  Q  и  P размером MxM и NxN
соответственно.

Если M>=N, то матрица B - верхняя двухдиагональная размером MxN и хранится
в соответствующих элементах матрицы A. Матрица  Q  представляется  в  виде
произведения элементарных  отражений  Q = H(1)*H(2)*...*H(n),  где  H(i) =
= 1 - tau*v*v'.  Здесь  tau  -  скалярная  величина, хранящая в TauQ[i], а
вектор v имеет следующую структуру: v(1:i-1)=0, v(i)=1, v(i+1:m)  хранится
в элементах A(i+1:m,i). Матрица P имеет вид P = G(1)*G(2)*...*G(n-1),  где
G(i) = 1 - tau*u*u'. Tau хранится в TauP[i], u(1:i)=0, u(i+1)=1,  u(i+2:n)
хранится в элементах A(i,i+2:n).

Если M<N, то матрица B - нижняя двухдиагональная размером MxN, и  хранится
в  соответствующих  элементах  матрицы  A.  Q = H(1)*H(2)*...*H(m-1),  где
H(i) = 1 - tau*v*v',  tau  хранится  в  TauQ, v(1:i)=0, v(i+1)=1, v(i+2:m)
хранится в A(i+2:m,i).  P = G(1)*G(2)*...*G(m),  G(i) = 1 - tau*u*u',  tau
хранится в TauP,  u(1:i-1)=0, u(i)=1, u(i+1:n) хранится в A(i,i+1:n).

ПРИМЕР:

m=6, n=5 (m > n):               m=5, n=6 (m < n):

(  d   e   u1  u1  u1 )         (  d   u1  u1  u1  u1  u1 )
(  v1  d   e   u2  u2 )         (  e   d   u2  u2  u2  u2 )
(  v1  v2  d   e   u3 )         (  v1  e   d   u3  u3  u3 )
(  v1  v2  v3  d   e  )         (  v1  v2  e   d   u4  u4 )
(  v1  v2  v3  v4  d  )         (  v1  v2  v3  e   d   u5 )
(  v1  v2  v3  v4  v5 )

здесь vi и ui обозначает векторы, формирующие H(i) и G(i), а d и e -
диагональные и внедиагональные элементы матрицы B.
*************************************************************************/
void tobidiagonal(ap::real_2d_array& a,
     int m,
     int n,
     ap::real_1d_array& tauq,
     ap::real_1d_array& taup)
{
    ap::real_1d_array work;
    ap::real_1d_array t;
    int minmn;
    int maxmn;
    int i;
    double ltau;
    int mmip1;
    int nmi;
    int ip1;
    int nmip1;
    int mmi;

    minmn = ap::minint(m, n);
    maxmn = ap::maxint(m, n);
    work.setbounds(1, maxmn);
    t.setbounds(1, maxmn);
    taup.setbounds(1, minmn);
    tauq.setbounds(1, minmn);
    if( m>=n )
    {
        
        //
        // Reduce to upper bidiagonal form
        //
        for(i = 1; i <= n; i++)
        {
            
            //
            // Generate elementary reflector H(i) to annihilate A(i+1:m,i)
            //
            mmip1 = m-i+1;
            ap::vmove(t.getvector(1, mmip1), a.getcolumn(i, i, m));
            generatereflection(t, mmip1, ltau);
            tauq(i) = ltau;
            ap::vmove(a.getcolumn(i, i, m), t.getvector(1, mmip1));
            t(1) = 1;
            
            //
            // Apply H(i) to A(i:m,i+1:n) from the left
            //
            applyreflectionfromtheleft(a, ltau, t, i, m, i+1, n, work);
            if( i<n )
            {
                
                //
                // Generate elementary reflector G(i) to annihilate
                // A(i,i+2:n)
                //
                nmi = n-i;
                ip1 = i+1;
                ap::vmove(t.getvector(1, nmi), a.getrow(i, ip1, n));
                generatereflection(t, nmi, ltau);
                taup(i) = ltau;
                ap::vmove(a.getrow(i, ip1, n), t.getvector(1, nmi));
                t(1) = 1;
                
                //
                // Apply G(i) to A(i+1:m,i+1:n) from the right
                //
                applyreflectionfromtheright(a, ltau, t, i+1, m, i+1, n, work);
            }
            else
            {
                taup(i) = 0;
            }
        }
    }
    else
    {
        
        //
        // Reduce to lower bidiagonal form
        //
        for(i = 1; i <= m; i++)
        {
            
            //
            // Generate elementary reflector G(i) to annihilate A(i,i+1:n)
            //
            nmip1 = n-i+1;
            ap::vmove(t.getvector(1, nmip1), a.getrow(i, i, n));
            generatereflection(t, nmip1, ltau);
            taup(i) = ltau;
            ap::vmove(a.getrow(i, i, n), t.getvector(1, nmip1));
            t(1) = 1;
            
            //
            // Apply G(i) to A(i+1:m,i:n) from the right
            //
            applyreflectionfromtheright(a, ltau, t, i+1, m, i, n, work);
            if( i<m )
            {
                
                //
                // Generate elementary reflector H(i) to annihilate
                // A(i+2:m,i)
                //
                mmi = m-i;
                ip1 = i+1;
                ap::vmove(t.getvector(1, mmi), a.getcolumn(i, ip1, m));
                generatereflection(t, mmi, ltau);
                tauq(i) = ltau;
                ap::vmove(a.getcolumn(i, ip1, m), t.getvector(1, mmi));
                t(1) = 1;
                
                //
                // Apply H(i) to A(i+1:m,i+1:n) from the left
                //
                applyreflectionfromtheleft(a, ltau, t, i+1, m, i+1, n, work);
            }
            else
            {
                tauq(i) = 0;
            }
        }
    }
}


/*************************************************************************
Частичная "распаковка" матрицы Q, приводящей матрицу  A к двухдиагональной
форме.

Входные параметры:
    QP      -   матрицы Q и P в упакованной форме.
                Результат работы подпрограммы ToBidiagonal.
    M       -   число строк в матрице A
    N       -   число столбцов в матрице A
    TAUQ    -   скалярные множители, формирующие матрицу Q.
                Результат работы подпрограммы ToBidiagonal.
    QColumns-   требуемое число столбцов матрицы Q. M >= QColumns >= 0

Выходные параметры:
    Q       -   QColumns первых столбцов матрицы Q.
                Массив с нумерацией элементов [1..M, 1..QColumns]
                Если QColumns=0, то массив не изменяется.

  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void unpackqfrombidiagonal(const ap::real_2d_array& qp,
     int m,
     int n,
     const ap::real_1d_array& tauq,
     int qcolumns,
     ap::real_2d_array& q)
{
    int i;
    int j;
    int ip1;
    ap::real_1d_array v;
    ap::real_1d_array work;
    int vm;

    ap::ap_error::make_assertion(qcolumns<=m);
    if( m==0||n==0||qcolumns==0 )
    {
        return;
    }
    
    //
    // init
    //
    q.setbounds(1, m, 1, qcolumns);
    v.setbounds(1, m);
    work.setbounds(1, qcolumns);
    
    //
    // prepare Q
    //
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= qcolumns; j++)
        {
            if( i==j )
            {
                q(i,j) = 1;
            }
            else
            {
                q(i,j) = 0;
            }
        }
    }
    if( m>=n )
    {
        for(i = ap::minint(n, qcolumns); i >= 1; i--)
        {
            vm = m-i+1;
            ap::vmove(v.getvector(1, vm), qp.getcolumn(i, i, m));
            v(1) = 1;
            applyreflectionfromtheleft(q, tauq(i), v, i, m, 1, qcolumns, work);
        }
    }
    else
    {
        for(i = ap::minint(m-1, qcolumns-1); i >= 1; i--)
        {
            vm = m-i;
            ip1 = i+1;
            ap::vmove(v.getvector(1, vm), qp.getcolumn(i, ip1, m));
            v(1) = 1;
            applyreflectionfromtheleft(q, tauq(i), v, i+1, m, 1, qcolumns, work);
        }
    }
}


/*************************************************************************
Умножение на матрицу Q, приводящую матрицу A к двухдиагональной форме.

Алгоритм позволяет осуществить по выбору умножение справа или слева, на
матрицу Q или на матрицу Q'.

Входные параметры:
    QP          -   матрицы Q и P в упакованной форме.
                    Результат работы подпрограммы ToBidiagonal.
    M           -   число строк в матрице A
    N           -   число столбцов в матрице A
    TAUQ        -   скалярные множители, формирующие матрицу Q.
                    Результат работы подпрограммы ToBidiagonal.
    Z           -   умножаемая матрица
                    массив с нумерацией элементов [1..ZRows,1..ZColumns]
    ZRows       -   число строк в матрице Z. Если FromTheRight=False, то
                    ZRows=M, иначе может быть любым.
    ZColumns    -   число столбцов в матрице Z. Если FromTheRight=True, то
                    ZColumns=M, иначе может быть любым.
    FromTheRight-   умножение справа или слева
    DoTranspose -   умножение на Q или на Q'

Выходные параметры:
    Z       -   Произведение Z и Q
                Массив с нумерацией элементов [1..ZRows,1..ZColumns]
                Если ZRows=0 или ZColumns=0, то массив не изменяется.

  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void multiplybyqfrombidiagonal(const ap::real_2d_array& qp,
     int m,
     int n,
     const ap::real_1d_array& tauq,
     ap::real_2d_array& z,
     int zrows,
     int zcolumns,
     bool fromtheright,
     bool dotranspose)
{
    int i;
    int ip1;
    int i1;
    int i2;
    int istep;
    ap::real_1d_array v;
    ap::real_1d_array work;
    int vm;
    int mx;

    if( m<=0||n<=0||zrows<=0||zcolumns<=0 )
    {
        return;
    }
    ap::ap_error::make_assertion(fromtheright&&zcolumns==m||!fromtheright&&zrows==m);
    
    //
    // init
    //
    mx = ap::maxint(m, n);
    mx = ap::maxint(mx, zrows);
    mx = ap::maxint(mx, zcolumns);
    v.setbounds(1, mx);
    work.setbounds(1, mx);
    if( m>=n )
    {
        
        //
        // setup
        //
        if( fromtheright )
        {
            i1 = 1;
            i2 = n;
            istep = +1;
        }
        else
        {
            i1 = n;
            i2 = 1;
            istep = -1;
        }
        if( dotranspose )
        {
            i = i1;
            i1 = i2;
            i2 = i;
            istep = -istep;
        }
        
        //
        // Process
        //
        i = i1;
        do
        {
            vm = m-i+1;
            ap::vmove(v.getvector(1, vm), qp.getcolumn(i, i, m));
            v(1) = 1;
            if( fromtheright )
            {
                applyreflectionfromtheright(z, tauq(i), v, 1, zrows, i, m, work);
            }
            else
            {
                applyreflectionfromtheleft(z, tauq(i), v, i, m, 1, zcolumns, work);
            }
            i = i+istep;
        }
        while(i!=i2+istep);
    }
    else
    {
        
        //
        // setup
        //
        if( fromtheright )
        {
            i1 = 1;
            i2 = m-1;
            istep = +1;
        }
        else
        {
            i1 = m-1;
            i2 = 1;
            istep = -1;
        }
        if( dotranspose )
        {
            i = i1;
            i1 = i2;
            i2 = i;
            istep = -istep;
        }
        
        //
        // Process
        //
        if( m-1>0 )
        {
            i = i1;
            do
            {
                vm = m-i;
                ip1 = i+1;
                ap::vmove(v.getvector(1, vm), qp.getcolumn(i, ip1, m));
                v(1) = 1;
                if( fromtheright )
                {
                    applyreflectionfromtheright(z, tauq(i), v, 1, zrows, i+1, m, work);
                }
                else
                {
                    applyreflectionfromtheleft(z, tauq(i), v, i+1, m, 1, zcolumns, work);
                }
                i = i+istep;
            }
            while(i!=i2+istep);
        }
    }
}


/*************************************************************************
Частичная "распаковка" матрицы P, приводящей матрицу  A к двухдиагональной
форме. Подпрограмма выводит транспонированную матрицу P.

Входные параметры:
    QP      -   матрицы Q и P в упакованной форме.
                Результат работы подпрограммы ToBidiagonal.
    M       -   число строк в матрице A
    N       -   число столбцов в матрице A
    TAUP    -   скалярные множители, формирующие матрицу P.
                Результат работы подпрограммы ToBidiagonal.
    PTRows  -   требуемое число строк матрицы P^T. N >= PTRows >= 0

Выходные параметры:
    PT      -   PTRows первых столбцов матрицы PT.
                Массив с нумерацией элементов [1..PTRows, 1..N]
                Если PTRows=0, то массив не изменяется.


  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void unpackptfrombidiagonal(const ap::real_2d_array& qp,
     int m,
     int n,
     const ap::real_1d_array& taup,
     int ptrows,
     ap::real_2d_array& pt)
{
    int i;
    int j;
    int ip1;
    ap::real_1d_array v;
    ap::real_1d_array work;
    int vm;

    ap::ap_error::make_assertion(ptrows<=n);
    if( m==0||n==0||ptrows==0 )
    {
        return;
    }
    
    //
    // init
    //
    pt.setbounds(1, ptrows, 1, n);
    v.setbounds(1, n);
    work.setbounds(1, ptrows);
    
    //
    // prepare PT
    //
    for(i = 1; i <= ptrows; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if( i==j )
            {
                pt(i,j) = 1;
            }
            else
            {
                pt(i,j) = 0;
            }
        }
    }
    if( m>=n )
    {
        for(i = ap::minint(n-1, ptrows-1); i >= 1; i--)
        {
            vm = n-i;
            ip1 = i+1;
            ap::vmove(v.getvector(1, vm), qp.getrow(i, ip1, n));
            v(1) = 1;
            applyreflectionfromtheright(pt, taup(i), v, 1, ptrows, i+1, n, work);
        }
    }
    else
    {
        for(i = ap::minint(m, ptrows); i >= 1; i--)
        {
            vm = n-i+1;
            ap::vmove(v.getvector(1, vm), qp.getrow(i, i, n));
            v(1) = 1;
            applyreflectionfromtheright(pt, taup(i), v, 1, ptrows, i, n, work);
        }
    }
}


/*************************************************************************
Умножение на матрицу P, приводящую матрицу A к двухдиагональной форме.

Алгоритм позволяет осуществить по выбору умножение справа или слева, на
матрицу P или на матрицу P'

Входные параметры:
    QP          -   матрицы Q и P в упакованной форме.
                    Результат работы подпрограммы ToBidiagonal.
    M           -   число строк в матрице A
    N           -   число столбцов в матрице A
    TAUP        -   скалярные множители, формирующие матрицу P.
                    Результат работы подпрограммы ToBidiagonal.
    Z           -   умножаемая матрица
                    массив с нумерацией элементов [1..ZRows,1..ZColumns]
    ZRows       -   число строк в матрице Z. Если FromTheRight=False, то
                    ZRows=N, иначе может быть любым.
    ZColumns    -   число столбцов в матрице Z. Если FromTheRight=True, то
                    ZColumns=N, иначе может быть любым.
    FromTheRight-   умножение справа или слева
    DoTranspose -   умножение на P или на P'

Выходные параметры:
    Z       -   Произведение Z и P
                Массив с нумерацией элементов [1..ZRows,1..ZColumns]
                Если ZRows=0 или ZColumns=0, то массив не изменяется.

  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void multiplybypfrombidiagonal(const ap::real_2d_array& qp,
     int m,
     int n,
     const ap::real_1d_array& taup,
     ap::real_2d_array& z,
     int zrows,
     int zcolumns,
     bool fromtheright,
     bool dotranspose)
{
    int i;
    int ip1;
    ap::real_1d_array v;
    ap::real_1d_array work;
    int vm;
    int mx;
    int i1;
    int i2;
    int istep;

    if( m<=0||n<=0||zrows<=0||zcolumns<=0 )
    {
        return;
    }
    ap::ap_error::make_assertion(fromtheright&&zcolumns==n||!fromtheright&&zrows==n);
    
    //
    // init
    //
    mx = ap::maxint(m, n);
    mx = ap::maxint(mx, zrows);
    mx = ap::maxint(mx, zcolumns);
    v.setbounds(1, mx);
    work.setbounds(1, mx);
    v.setbounds(1, mx);
    work.setbounds(1, mx);
    if( m>=n )
    {
        
        //
        // setup
        //
        if( fromtheright )
        {
            i1 = n-1;
            i2 = 1;
            istep = -1;
        }
        else
        {
            i1 = 1;
            i2 = n-1;
            istep = +1;
        }
        if( !dotranspose )
        {
            i = i1;
            i1 = i2;
            i2 = i;
            istep = -istep;
        }
        
        //
        // Process
        //
        if( n-1>0 )
        {
            i = i1;
            do
            {
                vm = n-i;
                ip1 = i+1;
                ap::vmove(v.getvector(1, vm), qp.getrow(i, ip1, n));
                v(1) = 1;
                if( fromtheright )
                {
                    applyreflectionfromtheright(z, taup(i), v, 1, zrows, i+1, n, work);
                }
                else
                {
                    applyreflectionfromtheleft(z, taup(i), v, i+1, n, 1, zcolumns, work);
                }
                i = i+istep;
            }
            while(i!=i2+istep);
        }
    }
    else
    {
        
        //
        // setup
        //
        if( fromtheright )
        {
            i1 = m;
            i2 = 1;
            istep = -1;
        }
        else
        {
            i1 = 1;
            i2 = m;
            istep = +1;
        }
        if( !dotranspose )
        {
            i = i1;
            i1 = i2;
            i2 = i;
            istep = -istep;
        }
        
        //
        // Process
        //
        i = i1;
        do
        {
            vm = n-i+1;
            ap::vmove(v.getvector(1, vm), qp.getrow(i, i, n));
            v(1) = 1;
            if( fromtheright )
            {
                applyreflectionfromtheright(z, taup(i), v, 1, zrows, i, n, work);
            }
            else
            {
                applyreflectionfromtheleft(z, taup(i), v, i, n, 1, zcolumns, work);
            }
            i = i+istep;
        }
        while(i!=i2+istep);
    }
}


/*************************************************************************
"Распаковка" главной и побочной диагоналей двухдиагонального разложения
матрицы A.

Входные параметры:
    B       -   Результат работы подпрограммы ToBidiagonal.
    M       -   число строк в матрице B
    N       -   число столбцов в матрице B

Выходные параметры:
    IsUpper -   если матрица верхняя двухдиагональная, то True,
                иначе - False.
    D       -   главная диагональ.
                Массив с нумерацией элементов [1..Min(M,N)]
    E       -   побочная диагональ (верхняя или нижняя, в зависимости от
                параметра IsUpper).
                Массив с нумерацией элементов [1..Min(M,N)],   последний
                элемент не используется.

  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void unpackdiagonalsfrombidiagonal(const ap::real_2d_array& b,
     int m,
     int n,
     bool& isupper,
     ap::real_1d_array& d,
     ap::real_1d_array& e)
{
    int i;

    isupper = m>=n;
    if( m==0||n==0 )
    {
        return;
    }
    if( isupper )
    {
        d.setbounds(1, n);
        e.setbounds(1, n);
        for(i = 1; i <= n-1; i++)
        {
            d(i) = b(i,i);
            e(i) = b(i,i+1);
        }
        d(n) = b(n,n);
    }
    else
    {
        d.setbounds(1, m);
        e.setbounds(1, m);
        for(i = 1; i <= m-1; i++)
        {
            d(i) = b(i,i);
            e(i) = b(i+1,i);
        }
        d(m) = b(m,m);
    }
}
//***************************************************
//+++++++++++++++++++++++++++++++++++++++++++++++++++
 /*************************************************************************
Генерация элементарного преобразования отражения

Подпрограмма генерирует элементарное отражение H порядка N, такое, что для
заданного X выполняется следующее равенство:

    ( X(1) )   ( Beta )
H * (  ..  ) = (  0   )
    ( X(n) )   (  0   )
    
где
              ( V(1) )
H = 1 - Tau * (  ..  ) * ( V(1), ..., V(n) )
              ( V(n) )

причем первая компонента вектора V равна единице.
              
Входные параметры:
    X       -   вектор. Массив с нумерацией элементов [1..N]
    N       -   порядок отражения
    
Выходные параметры:
    X       -   компоненты с 2 по N замещается вектором V. Первая
                компонента замещается параметром Beta.
    Tau     -   скалярная величина Tau. Равно 0 (если вектор X - нулевой),
                в противном случае 1 <= Tau <= 2.

Данная подпрограмма является модификацией подпрограмм DLARFG из библиотеки
LAPACK. Функциональность аналогичная, но отсутствует  корректная обработка
случаев, когда промежуточные результаты вычислений  переполняют  разрядную
сетку.

ИЗМЕНЕНИЯ И ИСПРАВЛЕНИЯ:
    24.12.2005 замена sign(Alpha) на аналогичный sign в фортране код

  -- LAPACK auxiliary routine (version 3.0) --
     Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,
     Courant Institute, Argonne National Lab, and Rice University
     September 30, 1994
*************************************************************************/
void generatereflection(ap::real_1d_array& x, int n, double& tau)
{
    int j;
    double alpha;
    double xnorm;
    double v;
    double beta;
    double mx;

    
    //
    // Executable Statements ..
    //
    if( n<=1 )
    {
        tau = 0;
        return;
    }
    
    //
    // XNORM = DNRM2( N-1, X, INCX )
    //
    alpha = x(1);
    mx = 0;
    for(j = 2; j <= n; j++)
    {
        mx = ap::maxreal(fabs(x(j)), mx);
    }
    xnorm = 0;
    if( mx!=0 )
    {
        for(j = 2; j <= n; j++)
        {
            xnorm = xnorm+ap::sqr(x(j)/mx);
        }
        xnorm = sqrt(xnorm)*mx;
    }
    if( xnorm==0 )
    {
        
        //
        // H  =  I
        //
        tau = 0;
        return;
    }
    
    //
    // general case
    //
    mx = ap::maxreal(fabs(alpha), fabs(xnorm));
    beta = -mx*sqrt(ap::sqr(alpha/mx)+ap::sqr(xnorm/mx));
    if( alpha<0 )
    {
        beta = -beta;
    }
    tau = (beta-alpha)/beta;
    v = 1/(alpha-beta);
    ap::vmul(x.getvector(2, n), v);
    x(1) = beta;
}


/*************************************************************************
Применение элементарного отражения к прямоугольной матрице размером MxN

Алгоритм умножает слева матрицу на элементарное преобразование  отражения,
заданное    столбцом   V   и   скалярной   величиной   Tau  (см.  описание
GenerateReflection). Преобразованию подвергается не вся матрица, а  только
её часть (строки от M1 до M2, столбцы от N1 до N2). Элементы, не  попавшие
в указанную подматрицу, остаются без изменений.

Входные параметры:
    C   -   матрица,  к  которой  применяется  преобразование.
    Tau -   скаляр, задающий преобразование.
    V   -   столбец, задающий преобразование. Массив с нумерацией элементов
            [1..M2-M1+1]
    M1,M2   -   диапазон строк, затрагиваемых преобразованием
    N1,N2   -   диапазон столбцов, затрагиваемых преобразованием
    WORK    -   рабочий массив с нумерацией элементов от N1 до N2

Выходные параметры:
    C   -   результат умножения входной матрицы C на матрицу преобразования,
            заданного Tau и V. Если N1>N2 или M1>M2, то C не меняется.

  -- LAPACK auxiliary routine (version 3.0) --
     Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,
     Courant Institute, Argonne National Lab, and Rice University
     September 30, 1994
*************************************************************************/
void applyreflectionfromtheleft(ap::real_2d_array& c,
     double tau,
     const ap::real_1d_array& v,
     int m1,
     int m2,
     int n1,
     int n2,
     ap::real_1d_array& work)
{
    double t;
    int i;
    int vm;

    if( tau==0||n1>n2||m1>m2 )
    {
        return;
    }
    
    //
    // w := C' * v
    //
    vm = m2-m1+1;
    for(i = n1; i <= n2; i++)
    {
        work(i) = 0;
    }
    for(i = m1; i <= m2; i++)
    {
        t = v(i+1-m1);
        ap::vadd(work.getvector(n1, n2), c.getrow(i, n1, n2), t);
    }
    
    //
    // C := C - tau * v * w'
    //
    for(i = m1; i <= m2; i++)
    {
        t = v(i-m1+1)*tau;
        ap::vsub(c.getrow(i, n1, n2), work.getvector(n1, n2), t);
    }
}


/*************************************************************************
Применение элементарного отражения к прямоугольной матрице размером MxN

Алгоритм умножает справа матрицу на элементарное преобразование отражения,
заданное    столбцом   V   и   скалярной   величиной   Tau  (см.  описание
GenerateReflection). Преобразованию подвергается не вся матрица, а  только
её часть (строки от M1 до M2, столбцы от N1 до N2). Элементы, не  попавшие
в указанную подматрицу, остаются без изменений.

Входные параметры:
    C   -   матрица,  к  которой  применяется  преобразование.
    Tau -   скаляр, задающий преобразование.
    V   -   столбец, задающий преобразование. Массив с нумерацией элементов
            [1..N2-N1+1]
    M1,M2   -   диапазон строк, затрагиваемых преобразованием
    N1,N2   -   диапазон столбцов, затрагиваемых преобразованием
    WORK    -   рабочий массив с нумерацией элементов от M1 до M2

Выходные параметры:
    C   -   результат умножения входной матрицы C на матрицу преобразования,
            заданного Tau и V. Если N1>N2 или M1>M2, то C не меняется.

  -- LAPACK auxiliary routine (version 3.0) --
     Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,
     Courant Institute, Argonne National Lab, and Rice University
     September 30, 1994
*************************************************************************/
void applyreflectionfromtheright(ap::real_2d_array& c,
     double tau,
     const ap::real_1d_array& v,
     int m1,
     int m2,
     int n1,
     int n2,
     ap::real_1d_array& work)
{
    double t;
    int i;
    int vm;

    if( tau==0||n1>n2||m1>m2 )
    {
        return;
    }
    
    //
    // w := C * v
    //
    vm = n2-n1+1;
    for(i = m1; i <= m2; i++)
    {
        t = ap::vdotproduct(c.getrow(i, n1, n2), v.getvector(1, vm));
        work(i) = t;
    }
    
    //
    // C := C - w * v'
    //
    for(i = m1; i <= m2; i++)
    {
        t = work(i)*tau;
        ap::vsub(c.getrow(i, n1, n2), v.getvector(1, vm), t);
    }
}

/*************************************************************************
Сингулярное разложение двухдиагональной матрицы (расширенный алгоритм)

Алгоритм  осуществляет  сингулярное  разложение двухдиагональной матрицы B
(верхней или нижней), представляя её в виде B = Q * S * P^T, где Q и  P  -
ортогональные матрицы, S - диагональная с неотрицательными  элементами  на
главной диагонали, расположенными в порядке убывания.

Алгоритм находит сингулярные значения. Дополнительно алгоритм может вычислять
матрицы Q и P (точнее, не сами матрицы, а их произведения на заданные матрицы
U и VT - U*Q и (P^T)*VT)). Разумеется, матрицы U и VT  могут  быть  какими
угодно,  в  том  числе  и  единичными.  Также  алгоритм  может   вычислять
произведение Q'*C (это произведение вычисляется более эффективно, чем U*Q,
потому что при этом проводятся операции со строками,  а  не  со  столбцами
матрицы).

Особенностью алгоритма  является   возможность  находить  ВСЕ  сингулярные
значения,  в  том  числе  и  сколь  угодно близкие к нолю, с относительной
точностью, близкой к машинной. Если параметр  IsFractionalAccuracyRequired
равен True, то все сингулярные значения находятся с высокой  относительной
точностью, близкой к машинной. Если параметр равен False, то с  точностью,
близкой к машинной, находятся лишь самое большое сингулярное значение,   а
абсолютная погрешность остальных  сингулярных  значений  равна  абсолютной
погрешности самого большого сингулярного значения.

Входные параметры:
    D   -       главная диагональ матрицы B.
                Массив с нумерацией элементов [1..N]
    E   -       наддиагональ (или поддиагональ) матрицы B.
                Массив с нумерацией элементов [1..N-1]
    N   -       размер матрицы B
    IsUpper-    True, если матрица верхняя двухдиагональная.
    IsFractionalAccuracyRequired-
                с какой точностью надо искать сингулярные значения
    U   -       матрица, которая будет  умножена на матрицу  Q.  Массив  с
                нумерацией элементов [1..NRU, 1..N].  Матрица  может  быть
                больше, в таком случае  лишь  указанная  подматрица  будет
                умножена на матрицу Q.
    NRU -       число строк в матрице U
    C   -       матрица, которая будет  умножена на матрицу Q'.  Массив  с
                нумерацией элементов [1..N, 1..NCC].  Матрица  может  быть
                больше, в таком случае  лишь  указанная  подматрица  будет
                умножена на матрицу Q'.
    NCC -       число столбцов в матрице C
    VT  -       матрица, которая будет  умножена на матрицу  P^T. Массив с
                нумерацией элементов [1..N, 1..NCVT]. Матрица  может  быть
                больше, в таком случае  лишь  указанная  подматрица  будет
                умножена на матрицу P^T.
    NCVT-       число столбцов в матрице VT.

Выходные параметры:
    D   -       сингулярные значения матрицы B, упорядоченные по убыванию.
    U   -       если NRU>0,  содержит матрицу U*Q
    VT  -       если NCVT>0, содержит матрицу (P^T)*VT
    C   -       если NCC>0,  содержит матрицу Q'*C

Результат:
    True, если алгоритм сошелся
    False, если алгоритм не сошелся (редчайший случай)

Дополнительная информация:
    тип сходимости контролируется внутренним параметром TOL. Если параметр
    больше   ноля,  то  сингулярные  значения  находятся  с  относительной
    погрешностью TOL. Если TOL<0, сингулярные значения находятся с
    абсолютной погрешностью ABS(TOL)*norm(B).
    По умолчанию |TOL| находится в интервале от 10*Epsilon до 100*Epsilon,
    где Epsilon - машинная точность. Не рекомендуется делать  TOL  меньше,
    чем 10*Epsilon, поскольку это сушественно  замедлит  алгоритм,  но  не
    обязательно приведет к дальнейшему уменьшению погрешности.

  -- LAPACK routine (version 3.0) --
     Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,
     Courant Institute, Argonne National Lab, and Rice University
     October 31, 1999
*************************************************************************/
bool bidiagonalsvddecomposition(ap::real_1d_array& d,
     ap::real_1d_array e,
     int n,
     bool isupper,
     bool isfractionalaccuracyrequired,
     ap::real_2d_array& u,
     int nru,
     ap::real_2d_array& c,
     int ncc,
     ap::real_2d_array& vt,
     int ncvt)
{
    bool result;
    int i;
    int idir;
    int isub;
    int iter;
    int j;
    int ll;
    int lll;
    int m;
    int maxit;
    int oldll;
    int oldm;
    double abse;
    double abss;
    double cosl;
    double cosr;
    double cs;
    double eps;
    double f;
    double g;
    double h;
    double mu;
    double oldcs;
    double oldsn;
    double r;
    double shift;
    double sigmn;
    double sigmx;
    double sinl;
    double sinr;
    double sll;
    double smax;
    double smin;
    double sminl;
    double sminlo;
    double sminoa;
    double sn;
    double thresh;
    double tol;
    double tolmul;
    double unfl;
    ap::real_1d_array work0;
    ap::real_1d_array work1;
    ap::real_1d_array work2;
    ap::real_1d_array work3;
    int maxitr;
    bool matrixsplitflag;
    bool iterflag;
    ap::real_1d_array utemp;
    ap::real_1d_array vttemp;
    ap::real_1d_array ctemp;
    ap::real_1d_array etemp;
    bool rightside;
    bool fwddir;
    double tmp;
    int mm1;

    result = true;
    if( n==0 )
    {
        return result;
    }
    if( n==1 )
    {
        if( d(1)<0 )
        {
            d(1) = -d(1);
            if( ncvt>0 )
            {
                ap::vmul(vt.getrow(1, 1, ncvt), -1);
            }
        }
        return result;
    }
    
    //
    // init
    //
    work0.setbounds(1, n-1);
    work1.setbounds(1, n-1);
    work2.setbounds(1, n-1);
    work3.setbounds(1, n-1);
    utemp.setbounds(1, ap::maxint(nru, 1));
    vttemp.setbounds(1, ap::maxint(ncvt, 1));
    ctemp.setbounds(1, ap::maxint(ncc, 1));
    maxitr = 6;
    rightside = true;
    fwddir = true;
    
    //
    // resize E from N-1 to N
    //
    etemp.setbounds(1, n);
    for(i = 1; i <= n-1; i++)
    {
        etemp(i) = e(i);
    }
    e.setbounds(1, n);
    for(i = 1; i <= n-1; i++)
    {
        e(i) = etemp(i);
    }
    e(n) = 0;
    idir = 0;
    
    //
    // Get machine constants
    //
    eps = ap::machineepsilon;
    unfl = ap::minrealnumber;
    
    //
    // If matrix lower bidiagonal, rotate to be upper bidiagonal
    // by applying Givens rotations on the left
    //
    if( !isupper )
    {
        for(i = 1; i <= n-1; i++)
        {
            generaterotation(d(i), e(i), cs, sn, r);
            d(i) = r;
            e(i) = sn*d(i+1);
            d(i+1) = cs*d(i+1);
            work0(i) = cs;
            work1(i) = sn;
        }
        
        //
        // Update singular vectors if desired
        //
        if( nru>0 )
        {
            applyrotationsfromtheright(fwddir, 1, nru, 1, n, work0, work1, u, utemp);
        }
        if( ncc>0 )
        {
            applyrotationsfromtheleft(fwddir, 1, n, 1, ncc, work0, work1, c, ctemp);
        }
    }
    
    //
    // Compute singular values to relative accuracy TOL
    // (By setting TOL to be negative, algorithm will compute
    // singular values to absolute accuracy ABS(TOL)*norm(input matrix))
    //
    tolmul = ap::maxreal(double(10), ap::minreal(double(100), pow(eps, -0.125)));
    tol = tolmul*eps;
    if( !isfractionalaccuracyrequired )
    {
        tol = -tol;
    }
    
    //
    // Compute approximate maximum, minimum singular values
    //
    smax = 0;
    for(i = 1; i <= n; i++)
    {
        smax = ap::maxreal(smax, fabs(d(i)));
    }
    for(i = 1; i <= n-1; i++)
    {
        smax = ap::maxreal(smax, fabs(e(i)));
    }
    sminl = 0;
    if( tol>=0 )
    {
        
        //
        // Relative accuracy desired
        //
        sminoa = fabs(d(1));
        if( sminoa!=0 )
        {
            mu = sminoa;
            for(i = 2; i <= n; i++)
            {
                mu = fabs(d(i))*(mu/(mu+fabs(e(i-1))));
                sminoa = ap::minreal(sminoa, mu);
                if( sminoa==0 )
                {
                    break;
                }
            }
        }
        sminoa = sminoa/sqrt(double(n));
        thresh = ap::maxreal(tol*sminoa, maxitr*n*n*unfl);
    }
    else
    {
        
        //
        // Absolute accuracy desired
        //
        thresh = ap::maxreal(fabs(tol)*smax, maxitr*n*n*unfl);
    }
    
    //
    // Prepare for main iteration loop for the singular values
    // (MAXIT is the maximum number of passes through the inner
    // loop permitted before nonconvergence signalled.)
    //
    maxit = maxitr*n*n;
    iter = 0;
    oldll = -1;
    oldm = -1;
    
    //
    // M points to last element of unconverged part of matrix
    //
    m = n;
    
    //
    // Begin main iteration loop
    //
    while(true)
    {
        
        //
        // Check for convergence or exceeding iteration count
        //
        if( m<=1 )
        {
            break;
        }
        if( iter>maxit )
        {
            result = false;
            return result;
        }
        
        //
        // Find diagonal block of matrix to work on
        //
        if( tol<0&&fabs(d(m))<=thresh )
        {
            d(m) = 0;
        }
        smax = fabs(d(m));
        smin = smax;
        matrixsplitflag = false;
        for(lll = 1; lll <= m-1; lll++)
        {
            ll = m-lll;
            abss = fabs(d(ll));
            abse = fabs(e(ll));
            if( tol<0&&abss<=thresh )
            {
                d(ll) = 0;
            }
            if( abse<=thresh )
            {
                matrixsplitflag = true;
                break;
            }
            smin = ap::minreal(smin, abss);
            smax = ap::maxreal(smax, ap::maxreal(abss, abse));
        }
        if( !matrixsplitflag )
        {
            ll = 0;
        }
        else
        {
            
            //
            // Matrix splits since E(LL) = 0
            //
            e(ll) = 0;
            if( ll==m-1 )
            {
                
                //
                // Convergence of bottom singular value, return to top of loop
                //
                m = m-1;
                continue;
            }
        }
        ll = ll+1;
        
        //
        // E(LL) through E(M-1) are nonzero, E(LL-1) is zero
        //
        if( ll==m-1 )
        {
            
            //
            // 2 by 2 block, handle separately
            //
            svdv2x2(d(m-1), e(m-1), d(m), sigmn, sigmx, sinr, cosr, sinl, cosl);
            d(m-1) = sigmx;
            e(m-1) = 0;
            d(m) = sigmn;
            
            //
            // Compute singular vectors, if desired
            //
            if( ncvt>0 )
            {
                mm1 = m-1;
                ap::vmove(vttemp.getvector(1, ncvt), vt.getrow(mm1, 1, ncvt), cosr);
                ap::vadd(vttemp.getvector(1, ncvt), vt.getrow(m, 1, ncvt), sinr);
                ap::vmul(vt.getrow(m, 1, ncvt), cosr);
                ap::vsub(vt.getrow(m, 1, ncvt), vt.getrow(mm1, 1, ncvt), sinr);
                ap::vmove(vt.getrow(mm1, 1, ncvt), vttemp.getvector(1, ncvt));
            }
            if( nru>0 )
            {
                mm1 = m-1;
                ap::vmove(utemp.getvector(1, nru), u.getcolumn(mm1, 1, nru), cosl);
                ap::vadd(utemp.getvector(1, nru), u.getcolumn(m, 1, nru), sinl);
                ap::vmul(u.getcolumn(m, 1, nru), cosl);
                ap::vsub(u.getcolumn(m, 1, nru), u.getcolumn(mm1, 1, nru), sinl);
                ap::vmove(u.getcolumn(mm1, 1, nru), utemp.getvector(1, nru));
            }
            if( ncc>0 )
            {
                mm1 = m-1;
                ap::vmove(ctemp.getvector(1, ncc), c.getrow(mm1, 1, ncc), cosl);
                ap::vadd(ctemp.getvector(1, ncc), c.getrow(m, 1, ncc), sinl);
                ap::vmul(c.getrow(m, 1, ncc), cosl);
                ap::vsub(c.getrow(m, 1, ncc), c.getrow(mm1, 1, ncc), sinl);
                ap::vmove(c.getrow(mm1, 1, ncc), ctemp.getvector(1, ncc));
            }
            m = m-2;
            continue;
        }
        
        //
        // If working on new submatrix, choose shift direction
        // (from larger end diagonal element towards smaller)
        //
        if( ll>oldm||m<oldll )
        {
            if( fabs(d(ll))>=fabs(d(m)) )
            {
                
                //
                // Chase bulge from top (big end) to bottom (small end)
                //
                idir = 1;
            }
            else
            {
                
                //
                // Chase bulge from bottom (big end) to top (small end)
                //
                idir = 2;
            }
        }
        
        //
        // Apply convergence tests
        //
        if( idir==1 )
        {
            
            //
            // Run convergence test in forward direction
            // First apply standard test to bottom of matrix
            //
            if( fabs(e(m-1))<=fabs(tol)*fabs(d(m))||tol<0&&fabs(e(m-1))<=thresh )
            {
                e(m-1) = 0;
                continue;
            }
            if( tol>=0 )
            {
                
                //
                // If relative accuracy desired,
                // apply convergence criterion forward
                //
                mu = fabs(d(ll));
                sminl = mu;
                iterflag = false;
                for(lll = ll; lll <= m-1; lll++)
                {
                    if( fabs(e(lll))<=tol*mu )
                    {
                        e(lll) = 0;
                        iterflag = true;
                        break;
                    }
                    sminlo = sminl;
                    mu = fabs(d(lll+1))*(mu/(mu+fabs(e(lll))));
                    sminl = ap::minreal(sminl, mu);
                }
                if( iterflag )
                {
                    continue;
                }
            }
        }
        else
        {
            
            //
            // Run convergence test in backward direction
            // First apply standard test to top of matrix
            //
            if( fabs(e(ll))<=fabs(tol)*fabs(d(ll))||tol<0&&fabs(e(ll))<=thresh )
            {
                e(ll) = 0;
                continue;
            }
            if( tol>=0 )
            {
                
                //
                // If relative accuracy desired,
                // apply convergence criterion backward
                //
                mu = fabs(d(m));
                sminl = mu;
                iterflag = false;
                for(lll = m-1; lll >= ll; lll--)
                {
                    if( fabs(e(lll))<=tol*mu )
                    {
                        e(lll) = 0;
                        iterflag = true;
                        break;
                    }
                    sminlo = sminl;
                    mu = fabs(d(lll))*(mu/(mu+fabs(e(lll))));
                    sminl = ap::minreal(sminl, mu);
                }
                if( iterflag )
                {
                    continue;
                }
            }
        }
        oldll = ll;
        oldm = m;
        
        //
        // Compute shift.  First, test if shifting would ruin relative
        // accuracy, and if so set the shift to zero.
        //
        if( tol>=0&&n*tol*(sminl/smax)<=ap::maxreal(eps, 0.01*tol) )
        {
            
            //
            // Use a zero shift to avoid loss of relative accuracy
            //
            shift = 0;
        }
        else
        {
            
            //
            // Compute the shift from 2-by-2 block at end of matrix
            //
            if( idir==1 )
            {
                sll = fabs(d(ll));
                svd2x2(d(m-1), e(m-1), d(m), shift, r);
            }
            else
            {
                sll = fabs(d(m));
                svd2x2(d(ll), e(ll), d(ll+1), shift, r);
            }
            
            //
            // Test if shift negligible, and if so set to zero
            //
            if( sll>0 )
            {
                if( ap::sqr(shift/sll)<eps )
                {
                    shift = 0;
                }
            }
        }
        
        //
        // Increment iteration count
        //
        iter = iter+m-ll;
        
        //
        // If SHIFT = 0, do simplified QR iteration
        //
        if( shift==0 )
        {
            if( idir==1 )
            {
                
                //
                // Chase bulge from top to bottom
                // Save cosines and sines for later singular vector updates
                //
                cs = 1;
                oldcs = 1;
                for(i = ll; i <= m-1; i++)
                {
                    generaterotation(d(i)*cs, e(i), cs, sn, r);
                    if( i>ll )
                    {
                        e(i-1) = oldsn*r;
                    }
                    generaterotation(oldcs*r, d(i+1)*sn, oldcs, oldsn, tmp);
                    d(i) = tmp;
                    work0(i-ll+1) = cs;
                    work1(i-ll+1) = sn;
                    work2(i-ll+1) = oldcs;
                    work3(i-ll+1) = oldsn;
                }
                h = d(m)*cs;
                d(m) = h*oldcs;
                e(m-1) = h*oldsn;
                
                //
                // Update singular vectors
                //
                if( ncvt>0 )
                {
                    applyrotationsfromtheleft(fwddir, ll, m, 1, ncvt, work0, work1, vt, vttemp);
                }
                if( nru>0 )
                {
                    applyrotationsfromtheright(fwddir, 1, nru, ll, m, work2, work3, u, utemp);
                }
                if( ncc>0 )
                {
                    applyrotationsfromtheleft(fwddir, ll, m, 1, ncc, work2, work3, c, ctemp);
                }
                
                //
                // Test convergence
                //
                if( fabs(e(m-1))<=thresh )
                {
                    e(m-1) = 0;
                }
            }
            else
            {
                
                //
                // Chase bulge from bottom to top
                // Save cosines and sines for later singular vector updates
                //
                cs = 1;
                oldcs = 1;
                for(i = m; i >= ll+1; i--)
                {
                    generaterotation(d(i)*cs, e(i-1), cs, sn, r);
                    if( i<m )
                    {
                        e(i) = oldsn*r;
                    }
                    generaterotation(oldcs*r, d(i-1)*sn, oldcs, oldsn, tmp);
                    d(i) = tmp;
                    work0(i-ll) = cs;
                    work1(i-ll) = -sn;
                    work2(i-ll) = oldcs;
                    work3(i-ll) = -oldsn;
                }
                h = d(ll)*cs;
                d(ll) = h*oldcs;
                e(ll) = h*oldsn;
                
                //
                // Update singular vectors
                //
                if( ncvt>0 )
                {
                    applyrotationsfromtheleft(!fwddir, ll, m, 1, ncvt, work2, work3, vt, vttemp);
                }
                if( nru>0 )
                {
                    applyrotationsfromtheright(!fwddir, 1, nru, ll, m, work0, work1, u, utemp);
                }
                if( ncc>0 )
                {
                    applyrotationsfromtheleft(!fwddir, ll, m, 1, ncc, work0, work1, c, ctemp);
                }
                
                //
                // Test convergence
                //
                if( fabs(e(ll))<=thresh )
                {
                    e(ll) = 0;
                }
            }
        }
        else
        {
            
            //
            // Use nonzero shift
            //
            if( idir==1 )
            {
                
                //
                // Chase bulge from top to bottom
                // Save cosines and sines for later singular vector updates
                //
                f = (fabs(d(ll))-shift)*(extsignbdsqr(double(1), d(ll))+shift/d(ll));
                g = e(ll);
                for(i = ll; i <= m-1; i++)
                {
                    generaterotation(f, g, cosr, sinr, r);
                    if( i>ll )
                    {
                        e(i-1) = r;
                    }
                    f = cosr*d(i)+sinr*e(i);
                    e(i) = cosr*e(i)-sinr*d(i);
                    g = sinr*d(i+1);
                    d(i+1) = cosr*d(i+1);
                    generaterotation(f, g, cosl, sinl, r);
                    d(i) = r;
                    f = cosl*e(i)+sinl*d(i+1);
                    d(i+1) = cosl*d(i+1)-sinl*e(i);
                    if( i<m-1 )
                    {
                        g = sinl*e(i+1);
                        e(i+1) = cosl*e(i+1);
                    }
                    work0(i-ll+1) = cosr;
                    work1(i-ll+1) = sinr;
                    work2(i-ll+1) = cosl;
                    work3(i-ll+1) = sinl;
                }
                e(m-1) = f;
                
                //
                // Update singular vectors
                //
                if( ncvt>0 )
                {
                    applyrotationsfromtheleft(fwddir, ll, m, 1, ncvt, work0, work1, vt, vttemp);
                }
                if( nru>0 )
                {
                    applyrotationsfromtheright(fwddir, 1, nru, ll, m, work2, work3, u, utemp);
                }
                if( ncc>0 )
                {
                    applyrotationsfromtheleft(fwddir, ll, m, 1, ncc, work2, work3, c, ctemp);
                }
                
                //
                // Test convergence
                //
                if( fabs(e(m-1))<=thresh )
                {
                    e(m-1) = 0;
                }
            }
            else
            {
                
                //
                // Chase bulge from bottom to top
                // Save cosines and sines for later singular vector updates
                //
                f = (fabs(d(m))-shift)*(extsignbdsqr(double(1), d(m))+shift/d(m));
                g = e(m-1);
                for(i = m; i >= ll+1; i--)
                {
                    generaterotation(f, g, cosr, sinr, r);
                    if( i<m )
                    {
                        e(i) = r;
                    }
                    f = cosr*d(i)+sinr*e(i-1);
                    e(i-1) = cosr*e(i-1)-sinr*d(i);
                    g = sinr*d(i-1);
                    d(i-1) = cosr*d(i-1);
                    generaterotation(f, g, cosl, sinl, r);
                    d(i) = r;
                    f = cosl*e(i-1)+sinl*d(i-1);
                    d(i-1) = cosl*d(i-1)-sinl*e(i-1);
                    if( i>ll+1 )
                    {
                        g = sinl*e(i-2);
                        e(i-2) = cosl*e(i-2);
                    }
                    work0(i-ll) = cosr;
                    work1(i-ll) = -sinr;
                    work2(i-ll) = cosl;
                    work3(i-ll) = -sinl;
                }
                e(ll) = f;
                
                //
                // Test convergence
                //
                if( fabs(e(ll))<=thresh )
                {
                    e(ll) = 0;
                }
                
                //
                // Update singular vectors if desired
                //
                if( ncvt>0 )
                {
                    applyrotationsfromtheleft(!fwddir, ll, m, 1, ncvt, work2, work3, vt, vttemp);
                }
                if( nru>0 )
                {
                    applyrotationsfromtheright(!fwddir, 1, nru, ll, m, work0, work1, u, utemp);
                }
                if( ncc>0 )
                {
                    applyrotationsfromtheleft(!fwddir, ll, m, 1, ncc, work0, work1, c, ctemp);
                }
            }
        }
        
        //
        // QR iteration finished, go back and check convergence
        //
        continue;
    }
    
    //
    // All singular values converged, so make them positive
    //
    for(i = 1; i <= n; i++)
    {
        if( d(i)<0 )
        {
            d(i) = -d(i);
            
            //
            // Change sign of singular vectors, if desired
            //
            if( ncvt>0 )
            {
                ap::vmul(vt.getrow(i, 1, ncvt), -1);
            }
        }
    }
    
    //
    // Sort the singular values into decreasing order (insertion sort on
    // singular values, but only one transposition per singular vector)
    //
    for(i = 1; i <= n-1; i++)
    {
        
        //
        // Scan for smallest D(I)
        //
        isub = 1;
        smin = d(1);
        for(j = 2; j <= n+1-i; j++)
        {
            if( d(j)<=smin )
            {
                isub = j;
                smin = d(j);
            }
        }
        if( isub!=n+1-i )
        {
            
            //
            // Swap singular values and vectors
            //
            d(isub) = d(n+1-i);
            d(n+1-i) = smin;
            if( ncvt>0 )
            {
                j = n+1-i;
                ap::vmove(vttemp.getvector(1, ncvt), vt.getrow(isub, 1, ncvt));
                ap::vmove(vt.getrow(isub, 1, ncvt), vt.getrow(j, 1, ncvt));
                ap::vmove(vt.getrow(j, 1, ncvt), vttemp.getvector(1, ncvt));
            }
            if( nru>0 )
            {
                j = n+1-i;
                ap::vmove(utemp.getvector(1, nru), u.getcolumn(isub, 1, nru));
                ap::vmove(u.getcolumn(isub, 1, nru), u.getcolumn(j, 1, nru));
                ap::vmove(u.getcolumn(j, 1, nru), utemp.getvector(1, nru));
            }
            if( ncc>0 )
            {
                j = n+1-i;
                ap::vmove(ctemp.getvector(1, ncc), c.getrow(isub, 1, ncc));
                ap::vmove(c.getrow(isub, 1, ncc), c.getrow(j, 1, ncc));
                ap::vmove(c.getrow(j, 1, ncc), ctemp.getvector(1, ncc));
            }
        }
    }
    return result;
}


/*************************************************************************
Передача знака. Служебная подпрограмма.
*************************************************************************/
double extsignbdsqr(double a, double b)
{
    double result;

    if( b>=0 )
    {
        result = fabs(a);
    }
    else
    {
        result = -fabs(a);
    }
    return result;
}


/*************************************************************************
Svd2X2  computes the singular values of the 2-by-2 matrix
   [  F   G  ]
   [  0   H  ].
On return, SSMIN is the smaller singular value and SSMAX is the
larger singular value.

  -- LAPACK auxiliary routine (version 3.0) --
     Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,
     Courant Institute, Argonne National Lab, and Rice University
     September 30, 1994
*************************************************************************/
void svd2x2(double f, double g, double h, double& ssmin, double& ssmax)
{
    double aas;
    double at;
    double au;
    double c;
    double fa;
    double fhmn;
    double fhmx;
    double ga;
    double ha;

    fa = fabs(f);
    ga = fabs(g);
    ha = fabs(h);
    fhmn = ap::minreal(fa, ha);
    fhmx = ap::maxreal(fa, ha);
    if( fhmn==0 )
    {
        ssmin = 0;
        if( fhmx==0 )
        {
            ssmax = ga;
        }
        else
        {
            ssmax = ap::maxreal(fhmx, ga)*sqrt(1+ap::sqr(ap::minreal(fhmx, ga)/ap::maxreal(fhmx, ga)));
        }
    }
    else
    {
        if( ga<fhmx )
        {
            aas = 1+fhmn/fhmx;
            at = (fhmx-fhmn)/fhmx;
            au = ap::sqr(ga/fhmx);
            c = 2/(sqrt(aas*aas+au)+sqrt(at*at+au));
            ssmin = fhmn*c;
            ssmax = fhmx/c;
        }
        else
        {
            au = fhmx/ga;
            if( au==0 )
            {
                
                //
                // Avoid possible harmful underflow if exponent range
                // asymmetric (true SSMIN may not underflow even if
                // AU underflows)
                //
                ssmin = fhmn*fhmx/ga;
                ssmax = ga;
            }
            else
            {
                aas = 1+fhmn/fhmx;
                at = (fhmx-fhmn)/fhmx;
                c = 1/(sqrt(1+ap::sqr(aas*au))+sqrt(1+ap::sqr(at*au)));
                ssmin = fhmn*c*au;
                ssmin = ssmin+ssmin;
                ssmax = ga/(c+c);
            }
        }
    }
}


/*************************************************************************
SvdV2X2 computes the singular value decomposition of a 2-by-2
triangular matrix
   [  F   G  ]
   [  0   H  ].
On return, abs(SSMAX) is the larger singular value, abs(SSMIN) is the
smaller singular value, and (CSL,SNL) and (CSR,SNR) are the left and
right singular vectors for abs(SSMAX), giving the decomposition

   [ CSL  SNL ] [  F   G  ] [ CSR -SNR ]  =  [ SSMAX   0   ]
   [-SNL  CSL ] [  0   H  ] [ SNR  CSR ]     [  0    SSMIN ].
*************************************************************************/
void svdv2x2(double f,
     double g,
     double h,
     double& ssmin,
     double& ssmax,
     double& snr,
     double& csr,
     double& snl,
     double& csl)
{
    bool gasmal;
    bool swp;
    int pmax;
    double a;
    double clt;
    double crt;
    double d;
    double fa;
    double ft;
    double ga;
    double gt;
    double ha;
    double ht;
    double l;
    double m;
    double mm;
    double r;
    double s;
    double slt;
    double srt;
    double t;
    double temp;
    double tsign;
    double tt;
    double v;

    ft = f;
    fa = fabs(ft);
    ht = h;
    ha = fabs(h);
    
    //
    // PMAX points to the maximum absolute element of matrix
    //  PMAX = 1 if F largest in absolute values
    //  PMAX = 2 if G largest in absolute values
    //  PMAX = 3 if H largest in absolute values
    //
    pmax = 1;
    swp = ha>fa;
    if( swp )
    {
        
        //
        // Now FA .ge. HA
        //
        pmax = 3;
        temp = ft;
        ft = ht;
        ht = temp;
        temp = fa;
        fa = ha;
        ha = temp;
    }
    gt = g;
    ga = fabs(gt);
    if( ga==0 )
    {
        
        //
        // Diagonal matrix
        //
        ssmin = ha;
        ssmax = fa;
        clt = 1;
        crt = 1;
        slt = 0;
        srt = 0;
    }
    else
    {
        gasmal = true;
        if( ga>fa )
        {
            pmax = 2;
            if( fa/ga<ap::machineepsilon )
            {
                
                //
                // Case of very large GA
                //
                gasmal = false;
                ssmax = ga;
                if( ha>1 )
                {
                    v = ga/ha;
                    ssmin = fa/v;
                }
                else
                {
                    v = fa/ga;
                    ssmin = v*ha;
                }
                clt = 1;
                slt = ht/gt;
                srt = 1;
                crt = ft/gt;
            }
        }
        if( gasmal )
        {
            
            //
            // Normal case
            //
            d = fa-ha;
            if( d==fa )
            {
                l = 1;
            }
            else
            {
                l = d/fa;
            }
            m = gt/ft;
            t = 2-l;
            mm = m*m;
            tt = t*t;
            s = sqrt(tt+mm);
            if( l==0 )
            {
                r = fabs(m);
            }
            else
            {
                r = sqrt(l*l+mm);
            }
            a = 0.5*(s+r);
            ssmin = ha/a;
            ssmax = fa*a;
            if( mm==0 )
            {
                
                //
                // Note that M is very tiny
                //
                if( l==0 )
                {
                    t = extsignbdsqr(double(2), ft)*extsignbdsqr(double(1), gt);
                }
                else
                {
                    t = gt/extsignbdsqr(d, ft)+m/t;
                }
            }
            else
            {
                t = (m/(s+t)+m/(r+l))*(1+a);
            }
            l = sqrt(t*t+4);
            crt = 2/l;
            srt = t/l;
            clt = (crt+srt*m)/a;
            v = ht/ft;
            slt = v*srt/a;
        }
    }
    if( swp )
    {
        csl = srt;
        snl = crt;
        csr = slt;
        snr = clt;
    }
    else
    {
        csl = clt;
        snl = slt;
        csr = crt;
        snr = srt;
    }
    
    //
    // Correct signs of SSMAX and SSMIN
    //
    if( pmax==1 )
    {
        tsign = extsignbdsqr(double(1), csr)*extsignbdsqr(double(1), csl)*extsignbdsqr(double(1), f);
    }
    if( pmax==2 )
    {
        tsign = extsignbdsqr(double(1), snr)*extsignbdsqr(double(1), csl)*extsignbdsqr(double(1), g);
    }
    if( pmax==3 )
    {
        tsign = extsignbdsqr(double(1), snr)*extsignbdsqr(double(1), snl)*extsignbdsqr(double(1), h);
    }
    ssmax = extsignbdsqr(ssmax, tsign);
    ssmin = extsignbdsqr(ssmin, tsign*extsignbdsqr(double(1), f)*extsignbdsqr(double(1), h));
}
/*************************************************************************
Применение последовательности элементарных вращений к матрице

Алгоритм  умножает  матрицу слева   на  последовательность  преобразований
вращения, заданную массивами C и S. В зависимости от  параметра  IsForward
вращению подвергаются последовательно либо 1 и 2, 3 и 4 и т.д. строки (если
IsForward=True), либо N и N-1-ая, N-2 и N-3 и т.д. строки.

Преобразованию подвергается не вся матрица а только её часть (строки от M1
до M2, столбцы от N1 до N2). Элементы, не попавшие в указанную подматрицу,
остаются без изменений.

Входные параметры:
    IsForward   -   последовательность применения вращений
    M1,M2       -   преобразованию подвергаются строки от M1 до M2
    N1,N2       -   преобразованию подвергаются столбцы от N1 до N2
    C,S         -   коэффициенты преобразования.
                    Массив с нумерацией элементов [1..M2-M1]
    A           -   обрабатываемая матрица
    WORK        -   рабочий массив с нумерацией элементов [N1..N2]

Выходные параметры
    A           -   преобразованная матрица

Служебная подпрограмма
*************************************************************************/
void applyrotationsfromtheleft(bool isforward,
     int m1,
     int m2,
     int n1,
     int n2,
     const ap::real_1d_array& c,
     const ap::real_1d_array& s,
     ap::real_2d_array& a,
     ap::real_1d_array& work)
{
    int j;
    int jp1;
    double ctemp;
    double stemp;
    double temp;

    if( m1>m2||n1>n2 )
    {
        return;
    }
    
    //
    // Form  P * A
    //
    if( isforward )
    {
        if( n1!=n2 )
        {
            
            //
            // Common case: N1<>N2
            //
            for(j = m1; j <= m2-1; j++)
            {
                ctemp = c(j-m1+1);
                stemp = s(j-m1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    jp1 = j+1;
                    ap::vmove(work.getvector(n1, n2), a.getrow(jp1, n1, n2), ctemp);
                    ap::vsub(work.getvector(n1, n2), a.getrow(j, n1, n2), stemp);
                    ap::vmul(a.getrow(j, n1, n2), ctemp);
                    ap::vadd(a.getrow(j, n1, n2), a.getrow(jp1, n1, n2), stemp);
                    ap::vmove(a.getrow(jp1, n1, n2), work.getvector(n1, n2));
                }
            }
        }
        else
        {
            
            //
            // Special case: N1=N2
            //
            for(j = m1; j <= m2-1; j++)
            {
                ctemp = c(j-m1+1);
                stemp = s(j-m1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    temp = a(j+1,n1);
                    a(j+1,n1) = ctemp*temp-stemp*a(j,n1);
                    a(j,n1) = stemp*temp+ctemp*a(j,n1);
                }
            }
        }
    }
    else
    {
        if( n1!=n2 )
        {
            
            //
            // Common case: N1<>N2
            //
            for(j = m2-1; j >= m1; j--)
            {
                ctemp = c(j-m1+1);
                stemp = s(j-m1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    jp1 = j+1;
                    ap::vmove(work.getvector(n1, n2), a.getrow(jp1, n1, n2), ctemp);
                    ap::vsub(work.getvector(n1, n2), a.getrow(j, n1, n2), stemp);
                    ap::vmul(a.getrow(j, n1, n2), ctemp);
                    ap::vadd(a.getrow(j, n1, n2), a.getrow(jp1, n1, n2), stemp);
                    ap::vmove(a.getrow(jp1, n1, n2), work.getvector(n1, n2));
                }
            }
        }
        else
        {
            
            //
            // Special case: N1=N2
            //
            for(j = m2-1; j >= m1; j--)
            {
                ctemp = c(j-m1+1);
                stemp = s(j-m1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    temp = a(j+1,n1);
                    a(j+1,n1) = ctemp*temp-stemp*a(j,n1);
                    a(j,n1) = stemp*temp+ctemp*a(j,n1);
                }
            }
        }
    }
}


/*************************************************************************
Применение последовательности элементарных вращений к матрице

Алгоритм  умножает  матрицу справа   на  последовательность  преобразований
вращения, заданную массивами C и S. В зависимости от  параметра   IsForward
вращению подвергаются последовательно либо 1 и 2,  3  и  4  и т.д.  столбцы
(если IsForward=True), либо N-ый и N-1-ый, N-2-ой и N-3-ий и т.д. столбцы.

Преобразованию подвергается не вся матрица а только её часть (строки от M1
до M2, столбцы от N1 до N2). Элементы, не попавшие в указанную подматрицу,
остаются без изменений.

Входные параметры:
    IsForward   -   последовательность применения вращений
    M1,M2       -   преобразованию подвергаются строки от M1 до M2
    N1,N2       -   преобразованию подвергаются столбцы от N1 до N2
    C,S         -   коэффициенты преобразования.
                    Массив с нумерацией элементов [1..N2-N1]
    A           -   обрабатываемая матрица
    WORK        -   рабочий массив с нумерацией элементов [M1..M2]

Выходные параметры
    A           -   преобразованная матрица

Служебная подпрограмма
*************************************************************************/
void applyrotationsfromtheright(bool isforward,
     int m1,
     int m2,
     int n1,
     int n2,
     const ap::real_1d_array& c,
     const ap::real_1d_array& s,
     ap::real_2d_array& a,
     ap::real_1d_array& work)
{
    int j;
    int jp1;
    double ctemp;
    double stemp;
    double temp;

    
    //
    // Form A * P'
    //
    if( isforward )
    {
        if( m1!=m2 )
        {
            
            //
            // Common case: M1<>M2
            //
            for(j = n1; j <= n2-1; j++)
            {
                ctemp = c(j-n1+1);
                stemp = s(j-n1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    jp1 = j+1;
                    ap::vmove(work.getvector(m1, m2), a.getcolumn(jp1, m1, m2), ctemp);
                    ap::vsub(work.getvector(m1, m2), a.getcolumn(j, m1, m2), stemp);
                    ap::vmul(a.getcolumn(j, m1, m2), ctemp);
                    ap::vadd(a.getcolumn(j, m1, m2), a.getcolumn(jp1, m1, m2), stemp);
                    ap::vmove(a.getcolumn(jp1, m1, m2), work.getvector(m1, m2));
                }
            }
        }
        else
        {
            
            //
            // Special case: M1=M2
            //
            for(j = n1; j <= n2-1; j++)
            {
                ctemp = c(j-n1+1);
                stemp = s(j-n1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    temp = a(m1,j+1);
                    a(m1,j+1) = ctemp*temp-stemp*a(m1,j);
                    a(m1,j) = stemp*temp+ctemp*a(m1,j);
                }
            }
        }
    }
    else
    {
        if( m1!=m2 )
        {
            
            //
            // Common case: M1<>M2
            //
            for(j = n2-1; j >= n1; j--)
            {
                ctemp = c(j-n1+1);
                stemp = s(j-n1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    jp1 = j+1;
                    ap::vmove(work.getvector(m1, m2), a.getcolumn(jp1, m1, m2), ctemp);
                    ap::vsub(work.getvector(m1, m2), a.getcolumn(j, m1, m2), stemp);
                    ap::vmul(a.getcolumn(j, m1, m2), ctemp);
                    ap::vadd(a.getcolumn(j, m1, m2), a.getcolumn(jp1, m1, m2), stemp);
                    ap::vmove(a.getcolumn(jp1, m1, m2), work.getvector(m1, m2));
                }
            }
        }
        else
        {
            
            //
            // Special case: M1=M2
            //
            for(j = n2-1; j >= n1; j--)
            {
                ctemp = c(j-n1+1);
                stemp = s(j-n1+1);
                if( ctemp!=1||stemp!=0 )
                {
                    temp = a(m1,j+1);
                    a(m1,j+1) = ctemp*temp-stemp*a(m1,j);
                    a(m1,j) = stemp*temp+ctemp*a(m1,j);
                }
            }
        }
    }
}


/*************************************************************************
Подпрограмма генерирует элементарное вращение, такое, что

[  CS  SN  ]  .  [ F ]  =  [ R ]
[ -SN  CS  ]     [ G ]     [ 0 ]

CS**2 + SN**2 = 1
*************************************************************************/
void generaterotation(double f, double g, double& cs, double& sn, double& r)
{
    double f1;
    double g1;

    if( g==0 )
    {
        cs = 1;
        sn = 0;
        r = f;
    }
    else
    {
        if( f==0 )
        {
            cs = 0;
            sn = 1;
            r = g;
        }
        else
        {
            f1 = f;
            g1 = g;
            r = sqrt(ap::sqr(f1)+ap::sqr(g1));
            cs = f1/r;
            sn = g1/r;
            if( fabs(f)>fabs(g)&&cs<0 )
            {
                cs = -cs;
                sn = -sn;
                r = -r;
            }
        }
    }
}
/*************************************************************************
LQ-разложение прямоугольной матрицы размером M x N

Входные параметры:
    A   -   матрица A. Нумерация элементов: [1..M, 1..N]
    M   -   число строк в матрице A
    N   -   число столбцов в матрице A

Выходные параметры:
    A   -   матрицы L и Q в компактной форме (см. ниже)
    Tau -   массив скалярных множителей, участвующих в формировании
            матрицы Q. Нумерация элементов [1.. Min(M,N)]

Матрица A представляется, как A = LQ, где Q ортогональная матрица размером
M x M, а R  нижнетреугольная  (или  нижнетрапецоидальная) матрица размером
M x N.

После завершения работы подпрограммы на главной диагонали матрицы A и ниже
располагаются элементы матрицы L. В массиве Tau и над  главной  диагональю
матрицы A располагаются элементы, формирующие матрицу Q, следующим способом:

Матрица Q представляется, как произведение элементарных отражений

Q = H(k)*H(k-1)*...*H(2)*H(1),

где k = min(m,n), а каждое H(i) имеет вид

H(i) = 1 - tau * v * (v^T)

где tau скалярная величина, хранящаяся в Tau[I], а v - вещественный вектор
у которого v(1:i-1)=0, v(i)=1, v(i+1:n) хранится в элементах A(i,i+1:n).

  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void lqdecomposition(ap::real_2d_array& a,
     int m,
     int n,
     ap::real_1d_array& tau)
{
    ap::real_1d_array work;
    ap::real_1d_array t;
    int i;
    int k;
    int nmip1;
    int minmn;
    int maxmn;
    double tmp;

    minmn = ap::minint(m, n);
    maxmn = ap::maxint(m, n);
    work.setbounds(1, m);
    t.setbounds(1, n);
    tau.setbounds(1, minmn);

    //
    // Test the input arguments
    //
    k = ap::minint(m, n);
    for(i = 1; i <= k; i++)
    {
        
        //
        // Generate elementary reflector H(i) to annihilate A(i,i+1:n)
        //
        nmip1 = n-i+1;
        ap::vmove(t.getvector(1, nmip1), a.getrow(i, i, n));
        generatereflection(t, nmip1, tmp);
        tau(i) = tmp;
        ap::vmove(a.getrow(i, i, n), t.getvector(1, nmip1));
        t(1) = 1;
        if( i<n )
        {
            
            //
            // Apply H(i) to A(i+1:m,i:n) from the right
            //
            applyreflectionfromtheright(a, tau(i), t, i+1, m, i, n, work);
        }
    }
}


/*************************************************************************
Частичная "распаковка" матрицы Q из LQ-разложения матрицы A.

Входные параметры:
    LQ      -   матрицы L и Q в упакованной форме.
                Результат работы LQDecomposition.
    M       -   число строк в оригинальной матрице A. M>=0
    N       -   число столбцов в оригинальной матрице A. N>=0
    Tau     -   скалярные множители, формирующие Q.
                Результат работы LQDecomposition.
    QRows   -   требуемое число строк матрицы Q. N>=QRows>=0.

Выходные параметры:
    Q       -   первые QRows строк матрицы Q. Массив с нумерацией
                элементов [1..QRows, 1..N]. Если QRows=0, то массив
                не изменяется.

  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void unpackqfromlq(const ap::real_2d_array& lq,
     int m,
     int n,
     const ap::real_1d_array& tau,
     int qrows,
     ap::real_2d_array& q)
{
    int i;
    int j;
    int k;
    int minmn;
    ap::real_1d_array v;
    ap::real_1d_array work;
    int vm;

    ap::ap_error::make_assertion(qrows<=n);
    if( m==0||n==0||qrows==0 )
    {
        return;
    }
    
    //
    // init
    //
    minmn = ap::minint(m, n);
    k = ap::minint(minmn, qrows);
    q.setbounds(1, qrows, 1, n);
    v.setbounds(1, n);
    work.setbounds(1, qrows);
    for(i = 1; i <= qrows; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if( i==j )
            {
                q(i,j) = 1;
            }
            else
            {
                q(i,j) = 0;
            }
        }
    }
    
    //
    // unpack Q
    //
    for(i = k; i >= 1; i--)
    {
        
        //
        // Apply H(i)
        //
        vm = n-i+1;
        ap::vmove(v.getvector(1, vm), lq.getrow(i, i, n));
        v(1) = 1;
        applyreflectionfromtheright(q, tau(i), v, 1, qrows, i, n, work);
    }
}


/*************************************************************************
LQ-разложение прямоугольной матрицы размера M x N

Использует  LQDecomposition.   По  функциональности  отличается  тем,  что
выводит  матрицы  L  и  Q не в компактной форме, а в виде отдельных матриц
общего вида. Соответственно, матрица  L  "распаковывается",  дополняясь  в
нужных местах нулевыми элементами, а матрица Q строится  как  произведение
составляющих её элементарных отражений.

  -- ALGLIB --
     Copyright 2005 by Bochkanov Sergey
*************************************************************************/
void lqdecompositionunpacked(ap::real_2d_array a,
     int m,
     int n,
     ap::real_2d_array& l,
     ap::real_2d_array& q)
{
    int i;
    int j;
    ap::real_1d_array tau;

    if( n<=0 )
    {
        return;
    }
    q.setbounds(1, n, 1, n);
    l.setbounds(1, m, 1, n);
    
    //
    // LQDecomposition
    //
    lqdecomposition(a, m, n, tau);
    
    //
    // L
    //
    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if( j>i )
            {
                l(i,j) = 0;
            }
            else
            {
                l(i,j) = a(i,j);
            }
        }
    }
    
    //
    // Q
    //
    unpackqfromlq(a, m, n, tau, n, q);
}

/*************************************************************************
Аппроксимация полиномом по МНК

Подпрограмма вычисляет коэффициенты  полинома,  аппроксимирующего  по  МНК
указанную функцию. Настоятельно рекомендуется использовать эту  программу,
только если необходимо получение коэффициентов аппроксимирующего полинома.
Если просто требуется построить  полиномиальную  аппроксимацию,  то  лучше
использовать  подпрограмму   BuildChebyshevLeastSquares   в   сочетании  с
подпрограммой  CalculateChebyshevLeastSquares.   Результат   аппроксимации
полиномами Чебышева эквивалентен результату, полученному с  использованием
обычных полиномов той же степени, но точность при этом заметно выше.

Входные параметры:
    X   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор абсцисс, в которых известны значения функции.
    Y   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор значений функции.
    N   -   число точек
            N>=1
    M   -   степень требуемого полинома
            M>=0

Выходные параметры:
    C   -   коэффициенты  аппроксимирующего  полинома. Массив вещественных
            чисел с нумерацией элементов от 0 до M.
            C[I] - коэффициент при X^I.

История изменений:
    07.11.2004  написана версия подпрограммы, получающая коэффициенты
                через решение нормальных уравнений
    24.03.2006  решение через нормальные уравнения заменено на решение
                через сингулярное разложение входной матрицы. заметно
                улучшено качество работы в плохо обусловленных базисах.

  -- ALGLIB --
     Copyright by Bochkanov Sergey
*************************************************************************/
void buildpolynomialleastsquaresNew(const ap::real_1d_array& x,
     const ap::real_1d_array& y,
     int n,
     int m,
     ap::real_1d_array& c)
{
    ap::real_1d_array ctbl;
    ap::real_1d_array w;
    ap::real_1d_array c1;
    double maxx;
    double minx;
    int i;
    int j;
    int k;
    double e;
    double d;
    double l1;
    double l2;
    ap::real_1d_array z2;
    ap::real_1d_array z1;

    
    //
    // Initialize
    //
    maxx = x(0);
    minx = x(0);
    for(i = 1; i <= n-1; i++)
    {
        if( x(i)>maxx )
        {
            maxx = x(i);
        }
        if( x(i)<minx )
        {
            minx = x(i);
        }
    }
    w.setbounds(0, n-1);
    for(i = 0; i <= n-1; i++)
    {
        w(i) = 1;
    }
    
    //
    // Build Chebyshev approximation
    //
    buildchebyshevleastsquares(x, y, w, minx, maxx, n, m, ctbl);
    
    //
    // From Chebyshev to powers of X
    //
    c1.setbounds(0, m);
    for(i = 0; i <= m; i++)
    {
        c1(i) = 0;
    }
    d = 0;
    i = 0;
    do
    {
        k = i;
        do
        {
            e = c1(k);
            c1(k) = 0;
            if( i<=1&&k==i )
            {
                c1(k) = 1;
            }
            else
            {
                if( i!=0 )
                {
                    c1(k) = 2*d;
                }
                if( k>i+1 )
                {
                    c1(k) = c1(k)-c1(k-2);
                }
            }
            d = e;
            k = k+1;
        }
        while(k<=m);
        d = c1(i);
        e = 0;
        k = i;
        while(k<=m)
        {
            e = e+c1(k)*ctbl(k);
            k = k+2;
        }
        c1(i) = e;
        i = i+1;
    }
    while(i<=m);
    
    //
    // Linear translation
    //
    l1 = 2/(ctbl(m+2)-ctbl(m+1));
    l2 = -2*ctbl(m+1)/(ctbl(m+2)-ctbl(m+1))-1;
    c.setbounds(0, m);
    z2.setbounds(0, m);
    z1.setbounds(0, m);
    c(0) = c1(0);
    z1(0) = 1;
    z2(0) = 1;
    i = 1;
    do
    {
        z2(i) = 1;
        z1(i) = l2*z1(i-1);
        c(0) = c(0)+c1(i)*z1(i);
        i = i+1;
    }
    while(i<=m);
    j = 1;
    do
    {
        z2(0) = l1*z2(0);
        c(j) = c1(j)*z2(0);
        i = j+1;
        while(i<=m)
        {
            k = i-j;
            z2(k) = l1*z2(k)+z2(k-1);
            c(j) = c(j)+c1(i)*z2(k)*z1(k);
            i = i+1;
        }
        j = j+1;
    }
    while(j<=m);
}


/*************************************************************************
Взвешенная аппроксимация полиномами Чебышева по МНК

Алгоритм приводит отрезок [A,B] к интервалу [-1,1] и строит на нем ряд по
многочленам Чебышева, аппроксимирующий заданную функцию по МНК.

Входные параметры:
    X   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор абсцисс, в которых известны значения функции.
    Y   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор значений функции.
    W   -   массив  вещественных  чисел с нумерацией элементов от 0 до N-1.
            Содержит набор весов, сопоставленных значениям функции.
            Каждое  слагаемое в сумме квадратов отклонений аппроксимации от
            заданных  значений  умножается  на  квадрат сопоставленного ему
            веса.
    A,B -   отрезок, на котором строятся аппроксимирующие полиномы
    N   -   число точек, N>=1
    M   -   степень полинома, M>=0. Этот параметр передается в функцию
            CalculateChebyshevLeastSquares.

Выходные параметры:
    CTbl    таблица коэффициентов. Этот параметр передается в функцию
            CalculateChebyshevLeastSquares.

  -- ALGLIB --
     Copyright by Bochkanov Sergey
*************************************************************************/
void buildchebyshevleastsquares(const ap::real_1d_array& x,
     const ap::real_1d_array& y,
     const ap::real_1d_array& w,
     double a,
     double b,
     int n,
     int m,
     ap::real_1d_array& ctbl)
{
    int i;
    int j;
    ap::real_2d_array ma;
    ap::real_2d_array q;
    ap::real_2d_array vt;
    ap::real_1d_array mb;
    ap::real_1d_array tau;
    ap::real_2d_array b2;
    ap::real_1d_array tauq;
    ap::real_1d_array taup;
    ap::real_1d_array d;
    ap::real_1d_array e;
    bool isuppera;
    int mi;
    int ni;
    double v;

    mi = n;
    ni = m+1;
    
    //
    // Initializing design matrix
    // Here we are making MI>=NI
    //
    ma.setbounds(1, ni, 1, ap::maxint(mi, ni));
    mb.setbounds(1, ap::maxint(mi, ni));
    for(j = 1; j <= ni; j++)
    {
        for(i = 1; i <= mi; i++)
        {
            double fff=x(i-1);
            v = 2*(x(i-1)-a)/(b-a)-1;
            if( j==1 )
            {
                ma(j,i) = 1.0;
            }
            if( j==2 )
            {
                ma(j,i) = v;
            }
            if( j>2 )
            {
                ma(j,i) = 2.0*v*ma(j-1,i)-ma(j-2,i);
            }
        }
    }
    for(j = 1; j <= ni; j++)
    {
        for(i = 1; i <= mi; i++)
        {
            ma(j,i) = w(i-1)*ma(j,i);
        }
    }
    for(j = 1; j <= ni; j++)
    {
        for(i = mi+1; i <= ni; i++)
        {
            ma(j,i) = 0;
        }
    }
    
    //
    // Initializing right part
    //
    for(i = 0; i <= mi-1; i++)
    {
        mb(i+1) = w(i)*y(i);
    }
    for(i = mi+1; i <= ni; i++)
    {
        mb(i) = 0;
    }
    mi = ap::maxint(mi, ni);
    
    //
    // LQ-decomposition of A'
    // B2 := Q*B
    //
    lqdecomposition(ma, ni, mi, tau);
    unpackqfromlq(ma, ni, mi, tau, ni, q);
    b2.setbounds(1, 1, 1, ni);
    for(j = 1; j <= ni; j++)
    {
        b2(1,j) = 0;
    }
    for(i = 1; i <= ni; i++)
    {
        v = ap::vdotproduct(mb.getvector(1, mi), q.getrow(i, 1, mi));
        b2(1,i) = v;
    }
    
    //
    // Back from A' to A
    // Making cols(A)=rows(A)
    //
    for(i = 1; i <= ni-1; i++)
    {
        ap::vmove(ma.getrow(i, i+1, ni), ma.getcolumn(i, i+1, ni));
    }
    for(i = 2; i <= ni; i++)
    {
        for(j = 1; j <= i-1; j++)
        {
            ma(i,j) = 0;
        }
    }
    
    //
    // Bidiagonal decomposition of A
    // A = Q * d2 * P'
    // B2 := (Q'*B2')'
    //
    tobidiagonal(ma, ni, ni, tauq, taup);
    multiplybyqfrombidiagonal(ma, ni, ni, tauq, b2, 1, ni, true, false);
    unpackptfrombidiagonal(ma, ni, ni, taup, ni, vt);
    unpackdiagonalsfrombidiagonal(ma, ni, ni, isuppera, d, e);
    
    //
    // Singular value decomposition of A
    // A = U * d * V'
    // B2 := (U'*B2')'
    //
    if( !bidiagonalsvddecomposition(d, e, ni, isuppera, false, b2, 1, q, 0, vt, ni) )
    {
        for(i = 1; i <= ni; i++)
        {
            d(i) = 0;
            b2(1,i) = 0;
            for(j = 1; j <= ni; j++)
            {
                if( i==j )
                {
                    vt(i,j) = 1;
                }
                else
                {
                    vt(i,j) = 0;
                }
            }
        }
        b2(1,1) = 1;
    }
    
    //
    // B2 := (d^(-1) * B2')'
    //
    for(i = 1; i <= ni; i++)
    {
        if( d(i)>ap::machineepsilon*10*sqrt(double(ni))*d(1) )
        {
            b2(1,i) = b2(1,i)/d(i);
        }
        else
        {
            b2(1,i) = 0;
        }
    }
    
    //
    // B := (V * B2')'
    //
    for(i = 1; i <= ni; i++)
    {
        mb(i) = 0;
    }
    for(i = 1; i <= ni; i++)
    {
        v = b2(1,i);
        ap::vadd(mb.getvector(1, ni), vt.getrow(i, 1, ni), v);
    }
    
    //
    // Forming result
    //
    ctbl.setbounds(0, ni+1);
    for(i = 1; i <= ni; i++)
    {
        ctbl(i-1) = mb(i);
    }
    ctbl(ni) = a;
    ctbl(ni+1) = b;
}


/*************************************************************************
Вычисление полинома Чебышева, полученного в результате построения
аппроксимации по МНК, в заданной точке.

Параметры:
    M   -   степень полинома (параметр функции BuildChebyshevLeastSquares)
    A   -   таблица коэффициентов. Нумерация элементов от 0 до M+2.
            A[1...M] содержит коэффиициент при i-ом полиноме Чебышева.
            A[M+1] содержит левую границу интервала аппроксимации a.
            A[M+2] содержит правую границу интервала аппроксимации b.
    X   -   точка, в которой проводим вычисления.

Результат:
    значение в указанной точке
    
Следует отметить, что массив A хранит коэффициенты полинома Чебышева,
определенного на интервале [-1,1]. Перед вычислением значения полинома
аргумент приводится к этому отрезку.

  -- ALGLIB --
     Copyright by Bochkanov Sergey
*************************************************************************/
double calculatechebyshevleastsquares(const int& m,
     const ap::real_1d_array& a,
     double x)
{
    double result;
    double b1;
    double b2;
    int i;

    x = 2*(x-a(m+1))/(a(m+2)-a(m+1))-1;
    b1 = 0;
    b2 = 0;
    i = m;
    do
    {
        result = 2*x*b1-b2+a(i);
        b2 = b1;
        b1 = result;
        i = i-1;
    }
    while(i>=0);
    result = result-x*b2;
    return result;
}
// определяет экстремум функции использую аппроксимацию рлиномом чебышева n-ой степени
//++++++++++++++++++++++++++++++++++++++++++++++
void TurnOverNew(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double Precision,
               double &TMAX,
               double &TMIN,
               int N,
               ap::real_1d_array& W,
               double M)
 {
 ap::real_1d_array S;
  S.setbounds(0,N+1);
 buildchebyshevleastsquares(X,Y,W,A,B,N,M,S);
 int N1;
 N1=((B-A)/Precision)+1;
 double K=A;
 double F1,F2;
 ap::real_1d_array fk;
 fk.setbounds(0,N1+1);
  F1=calculatechebyshevleastsquares(M,S,K);
  F2=calculatechebyshevleastsquares(M,S,K+Precision);
  int i=0;
  int f0;
  datego(F1,F2,f0);
  fk(0)=f0;
  while(K<=B){
  i++;
  K=A+Precision*i;
  F1=calculatechebyshevleastsquares(M,S,K);
  F2=calculatechebyshevleastsquares(M,S,K+Precision);
  datego(F1,F2,f0);
  fk(i)=f0;
  if (fk(i-1)!=fk(i)) //определяем наличие экстремума
  {
  // определяем тип экстремума
      if(fk(i-1)==1){
      TMAX=K;}
      if(fk(i-1)==0){
      TMIN=K;}
   } //if
  }//while
 }


// максимальная  и минимальная частота на интервале

void MaxMin(     double* Y,
                 double &MAX,
                 double &MIN,
                 double &Peak,
                 int N)

 {
 MAX=Y[0];
 MIN=Y[0];
  for(int I=0;I<N;I++){
  if (Y[I]>MAX){
  MAX=Y[I];}
  if (MIN>Y[I]){
  MIN=Y[I];}
  }
 Peak=MAX-MIN;
}

void MaxMin(     ap::real_1d_array& Y,
                 double &MAX,
                 double &MIN,
                 double &Peak,
                 int N)

 {
 MAX=Y(0);
 MIN=Y(0);
  for(int I=0;I<N;I++){
  if (Y(I)>MAX){
  MAX=Y(I);}
  if (MIN>Y(I)){
  MIN=Y(I);}
  }
 Peak=MAX-MIN;
}

//монотонность функции   полиномиальная аппроксимация************************************************************************
 void MonotonP(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double &MAX,
               int N,
               ap::real_1d_array& W,
               double M, ap::real_1d_array& mono, double &MonoT)

 {
 ap::real_1d_array S;
  S.setbounds(0,N+1);
 buildchebyshevleastsquares(X,Y,W,A,B,N,M,S);
 double F,df;
 F=calculatechebyshevleastsquares(M,S,X(0));
 df=F-Y(0);
 MAX=fabs(df);
 mono(0)=fabs(df);
 MonoT=X(0);
 for (int i=1;i<N;i++){
  F=calculatechebyshevleastsquares(M,S,X(i));
  df=Y(i)-F;
  if (fabs(df)>MAX){
  MAX=fabs(df);
  MonoT=X(i);}
  mono(i)=fabs(df);

 }

}
//монотонность функции   полиномиальная аппроксимация  на одной точке************************************************************************
 void MonotonP1(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double &MAX,
               int N,
               ap::real_1d_array& W,
               double M,double X1,double Y1)

 {
 ap::real_1d_array S;
  S.setbounds(0,N+1);
 buildchebyshevleastsquares(X,Y,W,A,B,N,M,S);
 double F,df;
 F=calculatechebyshevleastsquares(M,S,X1);
 df=F-Y1;
 MAX=fabs(df);

}
//**********************************************************************************************************************
//Определения скачка функции************************************************************************
 void Jump(ap::real_1d_array& X,
               ap::real_1d_array& Y,
               int A,
               int B,
               double &MAX,
               double &MIN,
               int N,
               ap::real_1d_array& W,
               double M,
               ap::real_1d_array& ju,
               double &Tmax,
               double &Tmin)

 {
 ap::real_1d_array S;
  S.setbounds(0,N+1);
  ap::real_1d_array Tk;
  Tk.setbounds(0,N);
 buildchebyshevleastsquares(X,Y,W,A,B,N,M,S);
 double F,df,X1,min,m,X2,Y2;
  double Sl=0;
  double a,b,c,XR,test1,test2;
 int i;

 for (int j=0; j<N-1; j++){
         X2=X(j);
        Y2=Y(j);
        F=calculatechebyshevleastsquares(M,S,A);
       /*    for (int t=0; t<M; t++){
                  test1=pow(A,(M-1-t));
                  test2=S(M-t);
                  Sl=Sl+(M-t)*S(M-t)*pow(A,(M-1-t));
                                 }
           a=-Sl;
           b=1;
           c=Sl*A-F;
           XR=(a*X2+b*Y2+c)/sqrt(pow(a,2)+pow(b,2));
           df=fabs(XR);
          */
          df=sqrt(pow((X2-A),2)+pow(Y2-F,2));
          min=df;


        i=0;
        X1=A;
        m=X1;
     while (X1<B){
          X1=A+i*0.1;
          i++;
          F=calculatechebyshevleastsquares(M,S,X1);
           Sl=0;
          /* for (int t=0; t<M; t++){

                  Sl=Sl+(M-t)*S(M-t)*pow(X1,(M-1-t));
                                 }
           a=-Sl;
           b=1;
           c=Sl*X1-F;
           XR=(a*X2+b*Y2+c)/sqrt(pow(a,2)+pow(b,2));
           df=fabs(XR);
           */
           df=sqrt(pow((X2-X1),2)+pow(Y2-F,2));
             if (df<min){
                     min=df;
                     m=X1;
                   }

         }
            ju(j)=fabs(calculatechebyshevleastsquares(M,S,m))-fabs(Y2);
           // ju(j)=min;
          Tk(j)=m;
  }

  MAX=0;
  MIN=0;
  for (int l=0;l<N-1; l++){
      if (ju(l)>MAX){
       MAX=ju(l);
       Tmax=Tk(l);

      }
      if (ju(l)<MIN) {
       MIN=ju(l);
       Tmin=Tk(l);
      }

  }



}
//**********************************************************************************************************************





bool Statistik(double * X,
               double &MAX,
               double &MIN,
               double &AVG,
               double &StDev,
               double &Peak,
               double A,
               double B,
               double &UpB,
               double &LoA,
               double &Good,
               double &Bad,
               double &Anomal,
               double &Error,
               double &TG1,
               double &TG2,
               double &Cp,
               double N)
{
int countUp=0;
int countDw=0;
int countG=0;
double*  Y=new double[N];
double*  Z=new double[N];
double*  W=new double[10];
MAX=MaxX(X,N);
MIN=MinX(X,N);
AVG=MeanX(X,N);
StDev=SigmaX(X,N,AVG);
Peak=MAX-MIN;
int j=0;
int k=0;
for (int i=0;i<N;i++){
             if(B!=0){
                     if (X[i]>B){
                                 countUp=countUp+1;
                                }
                     }
             if(A!=0){
                     if (X[i]<A){
                                 countDw=countDw+1;
                                 }
                     }
          if(A*B!=0){
                     if (X[i]<=B){
                                if(X[i]>=A){
                                          countG=countG+1;
                                         }}
                     }
          if(A==0){
                   if (X[i]<=B){
                                    countG=countG+1;
                               }
                   }
          if (B==0){
                    if(X[i]>=A){
                                countG=countG+1;
                                }
                    }

          }
for (int i=0;i<N;i++){
                    if(A!=0&&B!=0){
                    if (fabs(X[i])<5*(fabs(A)+fabs(B))){
                               if(X[i]!=0){
                                                       Z[k]=X[i];
                                                       k++;
                                                       }}
                    }
       else { if (fabs(X[i])<10*AVG){
                               if(X[i]!=0){
                                                       Z[k]=X[i];
                                                       k++;
                                                       }}
                    }

                    }

if (k>2){
MAX=MaxX(Z,k-1);
MIN=MinX(Z,k-1);
AVG=MeanX(Z,k-1);
StDev=SigmaX(Z,k-1,AVG);
Peak=MAX-MIN;
for (int i=0;i<k-1;i++){
if (fabs(Z[i]-AVG)<3*StDev){
 Y[j]=Z[i];
 j++;
 }
}
MAX=MaxX(Y,j-1);
MIN=MinX(Y,j-1);
AVG=MeanX(Y,j-1);
StDev=SigmaX(Y,j-1,AVG);
Peak=MAX-MIN;

if (B!=1024){
UpB=countUp;
}
else {UpB=0;}
if (A!=1024){
LoA=countDw;
}
else {LoA=0;}
Bad=UpB+LoA;
Good=N-Bad;
Error=N-k-1;
if(Error<0){
           Error=0;
           }
Anomal=N-j-1-Error;
if (Anomal<0){
             Anomal=0;
             }
TG1=AVG+2.233*StDev;
TG2=AVG-2.233*StDev;
if (A*B!=0){
           Cp=(B-A)/(3*StDev);
           }
else {
      if (A==0) {
               Cp=(B-AVG)/(3*StDev);
               }
      if (B==0){
                Cp=(AVG-A)/(3*StDev);
                }
      }

double h,a,nk,xd;
nk=0;
double* Nrl=new double[10];
h=(MAX-MIN)/10;
a=MIN;
for(int i=0;i<10;i++){
                     W[i]=((2*a+h)/2);
                     a=a+h;
                     }
for(int i=0;i<10;i++){
                      for(int m=0;m<j-1;m++){
                                           if(Y[m]>(W[i]-h/2)){
                                                            if(Y[m]<(W[i]+h/2)){
                                                                              nk=nk+1;
                                                              }                 }
                                              }
                      Nrl[i]=nk;
                      nk=0;
                      }
double*  f=new double[10];
double*  Nf=new double[10];
double*  xc=new double[10];
double tt,tt1;
for(int i=0;i<10;i++){
                     tt=(W[i]-AVG)/StDev;
                     tt1=exp(-tt*tt/2);
                     f[i]=(1/(sqrt(2*3.14)))*tt1;
                     Nf[i]=((N*h)/StDev)*f[i];

                     
                     }
xd=0;
for(int i=0;i<10;i++){
                      xc[i]=((Nrl[i]-Nf[i])*(Nrl[i]-Nf[i]))/Nf[i];
                      xd=xd+xc[i];
                     }
bool norm=false;
if (xd<=15.51&&xd>=2.73){
                         norm=true;

                        }
                        return norm;
                        }
                        return  0;


}

char *  ToBin (int value){
AnsiString result;
if (value>127){
 value=127;
}
if (value<-127){
 value=-127;
}
 int temp=abs(value);
 while (temp>1){
     if (temp%2==0){
     result=result+"0";
   }
   else {
    result=result+"1";
   }
  temp=temp/2;
 }
 result=result+FloatToStr(temp);
 if (value<0){
 result="1"+ result;
 }
 char  * r = new char[result.Length()+1];
 strcpy(r,result.c_str());
 r[result.Length()]='\0';
 return r;
}
