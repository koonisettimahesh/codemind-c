#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i,t,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}