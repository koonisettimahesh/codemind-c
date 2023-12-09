#include<stdio.h>
#include<math.h>
void hyp();
int main()
{
    hyp();
}
void hyp()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float c=sqrt(pow(a,2)+pow(b,2));
    printf("%.2f",c);
}