#include<stdio.h>
#include<time.h>
int main()
{
  time_t Time;
  time(&Time);
  printf("Time is: %s", ctime(&Time));
  return 0;
}
