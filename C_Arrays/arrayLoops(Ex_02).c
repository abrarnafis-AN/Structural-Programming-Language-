#include<stdio.h>
int main(){
    int Number[]= {10,25,50,100};
    int length= sizeof(Number)/sizeof(Number[0]);
    int i;

    for (i=0;i<length;i++){
        printf("%d\n", Number[i]);
    }

    return 0;
}
