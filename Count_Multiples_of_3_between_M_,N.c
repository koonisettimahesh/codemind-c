#include<stdio.h>
int main()
{
    int i,c=0,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
       if(i%3==0)
       {
           c=c+1;
       }
       
    }
    printf("%d",c);
}