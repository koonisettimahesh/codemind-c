#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c],s1=0,s2=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                s1+=a[i][j];
            }
            else
            {
                s2+=a[i][j];
            }
        }
    }
    printf("%d %d",s1,s2);
    
    

}