#include <iostream>
using namespace std;

template <class T>
void printIt(T a, T b)
{
	T c = a + b;
	cout<< "You gave me " << a << " and " << b << ".\n";
	cout<< "Together they make " << c << "." <<endl;	
}

int main()
{
    string sA = "Oh";
    string sB = "noes!";
	printIt(1,2);
	printIt(2.6, 3.7);
	printIt('A','1');
	printIt(sA, sB);
}

