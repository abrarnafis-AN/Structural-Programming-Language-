#include<stdio.h>
int main()
{
    int number[5] = {15,20,30,40,50};
    printf("%d\n", *(number + 1));
    printf("%d", *(number + 2));
}
