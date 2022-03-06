#include<stdio.h>
int main()
{
    int n,temp,d,i,x[100],ev=0,od=0,c=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        x[i]=d;
        n=n/10;
        i++;
        c++;
        
    }
    
     for(i=0;i<c;i++)
     {
         if(x[i]%2==0)
         {
             ev++;
         }
         else
         {
             od++;
         }
     }
     if(ev==c)
     {
         printf("Even");
     }
     else if(od==c)
     {
         printf("Odd");
     }
     else
     {
         printf("Mixed");
     }
}