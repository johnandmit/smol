#include <stdio.h>
int main()
{
	int A[1000], x;
	for (int i = 0; i < 1000; i++)
	{
		A[i] = rand() % 100;
	}
	
	printf("enter x: ");
	scanf("%i", &x);

	for (int i = 0; i < 1000; i++)
	{
		if(x==A[i]&&x==A[i+1])
		{
			printf("\n%i , %i\n",i,i);
		}
	}
}
