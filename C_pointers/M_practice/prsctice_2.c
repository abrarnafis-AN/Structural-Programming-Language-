#include<stdio.h>
int main()
{
    int age =23;
    int *ptr = &age;
    //address
    printf("%p\n", &age);
    printf("%u\n", &age);

    //ptr
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    return 0;
}
