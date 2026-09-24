
#include<stdio.h>
int main()
{
    int age = 20;
    int*ptr = &age;

       printf("%p\n", ptr);
       printf("%d\n", *ptr);//20

    return 0;
}
