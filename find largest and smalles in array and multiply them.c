/*In an array find smallest and largest element.After that multiply them. */
#include<stdio.h>
void findmxmn(int [],int);
void main()
{
    int a[20],n,i;
    printf("Enter the limit of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the %d element : ",i);
        scanf("%d",&a[i]);
    }
    findmxmn(a,n);

}

void findmxmn(int a[],int n)
{

    int mx,mn,i;
    mx=a[0];
    mn=a[0];
    for(i=1;i<n;i++)
    {
        if(mx < a[i])
            mx = a[i];
        if(mn > a[i])
            mn = a[i];
    }
    printf("%d",mx*mn);
}
