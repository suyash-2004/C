#include<Stdio.h>
typedef struct list
{
    int data;
    struct list *next;
}list;
main()
{
    list *p=NULL,*r=NULL,*l=NULL;
    int val,ch;
    while(1)
    {
        printf("Enter data : ");
        scanf("%d",&val);
        p = (list*)malloc(sizeof(list));
        p->data = val;
        if(r==NULL && l==NULL)
            l=r=p;
        else
        {
            r->next = p;
            r=p;
        }
        printf("REPEAT ?(1/0) : ");
        scanf("%d",&ch);
        if(ch==0)
            break;
    }
    p->next = NULL;
    r=l;
    while(r!=NULL)
    {
        printf("%d ",r->data);
        r=r->next;
    }
}
