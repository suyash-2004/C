#include<stdio.h>
void main()
{
    FILE *fp;
    int c=0;
    char temp,ch;
    fp=fopen("file.txt","w+");
    printf("Enter the file contents :");
    while((temp = getchar())!=EOF)
    {
        putc(temp,fp);
    }
    rewind(fp);
    getchar();
    printf("Enter the character to search : ");
    scanf("%c",&ch);
    while((temp = getc(fp))!=EOF)
    {
        if(temp == ch)
        {
            c++;
        }
    }
    printf("%d",c);
}
