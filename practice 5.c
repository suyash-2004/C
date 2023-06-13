#include<stdio.h>
void main()
{
    FILE *fp,*fp1,*fp2;
    int n,i;
    int temp;
    fp = fopen("input.txt","w+");
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        putw(temp,fp);
    }
    rewind(fp);
    fp1=fopen("even.txt","w");
    fp2=fopen("odd.txt","w");
    while((temp = getw(fp))!=EOF)
    {
        if(temp%2==0)
        {
            putw(temp,fp1);
        }
        else
        {
            putw(temp,fp2);
        }
    }

}
