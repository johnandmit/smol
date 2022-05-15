#include <stdio.h>
#include <string.h>
void print(int high, int low)
{
    const int normal_price = 100;
    const int high_price = 150;
    int total = high + low;
    int total_bill_lower = low * normal_price;
    int total_bill_higher = high * high_price;
    int total_bill = total_bill_higher + total_bill_lower;

    char s0[] = "So tu";
    char s1[] = "So tu co kich thuoc binh thuong";
    char s2[] = "So tu co kich thuoc > 8 ky tu";
    char s3[] = "Tong cong";

    printf("%-32s: %2d\n", s0, total);
    printf("%-32s: %2d x %2d = %5d\n", s1, low, normal_price, total_bill_lower);
    printf("%-32s: %2d x %2d = %5d\n", s2, high, high_price, total_bill_higher);
    printf("%-32s:          = %5d\n", s3, total_bill);
}
void costCaculate(FILE *fp)
{
	char words[500][500];
	int nL[3];
	while(fscanf(fp, "%s ", words[nL[2]]) == 1)
	{
		if(strlen(words[nL[2]]) > 8)
		{
			nL[0]++;
		}
		else
		{
			nL[1]++;
		}
		nL[2]++;
	}
	print(nL[0], nL[1]);
}
int main()
{
	FILE *fp = fopen("C:\\Users\\minhp\\source\\repos\\Stuff\\dienTin.txt", "r");
	costCaculate(fp);
	fclose(fp);
}
