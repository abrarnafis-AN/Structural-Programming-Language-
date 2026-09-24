#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
    printf("Hi %s\n", name);
    return 0;
}
