#include<stdio.h>
int main()
{
    int i;
    while ( i<15){
        if(i == 10){
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}
