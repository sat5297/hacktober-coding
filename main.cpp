#include <bits/stdc++.h>
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
			if(max<h[i])  //5 2 3 7 9 8 11
				{
					max = h[i];
					count = count+1;
				}
		}
		cout<<count+1<<endl;
	}
	 return 0;
 }

