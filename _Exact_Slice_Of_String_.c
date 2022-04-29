#include<stdio.h>
int main()
{
    char str[100];
    int n,i,m;
    scanf("%[^
]s",str);
    scanf(" %d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%c",str[i]);
    }
}