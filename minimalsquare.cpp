#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int t,a,b,i,k,l;
     cin>>t;
     for(i=0;i<t;i++)
     {
          cin>>a>>b;
          if(a<=b){
               k=2*a;
               l=b;
          }
          else{
               k=2*b;
               l=a;
          }
          if(k<l){
               cout<<l*l<<endl;
          }
          else{
               cout<<k*k<<endl;
          }
     }
     return 0;
}
