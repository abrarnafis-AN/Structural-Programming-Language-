#include<stdio.h>
int main()
{
    int number[4] = {25,50,100,150};
    int i;
    for(i = 0; i<4; i++){
        printf("%p\n", &number[i]);
    }
}
