#include <stdio.h>
#include <stdlib.h>

struct complex {
    double  real;
    double img;
} c1 , c2 , c3;
int main()
{
    printf("For 1st complex number\nEnter real and imaginary part respectively:\n");
    scanf("%lf" , &c1.real );
    scanf("%lf" , &c1.img );
   printf("For 2nd complex number\nEnter real and imaginary part respectively:\n");
    scanf("%lf" , &c2.real );
    scanf("%lf" , &c2.img );
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    printf("Sum = %.1f + %.1fi" , c3.real , c3.img);

    return 0;
}
