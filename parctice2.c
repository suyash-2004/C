#include<stdio.h>
void main()
{
    FILE *fp;
    int c=0;
    char temp,ch,*p;
    p=&temp;
    fp=fopen("file.txt","w+");
    printf("Enter the file contents :");
    while((*p = getchar())!=EOF)
    {
        putc(*p,fp);
    }
    rewind(fp);
    getchar();
    printf("Enter the character to search : ");
    scanf("%c",&ch);
    while((*p = getc(fp))!=EOF)
    {
        if(*p == ch)
        {
            c++;
        }
    }
    printf("%d",c);
}
