#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int a,b,g,lcm;
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    lcm=(a*b)/g;
    printf("%d",lcm);
}