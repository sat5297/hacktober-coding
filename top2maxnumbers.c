// TOP 2 MAXIMUM NUMBERS

#include<stdio.h>
int main()
{
int a[10],largest,smallest,secondLargest,i;
i=0;
while(i<=9)
{
printf("Enter a number:");
scanf("%d",&a[i]);
i++;
} 

largest=a[0];
i=1;
while(i<=9)
{
if(a[i]>largest)
{
largest=a[i];
}
i++;
}

smallest=a[0];
i=1;
while(i<=9)
{
if(a[i]<smallest)
{
smallest=a[i];
}
i++;
}
if(largest==smallest)
{
printf("All the numbers are same");
}
else
{
secondLargest=smallest;
i=0;
while(i<=9)
{
if(a[i]>secondLargest && a[i]<largest)
{
secondLargest=a[i];
}
i++;
}
printf("Top 2 max numbers in array are:%d %d",largest,secondLargest);
}
return 0;
}