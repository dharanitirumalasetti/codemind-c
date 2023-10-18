#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b+c>b+a&&b+c>a+c)
    {
        printf("%d",b+c);
    }
    else if(a+b>b+c&&a+b>c+a)
    {
        printf("%d",a+b);
    }
    else 
    {
        printf("%d",a+c);
    }
}