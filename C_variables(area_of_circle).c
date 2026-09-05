#include<stdio.h>
int main(){
    float radius, pi=3.1416, area;
    printf("Enter value of radius: ");
    scanf("%f", &radius);
    area = pi*radius*radius;
    printf("Area of the circle is: %f", area);
    return 0;


}