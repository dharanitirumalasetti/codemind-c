#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int c=2*t*s*b*512;
    int k=c/1024;
    printf("%d KB",k);
}