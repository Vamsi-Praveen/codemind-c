#include<stdio.h>
int main()
{
    int arr[1000],n,j,i,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(i=n;i>=0;i--)
    {
        if(arr[i]==k)
        {
            printf("%d",i);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("-1 -1");
    }
}