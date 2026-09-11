#include<stdio.h>
int main()
{
    int x= 20;
    int y = 30;
    if(x>12){
        printf("x is greater than 12\n");
        if (y > 25){
            printf("y is also greater than 25\n");
        }
    }
    return 0;/*Output: x is greater than 12
                       y is also greater than 25*/
}
