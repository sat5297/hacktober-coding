#include <bits/stdc++.h>
/*

You are standing facing N pillars of different heights with ith pillar having height h[i]. you try to see all the possible pillars.
you want to know that how many buildings will he be able to see in the range [L, R] both inclusive.

*/


using namespace std;
 int main()
 {
	 int n;
	 cin>>n;
	 int h[n];
	 for(int i =0;i<n;++i)
		 cin>>h[i];
	size_t q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		int count = 0;
		int max = h[l];
		for(int i = l;i<=r;++i)
		{
			if(max<h[i])  
				{
					max = h[i];
					count = count+1;
				}
		}
		cout<<count+1<<endl;
	}
	 return 0;
 }

