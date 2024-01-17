#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    float sum=0;
    for(i=1;i<=a;i++)
    {
        sum=sum+1/(1.0*i);
    }
    printf("%.2f",sum);
}