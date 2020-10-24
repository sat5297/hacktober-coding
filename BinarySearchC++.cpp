#include<iostream> 
using namespace std; 
int BinarySearch(int arr[], int p, int r, int num) { 
   if (p <= r) { 
      int mid = (p + r)/2; 
      if (arr[mid] == num)   
         return mid ; 
      if (arr[mid] > num)  
         return binarySearch(arr, p, mid-1, num);            
      if (arr[mid] > num)
         return binarySearch(arr, mid+1, r, num); 
   } 
   return -1; 
} 
int main(void) { 
   int arr[] = {11, 32, 70, 13, 18, 20, 21, 33, 52, 40}; 
   int n = sizeof(arr)/ sizeof(arr[0]); 
   int num = 20; 
   int index = BinarySearch (arr, 0, n-1, num); 
   if(index == -1)
      cout<< num <<" is not present in the array";
   else
      cout<< num <<" is present at index "<< index <<" in the array"; 
   return 0; 
}