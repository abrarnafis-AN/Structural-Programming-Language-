#include<stdio.h>
int main()
{
    int a= 15, b = 20, c = 30;
    int *ptr;
    ptr = &a;
    printf("A = %d\n",*ptr);
    ptr = &b;
    printf("B = %d\n",*ptr);
    ptr = &c;
    printf("C = %d\n",*ptr);

}
