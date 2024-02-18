#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^
]",s);
    int i,len=0;
    for(i=0;s[i]!=NULL;i++)
    {
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}