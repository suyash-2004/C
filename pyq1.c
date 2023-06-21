/*Kholi likes the number 239. Therefore, he considers a number lucky if
its last digit is 2, 3, or 9.
Kholi wants to watch the numbers between L and R (both inclusive), sc.
he asked you to determine how many lucky numbers are in this range ?
Can you help him ? */

#include<stdio.h>
int lucky(int);
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(lucky(num) == 1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Not Lucky");
    }
}
int lucky(int num)
{
    int rem;
    if(num%10 == 2 || num % 10 == 3 || num % 10 == 9)
        return 1;
    else
        return 0;
}
