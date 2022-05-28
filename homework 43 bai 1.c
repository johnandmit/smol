#include <stdio.h>
#include <math.h>
void check(int a, int b, int c)
{
	if (a + b > c && a + c > b && c + b > a)
	{
		float perimeter = (a + b + c) / 2;
		float area = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
		printf("area: %f\nperimeter: %f", area, perimeter*2);
	}
	else
	{
		printf("a, b, c are not sides of a triangle");
	}
}
int main()
{
	int a, b, c;
	printf("enter a: ");
	scanf("%i", &a);
	printf("enter b: ");
	scanf("%i", &b);
	printf("enter c: ");
	scanf("%i", &c);
	check(a, b, c);
}
