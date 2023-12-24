#include<stdio.h>
int main(){
    int i,t,n,m,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        if(m-k<n)
        {
            printf("NO
");
        }
        else
        {
            printf("YES
");
        }
    }
}