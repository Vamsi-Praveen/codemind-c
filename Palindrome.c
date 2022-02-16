#include<stdio.h>
int main()
{
    int n,temp,d,s=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        s=(s*10)+d;
        n=n/10;
    }
    if(temp==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}