#include <stdio.h>
#include <math.h>
float FindS(int n)
{
	float s = 1;
	for (float i = 2; i <= n; i++)
	{
		s += (i - 1) / i;
	}
	return s;
}
int IsPrime(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		for (int i = 2; i < n / 2 + 1; i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	int n;
	float s;
	do
	{
		printf("enter n: ");
		scanf("%i", &n);
	} while (n <= 5);
	s = FindS(n);
	printf("%f\n", s);

	printf("enter n: ");
	scanf("%i", &n);
	int temp = IsPrime(n);
	if (temp)
	{
		printf("n is prime");
	}
	else
	{
		printf("n is not prime");
	}
}
