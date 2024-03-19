#include<stdio.h>
int main(){
    int a,n,b,c,r;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("0");
        return 0;
    }
    if(a<b)
    {
        n=b-a;
    }
    else
    {
        n=a-b;
    }
    r=n%10;
    c=n/10;
    if(r!=0)
    {
        printf("%d",c+1);
    }
    else
    {
        printf("%d",c);
    }
}