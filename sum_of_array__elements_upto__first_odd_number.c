#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[100],i,c=0,j,d=0;
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 for(i=0;i<n;i++)
	{
	    if(arr[i]%2==0)
	    {
	        sum=sum+arr[i];
	    }
	    else
	    {
	        break;
	    }
	}
	printf("%d",sum);
}