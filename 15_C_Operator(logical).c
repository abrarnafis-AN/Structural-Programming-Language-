#include<stdio.h>
int main()
{
    int x = 1;
    int y =0;

    printf("User: %d\n", x && !y);//output 1
    printf("access: %d\n", x||y);//output 1
    printf("not logged in: %d\n", !y);//output 1
    return 0;
}
