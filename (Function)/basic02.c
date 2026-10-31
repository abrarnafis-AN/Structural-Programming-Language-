#include<stdio.h>
#include<math.h>
int squareArea(int side);
int squareArea(int side)
{
   return side*side;
}
int main()
{

    int a = 5;

    printf("area is %d", squareArea(a));

    return 0;

}
