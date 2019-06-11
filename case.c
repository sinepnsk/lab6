#include <stdio.h>

int main()
{
    char x;
    printf("Input UPPER-CASE letter: ");
    scanf("%c", &x);
    printf("Your LOWER-CASE is: %c\n",x+32);
    return 0;
}