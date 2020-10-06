#include<iostream>
using namespace std;

int Factorial(int n){
    int f=1;
    for (int i=1;i<=n;i++) f*=i;
    return f;
}

int NCR(int n, int r){
    return Factorial(n)/(Factorial(r)*Factorial(n-r));
}

int main(){
    int n; 
    cout<<"Enter a number:";
    cin>>n;
    cout<<Factorial(n)<<endl;

    for (int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            cout<<NCR(i,j)<<" ";
        }
        cout<<endl;
    }
}
