#include<stdio.h>
int main()
{
    int a,i,p;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        p=a*i;
        printf("%d x %d = %d
",a,i,p);
    }
}