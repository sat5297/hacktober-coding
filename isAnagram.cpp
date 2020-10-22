#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
        if(s.compare(t)==0)
            return true;
        else
            return false;
    }
int main()
{
    string a="cart", b="trac";
    bool val= isAnagram(a,b);
    if(val)
        cout << "strings are anagram" << "\n";
    return 0;
}
