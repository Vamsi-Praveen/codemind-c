#include<stdio.h>
int main()
{
    int l,b,w,area,res,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=w+w || b<=w+w)
    {
        printf("Impossible");
    }
    else
    {
        area=l*b-((l-2*w)*(b-2*w));
        res = area*c;
        printf("%d",res);
        
    }
}