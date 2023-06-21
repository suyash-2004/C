#include<stdio.h>
void main()
{
    FILE *fp;
    int n,i;
    char temp;
    fp = fopen("input.txt","w+");
    printf("Enter limit : ");
    scanf("%d",&n);
    printf("Enter in the file : ");
    for(i=0;i<n;i++)
    {
        scanf("%c",&temp);
        putc(temp,fp);
    }
    fseek(fp,-1,1);
    while(ftell(fp)!=0)
    {
        printf("%c",getc(fp));
        fseek(fp,-2,1);
    }
    fclose(fp);
}
