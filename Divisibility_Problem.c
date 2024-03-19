#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    i=0;
    while(a%b!=0)
    {
        a++;
        i++;
        
    }
    printf("%d",i);
    
}