#include<stdio.h>
void wt();
int main()
{
    wt();
}
void wt()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int z=(a*b)/(a+b);
    printf("%d",z);
}