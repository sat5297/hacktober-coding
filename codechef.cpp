#include<bits/stdc++.h>
typedef long long int ll;
#define io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fr(i,l,r) for(ll i=l;i<r;i++)
#define lop ll t;cin>>t;while(t--)
#define maxn 50001
#define k 31
using namespace std;
ll st[maxn][k] ;
int main(){
    io;
    lop{
        ll n , z ; cin >> n >> z ;
        ll mp[100001] = {0} ;
        ll ans = 0 ;
        bool b = false ;
        fr(i,0,n){
           ll a ; cin >> a ;
           mp[a]++ ;
        }
        for(ll i = 10000 ; i >= 1 ; i--){
            while(mp[i] != 0){
                z -= i ;
                mp[i]-- ;
                ans++ ;
                mp[i / 2]++ ;
                if(z <= 0){
                    b = true ;
                    break ;
                }
            }
            if( b == true){
                break ;
            }
        }
        if(b == true) cout << ans << "\n" ;
        else cout << "Evacuate" << "\n" ;
    }
    return 0 ;
}
