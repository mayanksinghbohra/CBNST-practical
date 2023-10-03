#include <stdio.h>
#include <math.h>

double f(double x)
{
    return x*x*x - 4*x - 9;
}

double bisect(double a, double b, double e)
{
    printf("Chal gaya");
    double c=(a+b)/2;
    if(fabs(b-a)<e)
        return c;
    if(f(c)==0)
        return c;
        
    if(f(c)*f(a)<0)
        b=c;
    else
        a=c;
        
    return bisect(a,b,e);
}

int main()
{
    double res=bisect(-100,100,0.000001);
    printf("\n\nResult : %lf",res);
    return 0;
}
