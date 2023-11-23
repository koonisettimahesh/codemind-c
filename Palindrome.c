#include<stdio.h>
int main()
{
    int i=1,r,n,rev=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==t)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}