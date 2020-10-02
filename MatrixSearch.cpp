// Search Integer in Matrix

#include <bits/stdc++.h>
using namespace std;
long long matrix[1000][1000];
int n,m,x;
int main(){
    cout << "Enter the dismension of the matrix (separated by space)" << endl << ": ";
    cin >> n >> m;
    cout << "Enter the component of the matrix (separated by space)" << endl;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Find : ";
    cin >> x;
    for(int i = 1;i<=n;i++){
        for(int j= 1;j<=m;j++){
            if(matrix[i][j] == x){
                cout << x << " is found at " << i << " " << j << endl;
            }
        }
    }

}