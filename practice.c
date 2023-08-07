 #include<stdio.h>
#include<string.h>
void main()
{
    int i, j;
    char a[50],*p;

    printf("Enter the string: ");
    fgets(a, 50, stdin);

    printf("Words starting with uppercase letters: ");
    p=a;
    for (i = 0; *(p+i) != '\0'; i++)
    {
        if()
        else if (*(p+i)>='A' && *(p+i)<='Z')
        {
            for (j = i; *(p+j) != ' ' && *(p+j) != '\0'; j++)
            {
                printf("%c", *(p+j));
            }
            printf(" ");
        }
    }
}
