#include<stdio.h>
int main()
{
    int i=1,n,r;
    scanf("%d%d",&n,&r);
    while(i<=r)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i++;
    }
}