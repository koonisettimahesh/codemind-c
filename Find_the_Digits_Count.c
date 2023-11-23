#include<stdio.h>
int main()
{
    int i=1,n,c=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        c=c+i;
        n=n/10;
    
    }
    printf("%d",c);
}