#include<stdio.h>
int main()
{
    int n,p,q,a[100],i,sum=0,c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p  && a[i]<=q)
        {
            if(a[i]>max)
            {
                max=a[i];
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("%d",max);  
    }
    else
    {
        printf("-1");
    }
   
    
}