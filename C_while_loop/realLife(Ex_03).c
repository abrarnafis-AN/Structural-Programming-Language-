#include<stdio.h>
int main()
{
    int i = 5;

    while (i <=10){
        if(i < 10){
            printf("No Way!\n");
        }else {
            printf("Hi bro!");

        }
        i = i+1;// print "No Way!" 5 times then print "Hi bro"
    }
    return 0;
}
