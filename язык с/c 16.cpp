#include <stdio.h>
void strncpy2(char *s,char *t,int n);

main()
{
    char s[10],t[]="languagec ";
    int n=5;
    strncpy2(s,t,n);
    printf("%s",s);
}

void strncpy2(char *s,char *t,int n)
{
    char *tempt;
    tempt=t;
    while(*t!='\0'&& t<tempt+n)
        *s++=*t++;
    *s='\0';
}
