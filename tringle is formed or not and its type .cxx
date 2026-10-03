#include <stdio.h>

int main() 
{
    // check whether three sides form a valid triangle and display its type
    int a, b, c;

    printf("enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (a + c > b)) 
    {
        printf("Triangle is formed.\n");

        if (a == b && b == c) 
        {
            printf("It is an Equilateral Triangle\n");
        } 
        else if (a == b || b == c || a == c) 
        {
            printf("It is an Isosceles Triangle\n");
        } 
        else 
        {
            printf("It is a Scalene Triangle\n");
        }
    } 
    else 
    {
        printf("Triangle is not formed\n");
    }

    return 0;
}
