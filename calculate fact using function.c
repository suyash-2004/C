/*Calculate fact using functions*/
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Factorial of %d is : %d ",n,fact(n));
}

int fact(int n)
{
    int i,res=1;
    for(i=1;i<=n;i++)
    {
        res = res * i;
    }
    return res;
}
