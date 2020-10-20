//string inputted should only contain numerical values, also, a numerical value is only reflected in the output if it lies in the range of integer type values in C++.
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string pp;
    cout<<"enter string"<<endl;
    cin>>pp;
    int num1 = stoi(pp);
    cout << "The numerical value in the inputted string is " << num1 << '\n';
    return 0;
}