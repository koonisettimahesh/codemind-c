#include<stdio.h>
int main()
{
    int i,a,b,r,x;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        r=i*i;
        x=i*i*i;
        printf("%d %d %d
",i,r,x);
    }
}