#include<stdio.h>
int main ()
{
	// code for a armstrong  number 
	int n , i,  num ,digit ,   sum = 0 ; 
	printf("enter the value of n = ");
	scanf("%d", &n);
	for (num=n ; num>0; num= num/10)
	 {
	 	 digit = num%10 ;

	 	sum = sum + (digit*digit*digit) ; 
	 	 } 
	 	 if (n==sum)
	 	 {
	 	 	printf("armstrong number  ");
	 	 }
	 	 else 
	 	 {
	 	 	printf("not a armstrong number ");
	 	 	
	 	 }
	 	 return 0 ; 
}
	 