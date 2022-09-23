#include <math.h>

double f(double x){
    return exp(-1 * fabs(x)) * sin(x);
}

double g(double x){
    return exp(-1 * fabs(x)) * cos(x);
}