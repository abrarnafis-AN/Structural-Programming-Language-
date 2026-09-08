#include<stdio.h>
int main()
{
    int people = 0;
    people++;
    people++;
    people++;
    people++;

    printf("%d\n", people);//4
    people--;
    printf("%d\n", people);//4-1=3
    return 0;

}
