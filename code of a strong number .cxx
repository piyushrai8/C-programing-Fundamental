#include<stdio.h>
int main ()
{
	// code for a strong number 
	int n , i,  num ,digit ,   sum = 0 ; 
	printf("enter the value of n = ");
	scanf("%d", &n);
	for (num=n ; num>0; num= num/10)
	 {
	 	 digit = num%10 ;
	 int fact = 1 ; 
	 for(i=1 ; i<=digit ; i++)
	 {
	 	fact= fact*i ;
	 	}
	 	sum = sum + fact ; 
	 	 } 
	 	 if (n==sum)
	 	 {
	 	 	printf("strong number ");
	 	 }
	 	 else 
	 	 {
	 	 	printf("not a strong number ");
	 	 	
	 	 }
	 	 return 0 ; 
}
	 