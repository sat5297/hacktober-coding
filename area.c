//area of rectangle,circle and square
#include<stdioh>
void main()
{
	int n;
	int l,b,radius,side;
	int area;
	
	printf("1) RECTANGLE\n");
	printf("2) CIRCLE\n");
	printf("3) SQUARE\n");
	printf("Enter a choice\n");
	scanf("%d",&n);
	printf("The area is :  %d")
	switch(n)
	{
		case 1: printf("Enter length and breadth\n");
			scanf("%d%d",&l,&b);
			area=l*b;
			printf("%d\n",area);
			break;
		case 2: printf("Enter radius\n");
			scanf("%d",&radius);
			area=3.14*radius*radius;
			printf("%d\n",area);
			break;
		case 3: printf("Enter the side length\n");
			scanf("%d",&side);
			area=side*side;
			printf("%d\n",area);
			break;
		default:printf("Invalid choice,please try again\n");
	}
}
