#include<stdio.h>
int main(){
    int n,c,r;
    scanf("%d",&n);
    r=n%5;
    c=n/5;
    if(r!=0)
    {
        printf("%d",c+1);
    }
    else
    {
        printf("%d",c);
    }
}