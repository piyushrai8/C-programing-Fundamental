#include <stdio.h>

int main() 
{
    char op;
    float num1, num2;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); // %c se pehle space newline ko ignore karne ke liye hai

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op) 
    {
        case '+':
            printf(" = %.2f\n", num1 + num2);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0) 
            {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } 
            else 
            {
                printf("Error: Zero se divide nahi kar sakte!\n");
            }
            break;

        default:
            printf("Error: Invalid operator! Sirf +, -, *, / use karein.\n");
    }

    return 0;
}
	