#include<stdio.h>
int main()
{
    int n,d,p=1,s=0,ans=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        p=p*d;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    ans=p-s;
    printf("%d",ans);
}