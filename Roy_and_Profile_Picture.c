#include<stdio.h>
int main()
{
    int l,w,h,t,i;
    scanf("%d",&l);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&w,&h);
        if(w<l||h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if((w>l||h>l) && w!=h)
        {
            printf("CROP IT
");
        }
        else if(w==h)
        {
            printf("ACCEPTED
");
        }
    }
    
}