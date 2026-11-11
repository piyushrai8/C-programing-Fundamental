#include <stdio.h>

int main()
{
    int years ;
    printf("enter the values of years");
    scanf("%d", &years);
    if (years%4==0)
    { 
        printf("yes it is leap years");
    }
    else
    { 
        printf(" piyush  no leap year");
    }
    return 0 ;
}
