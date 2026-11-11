#include<stdio.h>
int main()
{ 
// write a program to calculate the sum of even number up to n number
int n ;
printf("enyer the value of n = ");
scanf("%d",&n);
int i ;
int sum = 0 ;
for (i=0; i<=n ; i= i +2)
{ sum =sum + i ;
} 
printf("here is value = %d", sum );
return 0 ; 
}