#include<stdio.h>
int main()
{
    int x=10;
    int *ptr;
    ptr =&x;
    printf("%d\n", x);//10
    printf("%u\n", &x);//add of x
    printf("%u\n", ptr);//add of x
    printf("%d\n", *ptr);//10
    //line 7 & 10 display same
    //line 8 & 9 display same
}
