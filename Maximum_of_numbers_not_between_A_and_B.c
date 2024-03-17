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
    int A,B,max=0;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(arr[i]<A||arr[i]>B)
        {
            if(max==0||max<arr[i])
            {
                max=arr[i];
            }
        }
    }
    if(max)
    printf("%d",max);
    else
    printf("-1");
}