#include<stdio.h>
int main(){
    char s[100],s1[100],s2[100];
    scanf("%[^
]",s);
    int i,len=0,flag=0;
    for(i=0;s[i]!=NULL;i++)
    {
        s2[i]=s[i];
        len++;
    }
    for(i=len-1;i>=0;i--)
    {
        s1[len-(1+i)]=s[i];
    }
    for(i=0;s[i]!=0;i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
        
    }
    if(flag)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    
}