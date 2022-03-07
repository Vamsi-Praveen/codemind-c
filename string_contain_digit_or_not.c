#include<stdio.h>
int main()
{
    char x[100];
    int i,c=0;
    scanf("%[^
]s",x);
    for(i=0;x[i]!=NULL;i++)
    {
        if(x[i]>='0'&&x[i]<='9')
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",c);
    }
    
}