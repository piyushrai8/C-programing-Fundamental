#include<stdio.h>
int main ()
{ int age ;
printf("enter the value of age ");
scanf("%d",&age);
if(age>40)
{
	printf("senior");
}
else if (age>25)
{
	printf("adut");
}
else if (age>18)
{
	printf("tenager");
}
else if (age>14)
{
	printf("child");
}
else 
{
	printf("false input");
}
return 0;
}