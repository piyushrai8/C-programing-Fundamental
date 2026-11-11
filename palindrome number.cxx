#include <stdio.h>

int main()
{
    int n, temp, digit;
    int rev = 0; 

    printf("enter the value of n: ");
    scanf("%d", &n);

    for (temp = n; temp > 0; temp = temp / 10)
    {
        digit = temp % 10;          
        rev = (rev * 10) + digit;     
    }

   
    if (rev == n)
    {
        printf("palindrome number\n");
    }
    else
    {
        printf("not a palindrome number\n");
    }

    return 0;
}
