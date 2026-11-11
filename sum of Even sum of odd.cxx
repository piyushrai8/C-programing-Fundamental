#include<stdio.h>
int main ()
{
	int i, n, sumo=0,sume=0 ;
	printf("enter the number ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	if (i%2==0)
	
	{ sume=sume+i;
	}
	else 
	{
		sumo=sumo+i;}
		
	}
	printf("sume %d\n sumo%d\n", sume , sumo);
	return 0 ;
}