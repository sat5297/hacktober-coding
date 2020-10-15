#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[100];
	char H[26]={0};
	printf("Enter the string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		H[str[i]-97]+=1;
	}
	for(i=0;i<26;i++)
	{
		if(H[i]>1)
		{
			printf("%c is printed %d times\n",i+97,H[i]);
		}
	}
	
}
