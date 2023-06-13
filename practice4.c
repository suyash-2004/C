#include<stdio.h>
void main()
{
    int c=0;
    char temp;
    FILE *fp;
    fp = fopen("file.txt","w+");
    printf("Enter the file contents : ");
    while((temp=getchar())!=EOF)
    {
        putc(temp,fp);
    }
    rewind(fp);
    while((temp=getc(fp))!=EOF)
    {
        if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
            c++;
    }
    printf("%d",c);
}
