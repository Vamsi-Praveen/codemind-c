#include<stdio.h>
int main()
{
    int n,d,p=1,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        d=n%10;
        p=p*d;
        n=n/10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}