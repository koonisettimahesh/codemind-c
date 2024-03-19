#include<stdio.h>
int main(){
    int a,b,n,t;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("0");
        return 0;
    }
    if(a<b)
    {
       n=(b-a-1)/10;
       printf("%d",n+1);
    }
    else
    {
        n=(a-b-1)/10;
        printf("%d",n+1);
    }
}