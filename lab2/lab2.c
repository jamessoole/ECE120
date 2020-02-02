#include <stdio.h>  
#include <math.h>  
//srtq256 = 16
//256, 16, 4, 2, 1
int main()  
{  
    int a = 256;

    while (a > 1)  
    {  
        printf("%d\n", a);  
        a = sqrt(a);
    }  

    printf("%d\n", 1);  

    return 0;
}  

