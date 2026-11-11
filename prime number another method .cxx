#include<stdio.h>
int main ()
{
	int n ,sum=0 ;
	printf("enter the number");
	scanf("%d", &n);
	for (int i = 2;i<n;i++)
	{
		if (n%i==0)
		{
			 sum = sum +i ;
		}}
		if (sum==0&&n>1)
		{
			printf("prime number ");
		}
		else 
		{
			printf("not a prime number ");
		}
		return 0 ;
	}