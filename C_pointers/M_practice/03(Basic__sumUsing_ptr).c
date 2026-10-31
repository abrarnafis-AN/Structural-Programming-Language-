#include<stdio.h>
int main()
{
    int a = 50, b = 75, sum;
    int *ptrA,*ptrB;

    ptrA = &a;
    ptrB = &b;

    sum = *ptrA + *ptrB;

    printf("Sum is %d",sum);
    return 0;

}
