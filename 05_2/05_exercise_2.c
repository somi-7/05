#include <stdio.h>
int main(void)
    {
        int number;

    printf("Input a number :");
    scanf("%i", &number);

    if (number < 0)
        {
            number = -number;
        }

    printf("Absolute value is %i.\n", number);

    return 0;

    }