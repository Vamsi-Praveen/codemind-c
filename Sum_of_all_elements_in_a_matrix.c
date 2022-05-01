#include<stdio.h>
int main()
{
    int n,i,j,r,c,arr[200][200];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0,sum1=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}