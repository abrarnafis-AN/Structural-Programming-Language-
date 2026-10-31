#include<stdio.h>
int sum(int n);
int sum(int n){
    if(n == 1){
        return 1;
    }

    int sumNM = sum(n-1);
    int sumN = sumNM + n;
    return sumN;

}
int main()
{
    printf("sum is %d", sum(10));
    return 0;
}
