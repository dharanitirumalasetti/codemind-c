#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum++;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
}