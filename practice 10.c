#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp1,*fp2;
    char temp[100],x;
    fp1 = fopen("input.txt","w+");
    fp2 = fopen("output.txt","w+");
    printf("Enter paragraph : ");
    fgets(temp,100,stdin);
    fprintf(fp1,"%s",temp);
    rewind(fp1);
    while(fscanf(fp1,"%s",&temp)!=EOF)
    {
        if(strcmp(temp,"a")!=0 && strcmp(temp,"an")!=0 && strcmp(temp,"the")!=0)
        {
            fprintf(fp2,"%s ",temp);
        }
        else
        {
            fprintf(fp2,"%s"," ");
        }
    }
    rewind(fp2);
    while(fscanf(fp2,"%s",temp)!=EOF)
    {
        printf("%s ",temp);
    }
}
