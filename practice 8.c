#include<stdio.h>

void maxmin(int *, int *, int [], int);

int main()
{
    int n, num[50], *mx, *mn;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Enter the array of numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    mx = &num[0];
    mn = &num[0];
    maxmin(mx, mn, num, n);
    printf("Maximum: %d\n", *mx);
    printf("Minimum: %d\n", *mn);
    return 0;
}

void maxmin(int *mx, int *mn, int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (num[i] > *mx)
        {
            *mx = num[i];
        }
        if (num[i] < *mn) // Fixed the condition to find the minimum
        {
            *mn = num[i];
        }
    }
}
