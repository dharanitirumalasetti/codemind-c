#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n*n;
    int last,sum=0;
    while(s!=0)
    {
        last=s%10;
        sum=sum+last;
        s=s/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}