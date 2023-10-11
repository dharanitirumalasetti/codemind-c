#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<3)
    {
        printf("LIGHT");
    }
    if(x>=3&&x<7)
    {
        printf("MODERATE");
    }
    if(x>=7)
    {
        printf("HEAVY");
    }
    
}