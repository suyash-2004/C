#include<stdio.h>
#include<string.h>
void main()
{
    int i, j;
    char a[50];

    printf("Enter the string: ");
    fgets(a, 50, stdin);

    printf("Words starting with uppercase letters: ");

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            for (j = i; a[j] != ' ' && a[j] != '\0'; j++)
            {
                printf("%c", a[j]);
            }
            printf(" ");
        }
    }
}
