#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;)
    {
    
        if(a[i]%2==0)
        {
            flag=1;
            break;
        }
        i+=2;
        
    }
    if(flag)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }

}