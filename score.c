#include <stdio.h>

int main()
{
    float x, y, z, total_score;
    printf("Input your assignment score(1-100): ");
    scanf("%f", &x);
    printf("Input mid-term score(1-100): ");
    scanf("%f", &y);
    printf("Input final score(1-100): ");
    scanf("%f", &z);
    total_score = (x*0.1)+(y*0.4)+(z*0.5);
    printf("Your total score is: %.2f\n", total_score);
    return 0;
}
