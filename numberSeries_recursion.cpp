//finds the sum of following series: 1 + 1/2 + 1/4 + ... + 1/2^n

#include <iostream>
#include <cmath>
using namespace std;

double numberSries(int n)
{
    if (n != 0)
        return ((1/pow(2,n)) + numberSries(n-1));
    else
        return 1;
}

int main()
{
    cout << "enter number: " << endl;
    int number;
    cin >> number;
    double result = numberSries(number);
    cout << result;
}
