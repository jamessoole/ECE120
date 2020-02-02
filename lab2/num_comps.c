#include <stdio.h>
 
int main()
{
    int val1 = -22;
    int val2 = 33;
    int val3 = 12;
    int val4 = 10;
    int val5 = 3;

    int res;
    int res2;
    int res3;
 
    res = val1 * val2;
    res2 = val3 / val5;
    res3 = val4 / val5;

    int res4 = 12 % 3;
    int res5 = (-11) % 3;

 
    printf("%d\n", res);
    printf("%d\n", res2);
    printf("%d\n", res3);
    printf("%d\n", res4);
    printf("%d\n", res5);
 
    return 0;
}