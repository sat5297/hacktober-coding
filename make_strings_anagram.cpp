#include<bits/stdc++.h>
using namespace std;
int makeAnagram(string str1, string str2){
    int n1 = str1.length();
    int n2 = str2.length();
    unordered_map<char,int>umap1;
    unordered_map<char,int>umap2;
    for(int i=0; i<n1; i++)
    {
        umap1[str1[i]]++;    
    }
    for(int i=0; i<n2; i++)
    {
        umap2[str2[i]]++;    
    }
    unordered_map<char,int>::iterator it;
    for(it=umap1.begin(); it!=umap1.end(); it++)
    {
        if(umap2.find(it->first)!=umap2.end())
        {
            if(umap2[it->first]>=it->second)
            {
                umap2[it->first] = umap2[it->first]-it->second;
                umap1[it->first] = 0;
            }
            else
            {
                umap1[it->first] = it->second - umap2[it->first];
                umap2[it->first] = 0;
            }
        }
    }
    int count=0;
    for(it=umap1.begin(); it!=umap1.end(); it++)
    {
        count+=it->second;
    }
    for(it=umap2.begin(); it!=umap2.end(); it++)
    {
        count+=it->second;
    }
    return count;
}

int main(){
	string s1, s2;
	cout<<"Enter string 1 - ";
	cin>>s1;
	cout<<"Enter string 2 - ";
	cin>>s2;
	cout<<"Number of deletions required to make both strings anagram - "<<makeAnagram(s1, s2);
}
