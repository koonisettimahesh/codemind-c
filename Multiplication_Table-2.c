#include<stdio.h>
int main()
{
    int a,i,n,p;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        p=a*i;
        printf("%d x %d = %d
",a,i,p);
    }
}