#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"The numbers before swap are: first= "<<num1<<" and second= "<<num2<<endl;
    num1*=num2;
    num2=num1/num2;
    num1/=num2;
    cout<<"After swap the numbers are: first= "<<num1<<" and second= "<<num2<<endl;
    return 0;
}