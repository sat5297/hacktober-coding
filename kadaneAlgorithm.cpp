#include <bits/stdc++.h>

using namespace std;

//Kadane's algorithm implementation for 
//calculating the max subarray sum of a given array

int maxSubArraySum(int a[], int size) { 

    int maxSoFar = a[0]; 
    int currentMax = a[0]; 
    
    for (int i = 1; i < size; i++) 
    { 
        currentMax = max(a[i], currentMax+a[i]); 
        maxSoFar = max(maxSoFar, currentMax); 
    } 
    return maxSoFar; 
} 

int main() {
    
        //getting the user input 
        //the first line contains the size of the array
        //the second line contains space separated elements of the array
        int size; 
        int arr[size + 1];
        
        cin >> size; 
        for( int i = 0; i < size; i++ ) 
            cin >> arr[i];
            
        int maxSum = maxSubArraySum(arr, size);
        cout << "The maximum contiguous sum is: " << maxSum << endl;
        
    
    return 0;
}
