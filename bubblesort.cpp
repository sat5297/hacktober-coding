#include<bits/stdc++.h>
using namespace std;

void bubblesort(int *arr, int n)
{

    int isanyswapped = 0 ; //check whether array is already sorted or not
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); //stl built in function
                isanyswapped = 1; //array is not already sorted
            }
        }
        if(isanyswapped == 0)
        {
            //means array get sorted no further iterations required
            break;
        }
    }

}

int main()
{
    int arr[] = { 2, 9, 10, 11, 4, 12, 13, 15, 16, 16};
    int n = sizeof(arr) / sizeof(arr[0]); //array size
    bubblesort(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; //print sorted array
    }

}
