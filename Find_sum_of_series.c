#include<stdio.h>
int main()
{
    float i,n;
    float res,p=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        res=(1/(i));
        p=p+res;
    
    
    }
    printf("%.2f",p);

}