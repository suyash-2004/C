/*Write a C code to input a string and count how many characters have
single and multi-occurrence in the input string.*/
#include<stdio.h>
void main()
{
    int i,sa=0,ma=0,c,occ[26]={0};
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            occ[str[i]-65]++;
        else if (str[i]>='a' && str[i]<='z')
            occ[str[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        printf("%d",occ[i]);
        if(occ[i]==1)
            sa++;
        else if(occ[i]>1)
            ma++;
    }
    printf("Single appearance : %d\n Multi appearance : %d",sa,ma);
}
