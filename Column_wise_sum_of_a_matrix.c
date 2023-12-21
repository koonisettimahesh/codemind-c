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
    int k,s;
    for(j=0;j<c;j++)
    {
        s=0;
        for(k=0;k<r;k++)
        {
            s=s+a[k][j];
        }
        printf("%d ",s);
        
    }
}