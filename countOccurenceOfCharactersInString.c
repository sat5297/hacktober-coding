#include<stdio.h>
#include<string.h>
int main()
{
char x[1000],a[1000];
int lookFor,y,i,found,count,lengthOfString;
printf("Enter a string:");
fgets(a,1000,stdin);
a[strlen(a)-1]='\0';
lengthOfString=strlen(a);
y=0;
while(y<lengthOfString)
{
if(a[y]>=65 && a[y]<=90) x[y]=a[y]+32;
else x[y]=a[y];
y++;
}
y=0;
while(y<lengthOfString)
{
lookFor=x[y];
i=0;
found=0;
while(i<y) //if a character is already counted then this will not count it again
{
if(x[i]==lookFor)
{
found=1;
break;
}
i++;
}

if(found==0)
{
count=1;
i=y+1;
while(i<lengthOfString)
{
if(x[i]==lookFor)  count++;
i++;
}
if(count==1) printf("%c is found 1 time\n",lookFor);
else printf("%c is found %d times\n",lookFor,count);
}
y++;
}
return 0;
}