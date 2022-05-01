#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct param
{
	int numOfGuess;
	int maxRange;
};


int compare(int a, int b)
{
		if (a < b)
		{
			printf("your guess is lower than the answer, try again\n");
		}
		else if (a > b)
		{
			printf("your guess is higher than the answer, try again\n");
		}
		else
		{
			printf("GG!");
			return 1;
		}
}


int sellect_gamemode()
{
	int gamemode;
	printf("enter diffuculty: 1 for easy, 2 for nomal, 3 for hard, 4 for chad, 5 for impossible and 6 for custom: ");
	scanf("%i",&gamemode);
	return gamemode;
}


struct param gen_param_gamemode(int gamemode)
{
	int guess = -1, i = 0;
	struct param parameter;
	switch (gamemode)
	{
	case 1:
		parameter.numOfGuess = 1000;
		parameter.maxRange = 100;
		break;
	case 2:
		parameter.numOfGuess = 10;
		parameter.maxRange = 100;
		break;
	case 3:
		parameter.numOfGuess = 8;
		parameter.maxRange = 150;
		break;
	case 4:
		parameter.numOfGuess = 7;
		parameter.maxRange = 200;
		break;
	case 5:
		parameter.numOfGuess = 7;
		parameter.maxRange = 300;
		break;
	case 6:
		printf("enter number of guesses you want to have: ");
		scanf("%i", &parameter.numOfGuess);
		printf("enter max range: ");
		scanf("%i", &parameter.maxRange);
		break;
	default:
		printf("invalid gamemode");
		break;
	}
	return parameter;
}


void main_play_host(int maxRange, int numOfGuess)
{
	int random = rand() % maxRange, guess = -1, i = 0;
	printf("in this mode, you can only guess %i times, the corrct number will now be in between 0 and %i\nthe game will end when you get the number right or you run our of guesses\n", numOfGuess, maxRange);
	while (guess != random && i < numOfGuess)
	{
		printf("enter guess %i: ", i);
		scanf("%i", &guess);
		i++;
		compare(guess, random);
	}
}


void single_player()
{
	struct param parameter;
	int gamemode;
	gamemode  = sellect_gamemode();
	parameter = gen_param_gamemode(gamemode);
	main_play_host(parameter.maxRange,parameter.numOfGuess);

}


void menu()
{
	printf("\t\tWelcome\n\t\t  to\n\t    NUMBER GUESSING!\n");
	single_player();
}
int main()
{
	srand(time(0));
	menu();
}
