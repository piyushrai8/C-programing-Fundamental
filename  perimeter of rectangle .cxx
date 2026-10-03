#include<stdio.h>
int main()
{// perimeter of rectangle  
float l,b;
printf("enter the value of l , b = ");
scanf("%f %f", &l,&b);
 float perimeter = 2*(l+b);
printf("here is perimeter = %f" , perimeter);
return 0 ;
}