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
	char Name[100][30];
	int kWh[100], i = 0, cost[100];
	FILE *fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\file_electric_2205.csv", "r");
	FILE *fp2 = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\output_electric_2205.csv", "w");
	while (fscanf(fp, "%s %d", Name[i], &kWh[i]) != EOF)
	{
		cost[i] = costCaculator(kWh[i]);
		fprintf(fp2, "%s, %d\n", Name[i], cost[i]);
		i++;
	}
	fclose(fp);
	fclose(fp2);
}
