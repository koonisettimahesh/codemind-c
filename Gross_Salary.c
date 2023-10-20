#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float g=n+((n*80)/100.0)+((n*20)/100.0);
    float f=n+((n*90)/100.0)+((n*25)/100.0);
    float h=n+((n*95)/100.0)+((n*30)/100.0);
    if(n<=10000)
    {
        printf("%.2f",g);
    }
    else if(n<=20000)
    {
        printf("%.2f",f);
    }
    else
    {
        printf("%.2f",h);
    }
}