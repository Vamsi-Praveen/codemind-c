#include<stdio.h>
int main()
{
    int t,s,b,bytes,cap;
    scanf("%d%d%d",&s,&t,&b);
    bytes=2*s*t*b*512;
    cap=bytes/1024;
    printf("%dKB",cap);
}