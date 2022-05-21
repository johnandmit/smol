#include <stdio.h>
int costCaculator(int kWh)
{
	int cost;
	if (kWh < 100)
	{
		cost = kWh * 1600;
	}
	else if (kWh < 300)
	{
		cost = 160000 + (kWh - 100) * 2000;
	}
	else
	{
		cost = 560000 + (kWh - 300) * 3000;
	}
	return cost;
}
int main()
{
	char Name[30];
	int kWh, cost;
	FILE *fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\file_electric_2205.csv", "r");
	FILE *fp2 = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\output_electric_2205.csv", "w");
	while (fscanf(fp, "%s %d", Name, &kWh) != EOF)
	{
		cost = costCaculator(kWh);
		fprintf(fp2, "%s, %d, %d\n", Name, kWh, cost);
	}
	fclose(fp);
	fclose(fp2);
}
