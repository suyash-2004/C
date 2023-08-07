#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int l,len;
    strcpy(s,"triangle");
    len=strlen(s);
    char *p;
    p=s;
    for(l=0;*(p)!='\0';l++)
    {
        printf("%c",*(++p));
    }

}
