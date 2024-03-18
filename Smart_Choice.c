#include<stdio.h>
int main(){
    int a,b,res1,res2;
    scanf("%d %d",&a,&b);
    res1=(500-(a*2))+(1000-((a+b)*4));
    res2=(1000-(b*4))+(500-((a+b)*2));
    if(res1>res2)
    printf("%d",res1);
    else
    printf("%d",res2);
}