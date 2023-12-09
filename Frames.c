#include<stdio.h>
void rupee();
int main()
{
    rupee();
}
void rupee()
{
    int x,y,z,b;
    scanf("%d%d%d",&x,&y,&z);
    b=2*z*(y+x);
    printf("%d",b);
}