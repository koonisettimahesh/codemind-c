#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int f1=0,f2=1,f3;
    for(i=1;i<=n;i++)
    {
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
}