#include <stdio.h>
int USCLN(int a,int b)
{
	while(a!=b)
	{
		if(a<b)
			b-=a;
		else
			a-=b;
	}
	return a;
}
int main()
{
	int a,b;
	printf("enter a: "); scanf("%i",&a);
	printf("enter b: "); scanf("%i",&b);
	a=USCLN(a,b);
	printf("%i",a);
}
