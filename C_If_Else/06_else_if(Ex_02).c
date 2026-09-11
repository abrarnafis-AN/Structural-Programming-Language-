#include<stdio.h>
#include<stdbool.h>
int main()
{
    int time = 18;
    bool morning = time < 12;
    bool day = time < 25;
    if(morning){
        printf("good morning");
    }
    else if(day){
        printf("good day");
    }
    else {
        printf("good evening");
    }
    return 0;
}
