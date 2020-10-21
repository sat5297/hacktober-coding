#include<stdio.h>
#include<string.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    char s[n];
    for(int i=0;i<n;i++){
        scanf("%s",&s[i]);
    }
    for(int i=0;i<n;i++){
        if( strcmp(s[i], "x++")){
            x++;
        }
        else if(s[i]=='++x'){
            ++x;
        }
        else if(s[i]=='--x'){
            --x;
        }
        else{
            x--;
        }
    }
    
    printf("%d",x);
    return 0;
}