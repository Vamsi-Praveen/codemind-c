#include<stdio.h>
#include<ctype.h>
int main()
{
    char x[100],chr;
    int i=0;
    scanf("%[^
]s",x);
    while(x[i])
    {
        chr=x[i];
        printf("%c",tolower(chr));
        i++;
    }
    
}