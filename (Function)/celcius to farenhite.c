#include<stdio.h>
float Tempch(float n);
float Tempch(float n){
    float far = (n*(9.0/5.0)) + 32;
    return far;
}
int main()
{
    float far = Tempch(37);
    printf("farenhite value is : %f", far);
    return 0;
}
