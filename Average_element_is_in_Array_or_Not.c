#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,avg,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
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