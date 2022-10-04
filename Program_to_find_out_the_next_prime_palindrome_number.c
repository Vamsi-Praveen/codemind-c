#include<stdio.h>
#include<math.h>
int palin(int n)
{
    int sum=0,temp;
    temp=n;
    while(temp>0)
    {
        sum=sum*10+(temp%10);
        temp=temp/10;
    }
    if(n==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int prime(int n)
{
    if(n==0 || n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1; 
    }
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<20*n;i++)
    {
        if(prime(i) && palin(i))
        {
            printf("%d",i);
            break;
        }
    }
}