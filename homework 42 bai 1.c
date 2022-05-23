#include <stdio.h>

int main()
{
	int cost, price, amount, totalCost = 0;
	char Name[50];
	FILE *fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\order.txt", "r");
	FILE *fp2 = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\order_output.txt", "w");
	char str1[10] = "name";
	char str2[20] = "quantites";
	char str3[10] = "price";
	char str4[20] = "subtotal";
	char str5[7] = "total:";
	fprintf(fp2, "%-32s %-10s %-10s %-10s\n", str1, str2, str3, str4);
	while (fscanf(fp, "%s %d %d", Name, &amount, &price) != EOF)
	{
		cost = amount * price;
		totalCost += cost;
		fprintf(fp2, "%-32s %-10d %-10d %-10d\n", Name, amount, price, cost);
	}
	fprintf(fp2, "%-54s %-10d",str5, totalCost);
}
