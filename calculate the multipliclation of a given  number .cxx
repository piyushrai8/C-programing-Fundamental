#include<stdio.h>
int main()
{ 
// write a program to calculate the multipliclation of a given  number
int n ;
printf("enyer the value of n = ");
scanf("%d",&n);
int i ;
int multiplication  ;
for (i=1; i<=10 ;  i ++)
{ multiplication = n *i;

printf("%d\n", multiplication  ); }
return 0 ; 
}