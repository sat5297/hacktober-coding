#include<stdio.h>

int main()
{
	int n;
    	long int sum=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	sum=(n*(n+1)*(2*n+1))/6;
	printf("The sum of first %d natural integers is %d\n",n,sum);
	return 0;
}	
