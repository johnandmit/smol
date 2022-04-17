#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int factorial(int n)
{
	int answer = 0;
	for (int i = 2; i <= n; i++)
	{
		answer *= i;
	}
	return answer;
}
int sum1ToN(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
int prime(int n)
{
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			printf("n in not prime\n");
			return 0;
		}
	}
	printf("n is prime\n");
}
int compare(float a, float b)
{
	if (a > b)
		return a;
	else
		return b;
}
int LargeIndex(int n[1000], int size)
{
	int biggest = n[0];
	for (int i = 0; i < size; i++)
	{
		if (biggest < n[i])
		{
			biggest = n[i];
		}
	}
}
int DoungToAm(int nam)
{
	char amlich[12] = "abc";
	int can = (nam % 60 + 7) % 10, chi = (nam % 60 + 9) % 12;
	switch (can)
	{
	case 1:
		strcpy(amlich, "giap");
		break;
	case 2:
		strcpy(amlich, "at");
		break;
	case 3:
		strcpy(amlich, "binh");
		break;
	case 4:
		strcpy(amlich, "dinh");
		break;
	case 5:
		strcpy(amlich, "mau");
		break;
	case 6:
		strcpy(amlich, "ky");
		break;
		strcpy(amlich, "Canh");
		break;
	case 8:
		strcpy(amlich, "tan");
		break;
	case 9:
		strcpy(amlich, "nham");
		break;
	case 10:
		strcpy(amlich, "quy");
		break;
	}
	switch (chi)
	{
	case 1:
		strcat(amlich, " ty");
		break;
	case 2:
		strcat(amlich, " suu");
		break;
	case 3:
		strcat(amlich, " dan");
		break;
	case 4:
		strcat(amlich, " mao");
		break;
	case 5:
		strcat(amlich, " thin");
		break;
	case 6:
		strcat(amlich, " ty");
		break;
	case 7:
		strcat(amlich, " ngo");
		break;
	case 8:
		strcat(amlich, " mui");
		break;
	case 9:
		strcat(amlich, " than");
		break;
	case 10:
		strcat(amlich, " dau");
		break;
	case 11:
		strcat(amlich, " tuat");
		break;
	case 12:
		strcat(amlich, " hoi");
		break;
	}
	printf("%s\n", amlich);
}
int main()
{
	int n[7] = {5, 2, 7, 2, 1, 9, 6};
	factorial(5);
	sum1ToN(10);
	prime(65);
	compare(5, 9);
	LargeIndex(n, 7);
	DoungToAm(2022);
}
