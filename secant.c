#include <stdio.h>
#include <math.h>

double f(double x)
{
    return x*x*x - 5*x +1;
}

double secant(double x1, double x2, double e)
{
    double num=((x1*f(x2))-(x2*f(x1)));
    double den=f(x2)-f(x1);
    double x3=num/den;
    if(fabs(f(x3))<=e)
        return x3;
        
    return secant(x2,x3,e);
}

int main()
{
    double res=secant(0.0,1.0,0.000001);
    printf("%lf",res);
}