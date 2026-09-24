#include<stdio.h>
int main()
{
    int number[5] = {15,20,30,40,50};
    int *ptr = number;
    int i;

    for (i = 0;i<5; i++){
    printf("%d\n", *(ptr + i));}
}
