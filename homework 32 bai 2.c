#include <stdio.h>
#include <stdlib.h>

int FindSumEquation(int a[], int n, int x)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (x == (a[i] + a[i + 1]))
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int A[1000], x;
	for (int i = 0; i < 1000; i++)
	{
		A[i] = rand() % 100;
	}

	printf("enter x: ");
	scanf("%i", &x);

	int i = FindSumEquation(A, 1000, x);
	printf("%i", i);
}
