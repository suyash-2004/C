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

                break;
            }
            else
            {
                flag = 1;
                n++;

            }
        }
        if(flag == 1)
            printf("%d,",i);
    }
}
