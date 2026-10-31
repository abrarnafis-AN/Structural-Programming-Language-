#include<stdio.h>
float percentage(float physics, float math, float chemistry);

float percentage(float physics, float math, float chemistry)
{
    return (physics + math + chemistry )/ 3;
}
int main()
{
    float physics=92.0;
    float math =92.0;
    float chemistry =97.0;
    printf ("the percentage is : %f", percentage(physics, math, chemistry));
    return 0;
}
