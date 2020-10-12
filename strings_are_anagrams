#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a1,a2;
    cin>>a1>>a2;
   vector<int>t(26,0);
    if(a1.size()!=a2.size())
    {
        cout<<"Not anagrams";
    }
    for(int i=0;i<a1.size();i++)
    {
        t[a1[i]-'a']+=1;
        t[a2[i]-'a']-=1;
    }
    int i;
    for(i=0;i<26;i++)
    {
        if(t[i]!=0)
        {
             cout<<"Not anagrams";
             break;
        }
    }
    if(i==26)
    cout<<"Strings are anagrams";

    return 0;
}
