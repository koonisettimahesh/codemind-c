#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>50||b>50||c>50)
    {
    
        if(a>50)
       {
        printf("Gryffindor");
       }
    else if(b>50)
         {
        printf("Slytherin");
    }
    else 
    {
        printf("Hufflepuff");
    }
        
    }
    else
    printf("NOTA");
}