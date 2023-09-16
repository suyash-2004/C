#include<Stdio.h>
typedef struct list
{
    int data;
    struct list *next;
}list;
void add_aftr_first_node(list *, list *);
list* add_before_first_node(list *, list *);
void add_after_last_node(list *, list *);
void add_before_last_node(list *, list *);
void insert_node_after_given_node(list *, list *);
void delete_given_node(list *, list *);
void delete_last_node(list *, list *);
list *delete_first_node(list *, list *);
main()
{
    list *p=NULL,*l=NULL;
    int val,ch,eve_cnt=0,odd_cnt=0;
    while(1)
    {
        printf("Enter data : ");
        scanf("%d",&val);
        p = (list*)malloc(sizeof(list));
        p->data = val;
        p->next = l;
        l=p;
        printf("REPEAT?(0/1)");
        scanf("%d",&ch);
        if(ch == 0)
            break;
    }val = 0;
    while(p!=NULL)
    {
        val++;
        if(p->data%2==0)
            eve_cnt++;
        else
            odd_cnt++;
        printf("%d ",p->data);
        p=p->next;
    }p=l;
    printf("\nTotal nodes : %d\nTotal no. of nodes having even data : %d\nTotal no. of nodes having odd data : %d",val,eve_cnt,odd_cnt);
    while(ch<=8)
    {
        printf("\nMENU\n1)Add node after first node\n2)add node before first node\n3)add node after last node\n4)add node before last node\n5)insert a node between a give node\n6)delete a given no\n7)delete the last node\n8)delete first node : \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            add_aftr_first_node(p,l);
            break;
        case 2:
            p = add_before_first_node(p,l);
            l=p;

            break;
        case 3:
            add_after_last_node(p,l);
            break;
        case 4:
            add_before_last_node(p,l);
            break;
        case 5:
            insert_node_after_given_node(p,l);
            break;
        case 6:
            delete_given_node(p,l);
            break;
        case 7:
            delete_last_node(p,l);
            break;
        case 8:
            p = delete_first_node(p,l);
            l=p;
            break;
        }
    }
}
void add_aftr_first_node(list *p,list *l)
{
    int val;
    p = (list *)malloc(sizeof(list));
    printf("Enter Data : ");
    scanf("%d",&val);
    p->data=val;
    p->next = l->next;
    l->next = p;
    p=l;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    p=l;
}
list* add_before_first_node(list *p, list *l)
{
    int val;
    p = (list *)malloc(sizeof(list));
    printf("Enter Data : ");
    scanf("%d",&val);
    p->data = val;
    p->next = l;
    l=p;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    p=l;
    return p;
}
void add_after_last_node(list *p,list *l)
{
    int val;
    list *t;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    t = (list *)malloc(sizeof(list));
    printf("Enter Data : ");
    scanf("%d",&val);
    t->data = val;
    t->next=NULL;
    p->next=t;
    p=l;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    p=l;
}
void add_before_last_node(list *p,list *l)
{
    int val;
    list *t;
    while((p->next)->next!=NULL)
        p=p->next;
    t = (list *)malloc(sizeof(list));
    printf("Enter Data : ");
    scanf("%d",&val);
    t->next = p->next;
    t->data = val;
    p->next = t;
    p=l;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    p=l;
}
void insert_node_after_given_node(list *p,list *l)
{
    int idx,val=0;
    list *t;
    printf("Enter node number after which new node has to be inserted : ");
    scanf("%d",&idx);
    while(p!=NULL)
    {
        val++;
        if(val == idx)
        {   printf("Enter Data : ");
            scanf("%d",&val);
            t = (list *)malloc(sizeof(list));
            t->next = p->next;
            t->data = val;
            p->next = t;
            break;
        }
        p=p->next;
    }
    p=l;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void delete_given_node(list *p,list *l)
{
    int idx,val=0;
    list *t;
    printf("Enter Node Number to Delete : ");
    scanf("%d",&idx);
    while(p!=NULL)
    {
        val++;
        if(val == idx-1)
        {
            t = p->next;
            p->next = (p->next)->next;
            free(t);
            break;
        }
        p = p->next;
    }
    p=l;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void delete_last_node(list *p,list *l)
{
    while((p->next)->next!=NULL)
    {
        p=p->next;
    }
    free(p->next);
    p->next = NULL;
    p=l;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
list *delete_first_node(list *p, list *l)
{
    p=p->next;
    free(l);
    l=p;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    p=l;
    return p;
}
