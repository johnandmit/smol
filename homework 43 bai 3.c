#include <stdio.h>
#include <math.h>
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
void printer(int max, int min, int columns)
{
	int columnsCount = 0, prime;
	printf("Table of Primes\n===============\nLower limit:  %-10i\nUpper limit:  %-10i\n# of columns: %-10i\n", max, min, columns);
	if(min < 2)
	{
		min = 2;
	}
	for (int i = min; i < max; i++)
	{
		if(IsPrime(i))
		{
			printf("%10i",i);
			columnsCount++;
			if(columnsCount >= columns)
			{
				printf("\n");
				columnsCount = 0;
			}
		}
	}
}
int main()
{
	int max, min, columns;
	printf("enter max: ");
	scanf("%i", &max);
	printf("enter min: ");
	scanf("%i", &min);
	printf("enter columns: ");
	scanf("%i", &columns);
	printer(max, min, columns);
}
