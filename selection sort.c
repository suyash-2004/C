#include<Stdio.h>
void main()
{
    int a[20],i,j,max,temp,n;

    printf("Enter the length of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d :",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }


    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
