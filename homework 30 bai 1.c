#include <stdio.h>
int main()
{
	int n, sum = 0;
	printf("enter n: ");
	scanf("%i", &n);
	for (int count = 1; count <= n; count++)
	{
		if (count % 2 == 0)
		{
			sum += count;
		}
	}
	printf("sum = %i", sum);
}
