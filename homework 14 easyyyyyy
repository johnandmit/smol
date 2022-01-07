#include <math.h>
#include <stdio.h>
int main()
{
  int B[1000], C[1000];
  int n, bcounter = 0, cCounter=0, i;
  printf("enter n>10 to stop\n");
  do
  {
    printf("enter n: ");
    scanf("%i", &n);
    if (n < 10)
    {
      if (n > 0)
      {
        B[bcounter] = n;
        bcounter++;
      }
      if (n < 0)
      {
        C[cCounter] = n;
        cCounter++;
      }
    }
  } while (n < 10);
  for (i = 0; i < bcounter; i++)
    printf("%d, ", B[i]);
  printf("\n");
  for (i = 0; i < cCounter; i++)
    printf("%d, ", C[i]);
  printf("\n");
}
