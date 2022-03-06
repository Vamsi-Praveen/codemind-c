#include<stdio.h>
int main()
{
    int n,i,j,p=1,arr[100],out[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                p=p*arr[j];
            }
        }
        out[i]=p;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",out[i]);
    }
}