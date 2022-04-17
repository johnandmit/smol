#include <stdio.h>
struct DoiBong
{
	char ten[50];
	int win;
	int tie;
	int lose;
	int diem;
};
int main()
{
	struct DoiBong Doi[1000];
	int n,BigIndex = 0;
	printf("enter number of team: ");
	scanf("%i", &n);
	for (int i = 0; i < n; i++)
	{
		printf("enter ten: ");
		scanf("%s",&Doi[i].ten);
		printf("enter win: ");
		scanf("%i",&Doi[i].win);
		printf("enter tie: ");
		scanf("%i",&Doi[i].tie);
		printf("enter lose: ");
		scanf("%i",&Doi[i].lose);
		Doi[i].diem = 3*Doi[i].win + Doi[i].tie;
	}
	for (int i = 1 ;i < n; i++)
	{
		if(Doi[BigIndex].diem < Doi[i].diem)
		{
			BigIndex = i;
		}
	}
	printf("doi %s thang voi so diem la: %i",Doi[BigIndex].ten,Doi[BigIndex].diem);
}
