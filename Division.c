#include<stdio.h>
float divi(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float res=divi(a,b);
    printf("%.0f",res);
}
float divi(int a,int b)
{
    int d;
    d=a/b;
    return d;
}