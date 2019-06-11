#include <stdio.h>
#include <math.h>
int main()
{
    float x ;
    printf("Input number: ");
    scanf("%f",&x);
    printf("Your square-root and logarithm is: %.2f %.2f ",sqrt(x),log(x));
    return 0;
}