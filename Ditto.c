#include<stdio.h>
int check1(int x,int y,int p)
{
    if(y<=0)
    {
        return 0;
    }
    if(x==y){
        return 1;
    }
    return check1(x+p,y-p,p);
    
}
int check2(int x,int y,int p)
{
    if(x<=0)
    {
        return 0;
    }
    if(x==y){
        return 1;
    }
    return check2(x-p,y+p,p);
    
}
int main(){
    int x,y,p;
    scanf("%d %d %d",&x,&y,&p);
    if(check1(x,y,p)||check2(x,y,p))
    printf("YES");
    else
    printf("NO");
    
}