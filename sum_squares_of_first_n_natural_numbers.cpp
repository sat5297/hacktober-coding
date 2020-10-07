#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<"Input the value for 'n': ";  //Taking input for the value of 'n'
    cin>>n;
    int sum=0;
    for(int i=1;i<n+1;i++)
    {
        sum += (i*i);    //Mathematical Logic for calculating sum of squares of first n natural numbers.
    }
    cout<<"The sum will be: "<<sum;
    return 0;
}
