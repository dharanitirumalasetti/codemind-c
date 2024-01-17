#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    int a=1;
    for(i=1;i<=num;i++)
    {
        a=i*a;
    }
    printf("%d",a);
}