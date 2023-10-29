#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m==n&&m%2==0||n%2==0)
    {
        printf("Player 1");
    }
    else if(m==n&&m%2!=0||n%2!=0)
    {
        printf("Player 2");
    }
}