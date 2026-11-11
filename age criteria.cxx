#include<stdio.h>
int main ()
{
int age ;
printf("enter the value of age = \n");
scanf("%d", &age);
if (age>=18)
{
	printf("yes eligible");
}
else {
	printf("not eligible");
}
return 0 ;
}