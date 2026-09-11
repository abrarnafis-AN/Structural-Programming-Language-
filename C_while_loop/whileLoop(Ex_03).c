#include<stdio.h>
int main()
{
    int i = 15;
    while (i < 10){
        printf("It will never be printed.", i);//nothing will show
        i++;
    }
    return 0;
}
