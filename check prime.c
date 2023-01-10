#include<stdio.h>
void main()
{
    int n,i,flag = 1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }

    }
    if(flag == 1)
        printf("Prime");
    else
        printf("not prime");
}
