#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int n1=0,n2=0;
    for(i=1;i<a;i++){
        if(a%i==0)
        n1=n1+i;
    }
    for(j=1;j<b;j++){
        if(b%j==0)
        n2=n2+j;
    }
    if(a==n2&&b==n1)
    printf("Amicable");
    else
    printf("Not Amicable");
    
}