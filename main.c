#include <stdio.h>
//#include <julia.h>
//JULIA_DEFINE_FAST_TLS
#include "test.h"

double func(double x)
{
    return x*x;
}


int main() {
    double a = 0;
    double b = 1;
    double dx=1e-3;
    double result = trapezoid(func, a, b, dx);
    printf("result = %f\n", result);
    printf("Hello, World!\n");
    return 0;
}
