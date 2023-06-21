#include<stdio.h>
void main()
{
    int sum=0,s1,s2,s3;
    struct student
    {
        int roll;
        char name[20];
        int tm;
    }std[10];
    for(int i=0;i<10;i++)
    {
        printf("Student %d : ",i+1);
        printf("Enter roll : ");
        scanf("%d",&std[i].roll);
        getchar();
        printf("Enter name : ");
        gets(std[i].name);
        printf("Enter the marks in three subjects : ");
        scanf("%d%d%d",&s1,s2,s3);
        std[i].tm = sum = s1+s2+s3;
    }
    int mx = std[0].tm,sn;
    for(int i=1;i<10;i++)
    {
        if(mx<std[i].tm)
            mx = std[i].tm;
            sn = i;
    }

    printf("%d",std[sn].roll);
    puts(std[sn].name);
    printf("%d",std[sn].tm);
}
