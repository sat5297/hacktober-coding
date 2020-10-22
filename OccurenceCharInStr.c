#include <string.h>
 
 
int check(char *s,char c)
{
    static int i=0,count=0;
    if(!s[i])
    {
    	return count;
    }
    else
    {
        if(s[i]==c)
    	{
  			count++;
		}
		i++;
		check(s,c);
	}
	 
    
 	
 	 
 	
}
int main()
{
    char s[1000],c;
	int count=0;  
  
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    count=check(s,c);
    printf("character '%c' occurs %d times \n ",c,count);
 
	return 0;
 }