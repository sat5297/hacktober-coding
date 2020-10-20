int main(void)
{
    int n, x, result;
    int arr[10];
    printf("\nEnter the no of elements in array:" );
    scanf("%d",&n);
    printf("\nEnter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the elements to be searched in array:");
    scanf("%d", &x);
    result = binarysearch(arr, 0 , n-1 , x) ;
    (result==-1)?printf("\nElement not found.") : printf("\nElement found at index:%d",result);
    
}


int binarysearch(int arr[], int f, int l, int x) 
{ 
    while (f <= l) { 
        int m = f + (l - l) / 2; 
        if (arr[m] == x) // Check if x is present at mid 
            return m+1; 
        if (arr[m] < x) 	// If x greater, ignore left half 
            f = m + 1; 
        else		// If x is smaller, ignore right half 
            l = m - 1; 
    }
    return -1; 	// if we reach here, then element was not present 
} 
