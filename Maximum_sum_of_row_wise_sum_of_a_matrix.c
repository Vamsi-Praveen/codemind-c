#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],Sum;
    int maxsumrow=0,maxsum =0;
    scanf("%d %d", &i, &j);
    for(r=0;r<i;r++)
    {
        for(c=0;c<j;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<i;r++)
    {
        Sum = 0;
        for(c=0;c<j;c++)
        {
            Sum=Sum+a[r][c];
        }
        if(Sum > maxsum)
        {
         maxsum = Sum;
         maxsumrow = r;
      }
        //printf("%d 
", Sum );
    }
    printf("%d",maxsum);
    
    return 0;
}