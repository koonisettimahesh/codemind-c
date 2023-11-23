#include<stdio.h>
int main()
{
    int i=1,n,r,s,t;
    scanf("%d",&n);
    t=n%10;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        
    }
    if(n==0)
    {
        s=r+t;
        printf("%d",s);
    }
    
    
        
}