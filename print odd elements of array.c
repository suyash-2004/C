/*print odd elements of an array */
#include<stdio.h>
void printoddele(int [],int);
void main()
{
    int n,a[20],i;
    printf("Enter the limit of series : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i);
        scanf("%d",&a[i]);
    }

    printoddele(a,n);
}

void printoddele(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i%2 != 0)
            printf("%d ",a[i]);
    }
}
