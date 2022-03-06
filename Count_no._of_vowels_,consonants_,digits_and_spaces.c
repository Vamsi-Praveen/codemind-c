#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int v=0,c=0,d=0,sp=0,i,len;
    scanf("%[^
]s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            sp++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            d++;
        }
        else if(s[i]=='a'|| s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'||s[i]=='A'|| s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            v++;
        }
        else if((s[i]>='a' && s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            c++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",sp);
}