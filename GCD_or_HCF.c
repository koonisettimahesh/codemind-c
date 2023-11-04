//using while loop
#include<stdio.h>
int main()
{
    int i=1,a,b,l,h;
    scanf("%d%d",&a,&b);
    while(i<=b)
    {
        l=i*a;
        h=(a*b)/l;
        i++;
        if(l%b==0)
        {
            printf("%d",h);
            break;
        }
    }
}