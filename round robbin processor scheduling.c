#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct pr
{
    char pname[5];
    int ptime;
    struct pr *next;
}pr;
void addp(pr **, pr **,char[], int);
void delp(pr **, pr **, char [],int np);
void showp(pr *);
void process(pr **, pr **, int, int );
int main()
{
    pr *f=NULL,*r=NULL;
    int np,ptime,cpus;
    char pname[5];
    printf("Enter CPU Time Slot : ");
    scanf("%d",&cpus);
    getchar();
    printf("Enter the number of processes : ");
    scanf("%d",&np);
    for(int i=0;i<np;i++)
    {
        getchar();
        printf("Enter the name of process %d : ",i+1);
        fgets(pname,sizeof(pname),stdin);
        printf("Enter the process time : ");
        scanf("%d",&ptime);
        addp(&f,&r,pname,ptime);
    }
    process(&f,&r,cpus,np);
}
void addp(pr **f1, pr **r1,char pname[], int ptime)
{
    int i;
    pr *p;
    for(i=0;pname[i]!='\0';i++);
    pname[i-1]='\0';
    p=(pr *)malloc(sizeof(pr));
    strcpy(p->pname,pname);
    p->ptime = ptime;
    if(*f1 == NULL)
        *f1=*r1=p;
    else
    {
        (*r1)->next=p;
        *r1=p;
    }
    (*r1)->next=*f1;
}
void delp(pr **f1, pr **r1, char name[], int c)
{
    pr *temp=*f1,*temp2=NULL;
    for(int i=0;i<c;i++)
    {
        if(strcmp(name,(temp->next)->pname)==0)
        {
            if(temp->next==*f1)//first node to be deleted
            {
                temp2 = temp->next;
                if(temp->next==*r1)
                    *f1=*r1=NULL;
                else
                {
                    (*r1)->next=temp2->next;
                    *f1=temp2->next;
                }
                free(temp2);
                return;
            }
            else if (temp->next==*r1)//last node to be deleted
            {
                *r1=temp;
                temp2 = temp->next;
                temp->next=*f1;
                free(temp2);
                return;
            }
            else//node in between to be deleted
            {
                temp2=temp->next;
                temp->next=temp->next->next;
                free(temp2);
                return;
            }
        }
        temp=temp->next;
    }
}
void showp(pr *f1)
{
    pr *temp=NULL;
    temp = f1;
    do
    {
        printf("Process name : %s ; Process Time : %d \n",f1->pname,f1->ptime);
        f1=f1->next;
    }while(f1!=temp);
}
void process(pr **f1, pr **r1, int cpus, int np)
{
    pr *temp=*f1,*temp2=*f1;
    int c=np,time=0;
    while(c>0)
    {
        if(temp->ptime<=cpus)
        {
            temp2 = temp->next;
            time = time+(temp->ptime);
            temp->ptime=0;
            printf("Process %s Completed in %d seconds\n",temp->pname,time);
            delp(f1,r1,temp->pname, c);
            temp=temp2;
            c--;
        }
        else
        {
            temp->ptime=(temp->ptime)-cpus;
            temp=temp->next;
            time=time+cpus;
        }
    }
}
