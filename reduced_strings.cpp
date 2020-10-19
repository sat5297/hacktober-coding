#include <bits/stdc++.h>
/*
reduce a string in the following way:
xx reduces to nothing left and xxx changes to x

ps :- just take out characters in pair of 2

for eg: aabbbccccd turns to bd

if the entire string is reduced print Empty string


*/

using namespace std;
 int main()
 {
	 stack <int> a;
	 string s;
	 cin>>s;
	 a.push(s[0]);
	 for(int i =1;i<s.length();++i)
	 {
		 if (a.empty())
			 a.push(s[i]);
		 else if ( s[i] == a.top())
			 a.pop();
		else
			a.push(s[i]);
	 }
	 string ans = "";
	 while(!a.empty())
	 {
		 ans += a.top();
		 a.pop();
	 }
	 reverse(ans.begin(),ans.end());
	 if (!ans.length())
		 cout<<"Empty String"<<endl;
	else
		cout<<ans<<endl;
	 
	 return 0;
 }
