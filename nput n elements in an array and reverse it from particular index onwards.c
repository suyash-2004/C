/*input n elements in an array and reverse it from particular index onwards.
Example -
Elements-1, 2,3,4,5
Index-2
Output-1, 2,5,4,3*/
#include<Stdio.h>
void revarr(int [],int,int);
void main()
{
    int a[20],n,x,i;
    printf("Enter the limit of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the index after which elements are to be reversed : ");
    scanf("%d",&x);

    revarr(a,n,x);
}

void revarr(int a[],int n,int x)
{
    int temp=n-1,i,tp;
    for(i=x+1;i<temp;i++,temp--)
    {
        tp=a[x+1];
        a[x+1]=a[temp];
        a[temp]=tp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
