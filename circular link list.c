#include<stdio.h>
typedef struct stk
{
    int data;
    struct stk *next;
}stk;
void push(stk **);
void pop(stk **);
void main()
{
    stk *top,*t;
    int ch=1;
    while(ch<=2)
    {
        printf("Enter Choice : \n1)Push\n2)Pop : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push(&top);
            break;
        case 2:
            pop(&top);
            break;
        }
        t=top;
        while(t!=NULL)
        {
            printf("%d",t->data);
            t=t->next;
        }
    }
 }
 void push(stk **tp)
 {
     int val;
     stk *p;
     p=(stk *)malloc(sizeof(stk));
     if(p==NULL)
        printf("Not Enough Memory!");
     else
     {
        printf("Enter value : ");
        scanf("%d",&val);
        p->data = val;
        p->next = *tp;
        *tp=p;
     }
 }
 void pop(stk **tp)
 {
     stk *temp;
     if(*tp == NULL)
        printf("EMPTY");
     else
     {
         temp = *tp;
         *tp=(*tp)->next;
     }
     free(temp);
 }
