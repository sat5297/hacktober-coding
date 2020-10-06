#include<stdio.h>
int sumofsquares(int n)
{
    return (n * (n + 1) *  (2 * n + 1)) / 6;
}
int main()
{
    int n;
    printf("Please enter the number of terms : ");
    scanf("%d",&n);
    printf("The sum of squares of the first n natural numbers is : %d\n",sumofsquares(n));
}