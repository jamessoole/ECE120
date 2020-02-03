#include <stdio.h>
 
int main()
{
    double val1 = -22;
    double val2 = 33;
    double val3 = 12;
    double val4 = 10;
    double val5 = 3;

    double res;
    double res2;
    double res3;
 
    res = val1 * val2;
    res2 = val3 / val5;
    res3 = val4 / val5;

    int res4 = 12 % 3;
    int res5 = (-11) % 3;

 
    printf("%f\n", res);
    printf("%f\n", res2);
    printf("%f\n", res3);
    printf("%d\n", res4);
    printf("%d\n", res5);
 
    return 0;
}