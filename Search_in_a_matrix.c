#include<stdio.h>
int main()
{
    int i,r,c,j;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int ele,count=0;
    scanf("%d",&ele);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j]==ele)
            count++;
        }
    }
    if(count==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}