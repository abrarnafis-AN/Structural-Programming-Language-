
#include<stdio.h>
int main()
{
    int number[5] = {23,45,90,98,99};
    *number = 12;
    *(number +1) = 16;
    int *ptr = number;

    printf("%d\n", *number);
    printf("%d\n", *(number +1));
}
