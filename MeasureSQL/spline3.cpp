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
#include "spline3.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
double splineinterpolate(const double N, const double s,
                       ap::real_1d_array& x,
                       ap::real_1d_array& y,
                       ap::real_1d_array& b,
                       ap::real_1d_array& d,
                       ap::real_1d_array& c)
{        double F;
         int k;
           for(int k=1; k<=N; k++){
	   if(s>=x(k-1) && s<=x(k)){
	       break;
	   }
       }
       F = y(k) + b(k)*(s-x(k)) + c(k)*pow(s-x(k), 2) + d(k)*pow(s-x(k), 3);
       return F;
}

void spline(const double N,
            ap::real_1d_array& x,
            ap::real_1d_array& y,
            ap::real_1d_array& b,
            ap::real_1d_array& d,
            ap::real_1d_array& c)
{
   int k=0;
   ap::real_1d_array h,l,delta,lambda;

   h.setbounds(0,N);
   l.setbounds(0,N);
   x.setbounds(0,N);
   y.setbounds(0,N);
   b.setbounds(0,N);
   d.setbounds(0,N);
   c.setbounds(0,N);
   lambda.setbounds(0,N);
   delta.setbounds(0,N);
   for(k=1; k<=N; k++){
       h(k) = x(k) - x(k-1);
       l(k) = (y(k) - y(k-1))/h(k);
   }
   delta(1) = - h(2)/(2*(h(1)+h(2)));
   lambda(1) = 1.5*(l(2) - l(1))/(h(1)+h(2));
   for(k=3; k<=N; k++){
      delta(k-1) = - h(k)/(2*h(k-1) + 2*h(k) + h(k-1)*delta(k-2));
      lambda(k-1) = (3*l(k) - 3*l(k-1) - h(k-1)*lambda(k-2)) /
		    (2*h(k-1) + 2*h(k) + h(k-1)*delta(k-2));
   }
   c(0) = 0;
   c(N) = 0;
   for(k=N; k>=2; k--){
      c(k-1) = delta(k-1)*c(k) + lambda(k-1);
   }
   for(k=1; k<=N; k++){
      d(k) = (c(k) - c(k-1))/(3*h(k));
      b(k) = l(k) + (2*c(k)*h(k) + h(k)*c(k-1))/3;
   }


   }
