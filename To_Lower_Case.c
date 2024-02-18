#include<stdio.h>
int main(){
    char s[100];
    scanf("%[^
]",s);
    int i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    s[i]=NULL;
    printf("%s",s);
}