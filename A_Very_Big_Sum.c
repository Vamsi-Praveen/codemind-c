#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n,*arr,i,sum=0;
    scanf("%lld",&n);
    arr=(long long int *)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%lld",sum);
}