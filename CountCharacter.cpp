#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char c;
    int counter = 0;

    cout << "Enter the string you want to check: ";
    cin >> s;

    cout << "Enter the character that you want to count: ";
    cin >> c;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
            counter++;
    }

    cout << "The character \'" << c << "\' occurs  " << counter << " times in " << s << endl;
}