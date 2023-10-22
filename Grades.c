#include<stdio.h>
int main()
{
    int p,c,b,m,s;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&s);
    float n=((p+c+b+m+s)/500.0)*100;
    if(n>=90)
    {
        printf("Grade A");
    }
    else if(n>=80&&n<90)
    {
        printf("Grade B");
    }
    else if(n>=70&&n<80)
    {
        printf("Grade C");
    }
    else if(n>=60&&n<70)
    {
        printf("Grade D");
    }
    else if(n>=40&&n<60)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}