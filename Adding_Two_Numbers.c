#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=add(a,b);
    printf("%d",res);
    
}
int add(int a,int b)
{
    int r;
    r=a+b;
    return r;
}