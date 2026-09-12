#include<stdio.h>
int main()
{
    int i, k;
    for(i=1;i<=3;++i){
        printf("%d\n", i);

    for(k=1; k<=4;++k){
        printf("Inner: %d\n", k);
    }
    }
    return 0;
}
