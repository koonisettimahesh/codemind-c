#include<stdio.h>
int main()
{
    int i=1,n,r,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
        
    }
    printf("%d",rev);
    
}