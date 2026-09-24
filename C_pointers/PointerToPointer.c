#include<stdio.h>
int main()
{
    int num = 15;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("numb = %d\n", num);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
}
