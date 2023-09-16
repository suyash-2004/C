/*Given the head of a linked list, remove the nth node from the end of the list and return its head.*/

#include<stdio.h>
typedef struct lst
{
    int data;
    struct lst *next;
}list;
void main()
{
    int val,ch,idx;
    list *p=NULL,*l=NULL,*t=NULL;
    while(1)
    {
        p = (list *)malloc(sizeof(list));
        printf("Enter value : ");
        scanf("%d",&val);
        p->data = val;
        p->next = l;
        l=p;
        printf("Repeat ? ");
        scanf("%d",&ch);
        if(ch == 0)
            break;
    }
    p=l;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
    printf("\nEnter the node number to delete from last : ");
    scanf("%d",&idx);
    p=l;
    ch=0;
    while(p!=NULL)
    {
        ch++;
        p=p->next;
    }
    p=l;
    val=0;
    while(p!=NULL)
    {
        val++;
        if((val+1) == (ch-idx)+1)
        {
            t=p->next;
            p->next = t->next;
            free(t);
            break;
        }
        p=p->next;
    }
    p=l;
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
