#include <iostream>
using namespace std;

int sumOfDigits(int x)
{
    if (x == 0 || x < 10)
        return x;
    else
        return x%10 + sumOfDigits(x/10);
}

int main()
{
    cout << "enter number: " << endl;
    int number;
    cin >> number;
    int result = sumOfDigits(number);
    cout << result;
}
