#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);
void main()
{	
	int ch,a,b;
	while(1)
	{
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("5.Quit\n");
		printf("Enter first number: ");
		scanf("%d",&a);
		printf("Enter second number: ");
		scanf("%d",&b);	
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("The Sum is: %d\n",add(a,b));
					break;
			case 2: printf("The Subtraction is: %d\n",sub(a,b));
					break;
			case 3: printf("The Multiplication is: %d\n",mul(a,b));
					break;
			case 4: printf("The Division is: %f\n",div(a,b));
					break;
			case 5: exit(1);
					break;
			default:printf("Enter choice is invalid!\n\n");		
					
		}
	}
	
	
}
int add(a,b)
{
	return(a+b);
}
int sub(a,b)
{
	return(a-b);
}
int mul(a,b)
{
	return(a*b);
}
float div(a,b)
{	
	return(a/b);
}
