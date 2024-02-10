#include<stdio.h>
int main(){
    int r,c,i,j,t;
    scanf("%d%d",&r,&c);
    int a[r][c],flag=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&t);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==t)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
}