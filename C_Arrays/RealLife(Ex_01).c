#include<stdio.h>
int main(){
    int age[]= {10,15,20,25,30,32};
    float avg, sum=0;
    int length = sizeof(age)/sizeof(age[0]);


    for (int i=0;i<length;i++){
        sum +=age[i];
    }
    avg = sum/length;
    printf("The Average is: %f", avg);

    return 0;
}
