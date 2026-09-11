#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age = 25;
    bool citizen =  true;

    if (age >= 18){
        printf("old enough to vote \n");
        if(citizen){
            printf("and you are a citizen \n");

        }else {
        printf("but you must be a citizen to vote \n ");}

    } else {printf("not a voter \n");
    }
    return 0;
}
