#include<stdio.h>
void main()
{
    int i,n,flag;
    for(i=2;i<1000;i++)
    {
        flag = 0;
        n= 2;
        while(n<i)
        {
            if(i%n==0)
            {
                flag = 1;
                break;
            }
            else
            {
                n++;
            }
        }
        if(flag == 0)
            printf("%d,",i);
    }
}
