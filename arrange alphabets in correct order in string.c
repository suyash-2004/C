#include<stdio.h>
void main()
{
    char a[10],temp;
    int i,j;
    printf("Enter the string : ");
    fgets(a,10,stdin);
    for(i=0;i<strlen(a);i++)
    {
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    puts(a);
}
