#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, delta, x_1, x_2, x;
	do
	{
		printf("enter a: ");
		scanf("%i", &a);
	} while (a == 0);
	printf("enter b: ");
	scanf("%i", &b);
	printf("enter c: ");
	scanf("%i", &c);
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		x_1 = (-b - sqrt(delta) / (2 * a));
		x_2 = (-b + sqrt(delta) / (2 * a));
		printf("%i\n", x_1);
		printf("%i\n", x_2);
	}
	else if (delta == 0)
	{
		x = -b / (2 * a);
		printf("%i", x);
	}
	else
	{
		printf("phuong trinh vo ngiem ");
	}
}
