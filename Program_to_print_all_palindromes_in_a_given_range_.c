#include<stdio.h>
int main()
{
    int s,e,i,temp,sum,d;
    scanf("%d%d",&s,&e);
    for(i=s;i<=e;i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
            d=temp%10;
            sum=(sum*10)+d;
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}