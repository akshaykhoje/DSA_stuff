#include <stdio.h>
#include <stdlib.h>

int numPerfectSquares(int num)
{
  int n=-1;
  for (int i = 0; i < num; i++)
    if (i*i < num)
      n++;
  
  return n;
}

int main()
{
  int num;
  scanf("%d", &num);
  printf("number of perfect squares before %d is : %d", num, numPerfectSquares(num));
  return 0;
}