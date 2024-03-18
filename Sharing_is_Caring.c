#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=((b*(b+1))/2.0)-b;
    d=a-c;
    if(d>=b){
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}