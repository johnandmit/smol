#include <stdio.h>
#include <math.h>
void FindS(int n)
{
	float s = 1;
	for (float i = 2; i <= n; i++)
	{
		s += (i - 1) / i;
	}
	printf("%f\n", s);
}
int IsPrime(int n)
{
	if(n == 2)
	{
		return 1;
	}
	for (int i = 2; i < sqrt(n)+1; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	do
	{
		printf("enter n: ");
		scanf("%i", &n);
	} while (n <= 5);
	FindS(n);
	printf("enter n: ");
	scanf("%i", &n);
	int temp = IsPrime(n);
	if(temp)
	{
		printf("n is prime");
	}
	else
	{
		printf("n is not prime");
	}
}
