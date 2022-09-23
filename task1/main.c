#include <stdio.h>

#include <math.h>


double f(double x)
{
    return exp(-fabs(x)) * sin(x);
}

double g(double x)
{
    return exp(-fabs(x)) * cos(x);
}

int main()
{
    double x = 0;
    printf("Enter x , to find g(x) and f(x) : ");
    scanf("%lf",&x);
    printf("g(x) = %lf \nf(x) = %lf \n", f(x), g(x));
    return 0;
}


