#include <stdio.h>
int main(void)
    {
        int number;

    printf("Input a number :");
    scanf("%i", &number);

    if (number > 0)
    {
        printf("It is positive number.\n");
    }
    else if (number < 0)
    {
        printf("It is negative number.\n");
    }
    else
    {
        printf("It is 0.\n");
    }

    return 0;
    }