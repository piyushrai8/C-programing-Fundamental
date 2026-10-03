#include <stdio.h>
#include<stdio.h>

int main() 
{
    // write a program to given character is digit or not 
    int a ;
    printf("enter the character =");
    scanf("%d",&a);
    if ( a==0||a==1||a==2||a==3||a==4||a==5||a==6||a==7||a==8||a==9)
    { 
    printf("yes it is digit ");
    }
    else 
    {
    	 printf(" no it is not digit ");
    
  }    
   return 0 ; 
}