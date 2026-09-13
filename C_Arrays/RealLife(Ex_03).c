#include<stdio.h>
int main(){
    int num[]= {5,-5,20,7,0,10};
    int i;
    int length = sizeof(num)/sizeof(num[0]);


    for (int i=0;i<length;i++){
        if(num[i] < 0){
            continue;
        }
        if(num[i] ==0){
            break;
        }
        printf("%d\n", num[i]);
    }
    return 0;
}
