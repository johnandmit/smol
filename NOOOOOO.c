#include <math.h>
#include <stdio.h>
int main()
{
  int A[1000];
  int n, counter = 0, max;
  printf("enter n>10 to stop\n");
  do
  {
    printf("enter n: ");
    scanf("%i", &n);
    if (n < 10)
    {
      A[counter] = n;
      counter++;
    }
  } while (n < 10);
  int i, tmp, k = counter;
  int viTriMax;

  for (i = 0; i < counter; i++)
  {
    printf("%d, ", A[i]);
  }
  printf("\n");
  while (k > 1)
  {
    viTriMax = 0;
    for (i = 1; i < k; i++)
      if (A[i] > A[viTriMax])
        viTriMax = i;
    tmp = A[viTriMax];
    A[viTriMax] = A[k - 1];
    A[k - 1] = tmp;

    k = k - 1;
  }
  for (i = 0; i < counter; i++)
    printf("%d, ", A[i]);
  printf("\n");
  for (i = counter - 1; i >= 0; i--)
    printf("%d, ", A[i]);
  printf("\n");
  k = counter;
  while (k > 1)
  {
    viTriMax = 0;
    for (i = 1; i < k; i++)
      if (abs(A[i]) > abs(A[viTriMax]))
        viTriMax = i;
    tmp = A[viTriMax];
    A[viTriMax] = A[k - 1];
    A[k - 1] = tmp;

    k = k - 1;
  }
  for (i = counter - 1; i >= 0; i--)
    printf("%d, ", A[i]);
  printf("\n");
}
