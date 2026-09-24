#include<stdio.h>
#include<string.h>

int main()
{
    char str1[24] = "Trillion Dollar";
    char str2[24];
    strcpy(str2, str1);//copy str1 to str2

    printf("%s\n", str2);//output Trillion Dollar
    return 0;
}
