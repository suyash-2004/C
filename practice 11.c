#include <stdio.h>
int per(int x)
{
    int i,sum=0;
    int temp;
    temp=x;

   for(i=1;i<temp   ;i++)
    {
        if(temp%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    FILE *fp,*fp1;
    int n,temp,r;
    int sum=0,i;
    printf("enter the limit:");
    scanf("%d",&n);
    fp=fopen("input.txt","w+");
    printf("enter the content in the file\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&temp);
        putw(temp,fp);
    }
    rewind(fp);
    fp1=fopen("output.txt","w+");
    while((temp=getw(fp))!=EOF)
    {
        r=per(temp);
        if(r==1)
        {
            putw(temp,fp1);
        }
    }
    rewind(fp1);
    fclose(fp);
    while((temp=getw(fp1))!=EOF)
    {
        printf("%d\n",temp);
    }
    fclose(fp1);

}
