#include<stdio.h>
void muslim();
void hindu();
void muslim()
{
    printf("Assalamu alikum");
}
void hindu()
{
    printf("Adab beda");
}
int main()
{
    int a;
    printf(" type 1 musim?");
    scanf("%c", a);
    if(a == 1){
        printf("Assalamu alaikum");
    }else{
    printf("Adab beda");
    }
    return 0;
}
