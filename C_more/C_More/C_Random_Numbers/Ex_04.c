#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int dic1 = (rand() % 6) +1;
    int dic2 = (rand() % 6) +1;
    printf("You rolled %d and %d  (total = %d)\n", dic1, dic2, dic1 +dic2);

    return 0;
}
