#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Abbas ";
    char str2[] = "Pakistani";

    strcat(str1, str2);
    printf("%s\n", str1);// output Abbas Pakistani

    return 0;
}
