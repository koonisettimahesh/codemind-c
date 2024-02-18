#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^
]",s);
    int i,max=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
        }
    }
    printf("%c",max);
    
}