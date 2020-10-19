#include <bits/stdc++.h>
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
