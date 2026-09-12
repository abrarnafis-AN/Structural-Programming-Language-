#include<stdio.h>
int main()
{
    int numb = 2;
    int i;
    for(i=1;i<=20;i++){
        printf("%d*%d = %d\n", numb, i, numb*i);
    }
    return 0;
}
