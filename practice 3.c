#include<stdio.h>
void main()
{
    int i;
    char temp;
    FILE *fp=NULL;
    fp = fopen("file.txt","w+");
    printf("Enter the file contents : ");
    while((temp = getchar())!=EOF)
    {
        putc(temp,fp);
    }
    rewind(fp);
    while((temp=getc(fp))!=EOF)
    {
        printf("%c",temp);
    }
}
