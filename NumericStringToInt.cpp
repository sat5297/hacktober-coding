#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s = "999";

    stringstream degree(s);

    int x = 0;
    degree >> x;

    cout << "Value of x: " << x;
}
