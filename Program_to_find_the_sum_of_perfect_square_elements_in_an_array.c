#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],sq,Sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=int(sqrt(arr[i]));
        if(sq*sq==arr[i])
        {
            Sum=Sum+arr[i];
        }
    }
    printf("%d",Sum);
}