#include<stdio.h>
int main()
{
    int i,n,a,b,p;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}