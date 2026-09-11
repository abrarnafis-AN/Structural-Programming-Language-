#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d", &x);

    if(x>0){
        printf("This is positive number ");
    }else if(x<0){
        printf("This is a negative number");
    }else {
        printf("The value of 0.");
    }
    return 0;
}
