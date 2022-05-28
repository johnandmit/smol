#include <stdio.h>
#include <math.h>
void input(int *num, int *den)
{
	printf("enter numerator: ");
	scanf("%i", num);
	do
	{
		printf("enter denominator: ");
		scanf("%i", den);
	} while (*den == 0);
}
void simplify(int *num, int *den)
{
	int numTemp = abs(*num), denTemp = abs(*den);
	do
	{
		if (numTemp > denTemp)
		{
			numTemp -= denTemp;
		}
		else if (numTemp < denTemp)
		{
			denTemp -= numTemp;
		}
	} while (numTemp != denTemp);
	if (*den < 0)
	{
		numTemp *= -1;
	}

	*num = *num / numTemp;
	*den = *den / numTemp;
}
void display(int num, int den)
{
	int simpnum = num, simpden = den;
	simplify(&simpnum, &simpden);
	printf("%i/%i\n=\n%i/%i\n",num,den,simpnum,simpden);
}
int main()
{
	int num, den;
	char answer;
	do{
		input(&num, &den);
		display(num, den);
		printf("Another run <y/n>?");
		scanf("%c",&answer);
		scanf("%c",&answer);
	}while(answer == 'y');
}
