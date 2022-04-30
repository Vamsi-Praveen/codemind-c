#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,d,c=0,arr[100],i=0,temp,s=0,r=0,j;
    scanf("%d%d",&n,&m);
    temp=n;
    while(n>0)
    {
        d=n%10;
        arr[i]=d;
        n=n/10;
        c++;
        i++;
    }
    for(j=0;j<m;j++)
    {
        s=(s*10)+arr[j];
    }
    for(j=i-1;j>i-m-1;j--)
    {
        r=(r*10)+arr[j];
    }
    n=0;
    while(s)
    {
        n=(n*10)+(s%10);
        s=s/10;
    }
    printf("%d",abs(n-r));
    
}