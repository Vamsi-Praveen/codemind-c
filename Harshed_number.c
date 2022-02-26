#include<stdio.h>
int main()
{
    int n,sum=0,temp,d;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}