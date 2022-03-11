#include<stdio.h>
int main()
{
    int m,n,x[100][100],i,j,sum=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+x[i][j];
        }
    }
    printf("%d",sum);
}