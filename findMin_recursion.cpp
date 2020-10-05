#include <iostream>
using namespace std;

int findMin(int a[], int size)
{
    if (size==0)
        return a[0];
    else
        return min(a[size-1], findMin(a, size - 1));
}

int main()
{
    int numbers[] = {5, 0, 2, 4, 3, 1, 9};
    int result = findMin(numbers, 7);
    cout << result;
}
