#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && prime(i)==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
}