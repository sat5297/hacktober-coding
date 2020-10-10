#include<bits/stdc++.h>
using namespace std;

int main() {
    long long number;
    cout << "Enter a number:-" << endl;
    cin>>number;

    if(number <= 0) {
        cout << "The number [" << number << "] is not a power of 2." << endl;
    } else {
        if(ceil(log2(number)) == floor(log2(number))) {
            cout << "The number [" << number << "] is a power of 2." << endl;
        } else {
            cout << "The number [" << number << "] is not a power of 2." << endl;
        }
    }

    return 0;
}