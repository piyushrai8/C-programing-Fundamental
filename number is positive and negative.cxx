#include<stdio.h>
#include<math.h>
int main ()
{ // number is negative , positive or zero
int a;
printf("enter the value of a = ");
scanf("%d", &a);
 
 if(a>0)
 {
 	printf("number is positive");
 }
 else if (a==0)
 {
 	printf("number is zero ");
 }
 else 
 { 
 printf("number is negative ");
 }
 	return 0 ; 
}