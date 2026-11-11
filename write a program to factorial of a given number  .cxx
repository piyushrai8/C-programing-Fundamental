#include<stdio.h>
int  main ()
{
	// write a program to factorial of a given number  
	int n;
	printf("enter n do you want to find the factori ");
	scanf("%d", &n);
	int i;
	int fact = 1  ;
	for (i=n; i>=1; i--)
	{fact = fact*i ;  }
	printf("here is factroial value  =  %d", fact ) ;
	return 0 ;
}