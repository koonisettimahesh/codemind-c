#include<stdio.h>
int main(){
    int a,b,res;
    scanf("%d %d",&a,&b);
    res=(b*(b+1))/2.0;
    if(a>=res)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}