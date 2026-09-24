#include<stdio.h>
int main()
{
    int num = 17;
    int *ptr = &num;
    int **pptr = &ptr;
    **pptr = 19;

    printf("numb = %d\n", num);

}
