#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

map<int, int> mp;
mp.insert(pair<int, int>(6,20));
mp.insert(pair<int, int>(1,23));
mp.insert(pair<int, int>(2,21));
mp.insert(pair<int, int>(3,24));
mp.insert(pair<int, int>(6,12));
mp.insert(pair<int, int>(6,13));
mp.insert(pair<int, int>(5,26));

map<int,int> :: iterator itr;

//mp.erase(22);
//mp.erase(mp.begin(),mp.find(23));
cout<<"\n the map is "<<endl;
cout<<"\tKey"<<'\t'<<"Value"<<endl;
for(itr= mp.begin();itr!= mp.end();++itr)

{
cout<<'\t'<<itr->first<<'\t'<<itr->second<<endl;
}

return 0;
}
