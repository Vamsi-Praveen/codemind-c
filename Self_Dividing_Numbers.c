#include<stdio.h>
int isself(int n)
{
    int temp=n;
    int k=0,c=0,d;
    while(n!=0)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        else if(temp%d==0)
        {
            c+=1;
        }
        k+=1;
        n=n/10;
    }
    if(c==k)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(isself(i))
        {
            printf("%d ",i);
        }
    }
}