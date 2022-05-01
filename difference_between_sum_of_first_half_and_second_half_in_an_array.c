#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,arr[100],i,sum2=0,j,sum1=0;
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 for(i=0;i<n/2;i++)
	 {
	     sum1=sum1+arr[i];
	 }
	 for(i=n/2;i<n;i++)
	 {
	     sum2=sum2+arr[i];
	 }
	 sum=abs(sum1-sum2);
	 printf("%d",sum);
	
}