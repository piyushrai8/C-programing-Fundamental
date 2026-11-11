#include<stdio.h>
int  main ()
{
	// write a program to print sum of natural number 
	int n;
	printf("enter n to print sum of natural number ");
	scanf("%d", &n);
	int i;
	int sum = 0;
	for (i=1; i<=n; i++)
	{ sum = sum + i ; }
	printf("here is sum of natural number =  %d", sum) ;
	return 0 ;
}