#include<stdio.h>
#define max 5
int enqueue(int [], int);
int dequeue(int [], int, int);
void peek(int [], int);
void display(int [], int, int);
int main()
{
    int q[max],f=-1,r=-1,ch;
    while(1)
    {
        printf("Enter choice : \n1)Enqueue\n2)Dequeue\n3)peek\n4)Display : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            r=enqueue(q,r);
            if(f==-1)
                f=0;
            break;

        case 2:
            f=dequeue(q,f,r);
            if(f==-1)
                r=-1;
            break;

        case 3:
            peek(q,f);
            break;

        case 4:
            display(q,f,r);
            break;

        }
        printf("\nRepeat?(1:YES/0:NO)");
        scanf("%d",&ch);
        if(ch == 0)
            break;
    }
    return 0;
}
int enqueue(int q[],int r)
{
    int num;
    if(r==max-1)
        printf("OverFlow!");
    else
    {
        printf("Enter Number : ");
        scanf("%d",&num);
        r++;
        q[r]=num;
        printf("Element Enqueued!");
    }
    return r;
}
int dequeue(int q[], int f, int r)
{
    if(f==-1)
        printf("UnderFlow!");
    else
    {
        printf("Element Dequeued : %d",q[f]);
        if(f==r)
            f=-1;
        else
            f++;
    }
    return f;
}
void peek(int q[], int f)
{
    if(f==-1)
        printf("UnderFlow!");
    else
        printf("%d",q[f]);
}
void display(int q[], int f, int r)
{
    if(f==-1)
        printf("UnderFlow!");
    else
    {
        while(f<=r)
        {
            printf("%d, ",q[f]);
            f++;
        }
    }
}
