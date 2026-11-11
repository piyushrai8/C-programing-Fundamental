#include<stdio.h>
int main()
{ 
// write a program to calculate the sum of odd number up to n number
int n ;
printf("enyer the value of n = ");
scanf("%d",&n);
int i ;
int sum = 0 ;
for (i=1; i<=n ; i= i +2)
{ sum =sum + i ;
} 
printf("here is value = %d", sum );
return 0 ; 
}