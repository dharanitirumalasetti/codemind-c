#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0&&A[i-1]%2!=0&&A[i+1]%2!=0)
        {
            count++;
        }
    }
    printf("%d",count);
}