#include<stdio.h>
int main(){

    int select = 1;// 1=meatbox,  2 = fish
    switch(select){
        case 1:
            printf("Sir!You ordered meatbox");
            break;
        case 2:
            printf("Sir!You ordered fish");
            break;
        printf("Sorry, Invalied order!");

    } //output = Sir!You ordered meatbox
    return 0;

}
