#include <stdio.h>
#include<stdio.h>

int main() 
{
    // write a program to from a calculator 
    float a , b ; 
    char c ; 
    printf(" enter the value of a,b and symbol c = ");
    scanf("%f%f %c", &a,&b,&c);
    if (c=='+')
    {
    	 printf("reslut %f ", a+b);
    }
    else if (c== '-')    
    {
   	 printf("result %f", a-b ); 
   	 }
    else if (c=='*')
     {
    	 printf("reslut %f ", a*b);
    }
    else if (c=='/')
    { 
    if (b!=0)
    { printf(" reslut %f", a/b);
    }
    else 
    { printf("zero se divide nai hota ");
    } }
    else 
    {
    	 printf(" envalid operator");
    }
    return 0 ; 
}