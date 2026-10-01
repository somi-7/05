#include <stdio.h>
int main(void)
    {
        int num1, num2;
        char op;

        printf("Enter the calculation : ");

        scanf("%d %c %d", &num1, &op, &num2);

        switch (op)
        {
            case '+':
                printf("= %d\n", num1 + num2);
                break;
            case '-':
                printf("= %d\n", num1 - num2);
                break;
            case '*':
                printf("= %d\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    {
                        printf("= %d\n", num1 / num2);
                    }
                else
                    {
                        printf("It cannot be split by 0.\n");
                    }
                break;
            case '%':
                if (num2 != 0)
                    {
                        printf("= %d\n", num1 % num2);
                    }
                break;
            default:
                printf("It is wrong operator.\n");
                break;
        }

        return 0;
    }