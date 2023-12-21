#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int k;
    for(i=0;i<r;i++)
    {
        int s=0;
        for(k=0;k<c;k++)
        {
           s=s+a[i][k];
            
        }
        printf("%d ",s);
    }
}