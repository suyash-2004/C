#include<stdio.h>
void main()
{
    FILE *fp,*fp2 ;
    int temp;
    int i;
    fp = fopen("input.txt","w+");
    fp2 = fopen("inpt.txt","w+");
    printf("Enter the contents of the file : ");
    while((temp=getchar())!=EOF)
    {
        putc(temp,fp);
    }
    rewind(fp);
    while((temp=getc(fp))!=EOF)
    {
        if(temp>=65 && temp <=90)
            putc(temp + 32,fp2);
        else if(temp >=97 && temp <=122)
            putc(temp - 32,fp2);
        else
            printf("#");
    }
    rewind(fp2);
    while((temp=getc(fp2))!=EOF)
    {
        printf("%c",temp);
    }
}
step 1 - start
step 2 - open file input.txt in w
