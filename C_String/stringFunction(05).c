#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Trillion Dollar";
    char str2[] = "Trillion Dollar";
    char str3[] = "Abrar";

    printf("%d\n", strcmp(str1, str2));// compare str1 & str2,and print result
    printf("%d\n", strcmp(str1, str3));
    return 0;
}
