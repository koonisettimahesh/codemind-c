#include<stdio.h>
int main()
{
    int i=1,a,b,l;
    scanf("%d%d",&a,&b);
    while(i<=b)
    {
        l=i*a;
        i++;
        if(l%b==0)
        {
            printf("%d",l);
            break;
        }
    }
}