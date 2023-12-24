#include<stdio.h>
int main(){ 
    float cpu,b;
    int u;
    scanf("%d",&u);
    if(u>=600){
        cpu=2.0;
    }
    else if(u>=400){
        cpu=1.8;
    }
    else if(u>=200){
        cpu=1.5;
    }
    else
    {
        cpu=1.2;
    }
    b=cpu*u;
    float sc;
    if(b>=400)
    {
        sc=b*0.15;
    }
    else
    {
        sc=100;
    }
    printf("%0.2f",b+sc);
}