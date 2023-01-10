/*wap to calculate hcf and lcm using functions*/
#include<stdio.h>
int hcflcm(int,int);
void main()
{
    int n1,n2;
    printf("Enter first and second number : ");
    scanf("%d%d",&n1,&n2);
    hcflcm(n1,n2);
}

int hcflcm(int n1,int n2)
{
    int x=n1,lcm,y=n2;
    while(n1!=n2)
    {
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
    printf("%d\n",n1);
    printf("%d",(x*y)/n1);
}
