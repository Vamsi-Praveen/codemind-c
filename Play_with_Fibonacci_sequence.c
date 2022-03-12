#include<stdio.h>
void fun_fib(int n)
{
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    c=a+b;
    for(i=3;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun_fib(n);
}