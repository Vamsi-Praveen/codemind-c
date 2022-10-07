#include<stdio.h>
int check(int n)
{
    int rev=0,temp;
    temp=n;
    while(temp>0)
    {
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    return rev;
}
int palin(int n)
{
    if(check(n)==n)
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
    int n,res;
    scanf("%d",&n);
    n=n+check(n);
    while(1)
    {
        if(palin(n))
        {
            printf("%d",n);
            break;
        }
        else
        {
            n=n+check(n);
        }
    }
}