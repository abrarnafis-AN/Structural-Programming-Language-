#include<stdio.h>
int main()
{
    int temperature = 56 ;

    if ( temperature < 0){
        printf("it's freezing!");
    }
    else if (temperature <= 20){
        printf("It's cool");
    }
    else {
        printf("It's warm!");
    }
    return 0;
}
