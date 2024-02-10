#include<stdio.h>
int main(){
    int n,i,j,c;
    scanf("%d%d",&n,&c);
    int a[n][c],sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
            
        
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
            
        sum+=a[i][j];
        }
    }
    printf("%d",sum);
}