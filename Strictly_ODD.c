#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n,i,c=0;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            if(i%2!=0)
            {
                c++;
            }
            else
            {
                c=0;
                break;
            }
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}