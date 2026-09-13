
#include<stdio.h>
int main(){
    int age[]= {100,15,20,25,30,32};
    int i;
    int length = sizeof(age)/sizeof(age[0]);


    int lowestAge =age[0];
    for (int i=0;i<length;i++){
        if(lowestAge > age[i]){
            lowestAge = age[i];
        }
    }
    printf("The lowest age is: %d",lowestAge);// 15
    return 0;
}
