#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("%d",c);
    }
    else
    {
        printf("0");
    }
}