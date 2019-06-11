#include <stdio.h>

int main()
{
    float x, y, area_of_the_triangle;
    printf("Input the base of right triangle ");
    scanf("%f", &x);
    printf("Input the height of right triangle ");
    scanf("%f", &y);
    area_of_the_triangle = (x*y)/2;
    printf("The area of triangle is%f\n", area_of_the_triangle);
    return 0;
}

