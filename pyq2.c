 #include<stdio.h>
#include<string.h>
int main()
{
    struct box
    {
        char shape[10];
    }box1,box2;
    strcpy(box1.shape,"TRIANGLE");
    printf("%s",box1.shape);
    box2=box1;
    strcpy(box2.shape,"SQUARE");
    printf("%s",box2.shape);
    return 0;
}
