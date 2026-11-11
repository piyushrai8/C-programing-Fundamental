#include <stdio.h>

int main() 
{
    char choice;
    float side, length, breadth, radius, area;

    printf("Choose shape (s for square, r for rectangle, c for circle): ");
    scanf(" %c", &choice); // %c se pehle space newline ko ignore karne ke liye

    switch (choice) 
    {
        case 's':
        case 'S':
            printf("Enter side of square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        case 'r':
        case 'R':
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 'c':
        case 'C':
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        default:
            printf("Galat input! Sirf 's', 'r' ya 'c' enter karein.\n");
    }

    return 0;
}
