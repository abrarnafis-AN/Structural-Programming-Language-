#include<stdio.h>
int main()
{
    int number[4] = {45,55,65,70};
    int *p = number;

    printf("%d\n", *p);//45

    printf("%d\n", *(p +1));//55
    printf("%d\n", *(p +2));//65
    printf("%d\n", *(p +3));//70
    return 0;
}
