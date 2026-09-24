#include<stdio.h>
int main()
{
    int number[5] = {45,55,65,70,80};
    int *start = &number[1];
    int *ends = &number[4];


    printf("%d\n", ends - start);N
    return 0;
}
