//---------------------------------------------------------------------------

#ifndef spline3H
#define spline3H
double splineinterpolate(const double N, const double s,
                       ap::real_1d_array& x,
                       ap::real_1d_array& y,
                       ap::real_1d_array& b,
                       ap::real_1d_array& d,
                       ap::real_1d_array& c);


void spline(const double N,
            ap::real_1d_array& x,
            ap::real_1d_array& y,
            ap::real_1d_array& b,
            ap::real_1d_array& d,
            ap::real_1d_array& c);



//---------------------------------------------------------------------------
#endif
