#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    int t=n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",t+j);
        }
        printf("
");
        t--;
    }
}