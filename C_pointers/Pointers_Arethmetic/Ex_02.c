#include<stdio.h>
int main()
{
    int number[4] = {45,55,65};
    int *p = number;

    printf("%d\n", *p);
    p++;

    printf("%d\n", *p);
    p--;
    printf("%d\n", *pn);
    p +=2;
    printf("%d\n", *p);

    return 0;
}
