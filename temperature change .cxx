#include <stdio.h>

int main() 
{
    char choice;
    float celsius, fahrenheit;

    printf("Choose 'c' to convert Celsius to Fahrenheit, or 'f' to convert Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    switch (choice) 
    {
        case 'c':
        case 'C':
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (9.0 / 5.0) * celsius + 32.0;
            printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
            break;

        case 'f':
        case 'F':
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
            printf("Temperature in Celsius: %.2f\n", celsius);
            break;

        default:
            printf("Wrong input! Please enter only 'c' or 'f'.\n");
    }

    return 0;
}
