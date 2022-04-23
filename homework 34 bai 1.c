#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
char amLich[100];
int factorial(int n)
{
	int answer = 1;
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
    if(n<2)
    {
        return 0;
    }
	for (int i = 2; i < sqrt(n); i++)
    {
	    if (n % i == 0)
		    {
		    	return 0;
		    }
	}
	return 1;
	
}
float compare(float a, float b)
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
	return biggest;
}
int SmallIndex(int n[1000], int size)
{
	int smallest = n[0];
	for (int i = 0; i < size; i++)
	{
		if (smallest >= n[i])
		{
			smallest = n[i];
		}
	}
	return smallest;
}
const char* DoungToAm(int nam)
{
	char can1[11][5] = {"giap","at","binh", "dinh", "mau", "ky", "Canh", "tan", "nham", "quy"};
	char chi1[13][5] = {" ty.", " suu", " dan", " mao", " thin", " ty'", " ngo", " mui", " than", " dau", " tuat", " hoi"};
	int can = (nam + 6) % 10, chi = (nam + 8) % 12;
	strcpy(amLich,can1[can]);
	strcat(amLich,chi1[chi]);
	return amLich;
}
int main()
{
	int n[7] = {5, 12, 7, 3, 4, 9, 6};
// 	printf("%i\n",factorial(5));
// 	printf("%i\n",sum1ToN(10));
// 	printf("%i\n",prime(0));
// 	printf("%f\n",compare(5, 9));
// 	printf("%i\n",LargeIndex(n, 7));
// printf("%i\n",SmallIndex(n, 7));
	printf("%s",DoungToAm(2022));
}
