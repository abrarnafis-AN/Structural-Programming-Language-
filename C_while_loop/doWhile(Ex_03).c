#include<stdio.h>
int main()
{
    int numb;
    do {
       printf("Enter a positive number please: ");//it will run until user input 0
       scanf("%d", &numb);
    }
    while (numb > 0);
    return 0;
}
