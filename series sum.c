/*1+2/2!+3/3!+4/4!.........n/n!*/
#include<stdio.h>
float fact(int);
void main()
{
    int n,i;
    float sum=0;
    printf("Enter the limit of series : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + (i/fact(i));
    }

    printf("%f",sum);
}

float fact(int num)
{
    int fct = 1,i=1;

    while(i<=num)
    {
        fct = fct * i;
        i++;
    }
    return fct;
}
