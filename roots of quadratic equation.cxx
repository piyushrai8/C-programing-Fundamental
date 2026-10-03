#include<stdio.h>
#include<math.h>
int main ()
{ // root of quadratic equation 
int a,b,c;
printf("enter the value of a,b,c = ");
scanf("%d%d%d", &a,&b,&c);
 float D = b*b-4*a*c;
 if(D>0)
 {
 	float root_1 = (-b+sqrt(D))/(2*a);
 	float root_2=(-b-sqrt(D))/(2*a);
 	printf("here is root of equation = %f%f", root_1,root_2);
 }
 else if (D==0)
 {
 	float root_1= -b/(2*a) ;
 	printf("here is root of equati = %f" , root_1);
 }
 else 
 { 
 printf("root are imaginary ");
 }
 	return 0 ; 
}