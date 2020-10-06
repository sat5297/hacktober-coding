//Area of geometric figures uding function overloading

#include<iostream>
#include<cstdlib>

using namespace std;

//Area of a circle
float area(double r)
{
	float area = 3.14*r*r;
	cout<<"The area of the circle is: "<<area<<"\n";
}

//Area of rectangle
float area(float l, float b)
{
	float area = (l*b);
	cout<<"The area of the rectangle is: "<<area<<"\n";
}

//Area of triangle
float area(double b, double h)
{
	float area = (0.5*b*h);
	cout<<"The area of the triangle is: "<<area<<"\n";
}

//Area of a square
float area(float s)
{
	float area  = s*s;
	cout<<"The area of the square is: "<<area<<"\n";
}

int main()
{
	float s, l, b;
	double r, base, h;
	int ch;

	while(1)
	{   
		//The Menu bar 
		cout<<"\n1. Area of Circle";
		cout<<"\n2. Area of Rectangle";
		cout<<"\n3. Area of Triangle";
		cout<<"\n4. Area of Square";
		cout<<"\n5. Exit\n";
		cin>>ch;
		//Switch case to implement the choices
		switch(ch)
		{
			case 1:
			{
				cout<<"\nEnter the Radius of circle: ";
				cin>>r;
				area(r);
				break;
			}
			case 2:
			{
				cout<<"\nEnter the length and breadth of the rectangle: ";
				cin>>l>>b;
				area(l,b);
				break;
			}
			case 3:
			{
				cout<<"\nEnter the base and height of the triangle: ";
				cin>>base>>h;
				area(base,h);
				break;
			}
			case 4:
			{
				cout<<"\nEnter the side of the square: ";
				cin>>s;
				area(s);
				break;
			}
			case 5:
				exit(0);
			default:
				cout<<"Enter a valid choice \n";
		}
	}
	return 0;
}
