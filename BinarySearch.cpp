/*
Time complexity: O(log n)
Contributor: Deepanshu Jindal(https://github.com/ultimatecoder2)
*/

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int low,int high,int el)
{
    if(low>high)
    {
        return -1;
    }

    int mid  = (low+high)/2;
    if(arr[mid] == el)
    {
        return mid;
    }
    if(arr[mid]<el)
    {
        return BinarySearch(arr,mid+1,high,el);
    }
    if(arr[mid]>el)
    {
        return BinarySearch(arr,low,mid-1,el);
    }

}
int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the element that you want to find"<<endl;
    int el;
    cin>>el;
    int index =BinarySearch(arr,0,n-1,el);
    if(index<0)
        cout<<"Element is not present in the array"<<endl;
    else
    {
        cout<<"Element is present at "<<index + 1<<" position"<<endl;
    }
    return 0;
}
