#include<stdio.h>
int main()
{
    char msg[] = "I am not a so-called \"Brilliant\" student";
    //output I am not a so-called "Brilliant" student

    char tex[] = "It\'s a language";
    // It's a language
    char txt[] = "The character \\ is called Backslash";
    printf("%s\n", msg);
    printf("%s\n", tex);
    printf("%s\n", txt);
}
