#include<stdio.h>
int powr(int,int);
void main()
{
    int num,p;

    printf("Enter a number  and its power : ");
    scanf("%d%d",&num,&p);

    printf("%d",powr(num,p));
}

int powr(int n,int pwr)
{
    int i,res=1;
    for(i=0;i<pwr;i++)
    {
        res = res * n;
    }
    return res;
}

