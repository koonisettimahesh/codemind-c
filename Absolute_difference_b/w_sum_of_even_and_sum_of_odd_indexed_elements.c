#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,e=0,o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e+=a[i];
        }
        else
        {
            o+=a[i];
        }
    }
    int res=abs(e-o);
    printf("%d",res);
}