#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    printf("%d",arr[i]);
                    
                }
            }
        }
    }
}