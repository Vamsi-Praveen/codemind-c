#include<stdio.h>
int main()
{
    int t,n,i,temp,c=0,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%d",&n);
        temp=n;
        while(n!=0)
        {
            d=n%10;
            c=(c*10)+d;
            n=n/10;
        }
        n=temp;
        if(n==c)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
    
}