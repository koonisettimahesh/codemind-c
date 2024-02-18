#include<stdio.h>
int main(){
    char s[100],ch='0';
    scanf("%[^
]",s);
    int i,sum=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            sum=sum+s[i]-ch;
        }
    }printf("%d",sum);

    
}