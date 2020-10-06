//Implementing a data structure, array(one-dimensional) and to find the sum of all array elements, of all even and odd elements separately as well.
#include <iostream>
using namespace std;
int main() {
    int i,a[100],n,sum=0,evensum=0,oddsum=0;
    cout << "Enter array size\n";
    cin>>n;
    cout<<"\nEnter elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]%2!=0)
            oddsum+=a[i];
        else
            evensum+=a[i];
    }
    cout<<"\nSum of all the elements is: "<<sum;
    cout<<"\nSum of all the even elements is: "<<evensum;
    cout<<"\nSum of all the odd elements is: "<<oddsum;
    return 0;
}