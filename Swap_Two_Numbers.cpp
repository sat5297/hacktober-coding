#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
   swap(a,b); //Function given in STL of C++
    cout << "Swapped two numbers:" << a <<" "<< b;
    return 0;
}
