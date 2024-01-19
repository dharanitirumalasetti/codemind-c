#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg=0,s=0;
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        s++;
    }
    printf("%d",s);
}