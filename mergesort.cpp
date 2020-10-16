#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int start,int mid,int end){

int temp[end-start+1];
int i=start,j= mid+1;
int k=0;

while(i<=mid && j<=end){

    if(arr[i]<arr[j]){

        temp[k]=arr[i];
        k++;i++;
    }
    else{

        temp[k]= arr[j];
        k++;
        j++;
    }
}

while(i<=mid)
{
    temp[k]= arr[i];
    k++;i++;
}

while(j<=end){

    temp[k]= arr[j];
    k++;
    j++;
}

    
}
void merge_sort(int arr[],int l,int r){

if(l<r){
int m= l+(r-l)/2;
merge_sort(arr,l,m);
merge_sort(arr,m+1,r);
merge(arr,l,m,r);
}
}



int main(){

    int n;
    cin>>n;
int arr[n];

for(int i=0;i<n;i++){

    cin>>arr[i];
}

merge_sort(arr,0,n-1);
for(int i=0;i<n;i++){

    cout<<arr[i];
}


}