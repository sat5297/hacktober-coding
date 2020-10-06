#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    float a, b, radius, area;

    int ch;

    cout << "\n1.Area Of Rectangle";
    cout << "\n2.Area Of Square";
    cout << "\n3.Area Of Circle\n";
    
    cout<<"\nEnter Your Choice :";
    cin>>ch;

    switch(ch)
    {
		case 1:
		{
			cout << "\nEnter the Length and Breadth of Rectangle: ";
			cin >> a >> b;
			area = a*b;
			cout << "Area of Rectangle = " << area << endl;
			break;
		}
        case 2:
		{
			cout << "\nEnter Side of Square: ";
			cin >> a;
			area = a*a;
			cout << "Area of Square = " << area << endl;
			break;
		}
		case 3:
		{
			cout << "\nEnter the Radius of Circle: ";
			cin >> radius;
			area = 3.14159*radius*radius;
			cout << "Area of Circle = " << area << endl;
			break;
		}

		default:
			cout<<"\n Invalid Choice Try Again...!!!";
			break;
		}
    return 0;
}

