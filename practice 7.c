/*wap to convert a string of numbers into an integer number*/
#include<stdio.h>
void main()
{
    char numstr[50];
    int i,numint = 0;
    printf("Enter the number string : ");
    scanf("%s",numstr);
    for(i=0;numstr[i]!='\0';i++)
    {
        if(numstr[i]>=48 && numstr[i]<=57)
        {
            numint = numint * 10 +(numstr[i]-48);
        }
        else
        {
            printf("Invalid string!");
        }
    }
    printf("%d",numint);


}
