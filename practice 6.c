#include<stdio.h>
int fact(int num);
void main()
{
    FILE *fp,*fp1;
    int i,n,temp;
    fp = fopen("input.txt","w+");
    fp1 = fopen("fact.txt","w");
    printf("Enter limit : ");
    scanf("%d",&n);
    printf("Enter in the file : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        putw(temp,fp);
    }
    rewind(fp);
    while((temp=getw(fp))!=EOF)
    {
        putw(fact(temp),fp1);
    }
}
int fact(int num)
{
    int fact = 1;
    for(int i=num;i>0;i--)
    {
        fact = fact * i;
    }
    return fact;
}
