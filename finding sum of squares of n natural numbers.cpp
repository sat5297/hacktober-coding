//To calculate sum of squares till n number
#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter value of number till which sum is to be calculated.";
    cin>>n;
    for(i=1;i<=n;i++)
        sum+=i*i;
    cout<<"The sum of squares till the number entered is: "<<sum<<endl;
    return 0;    
}