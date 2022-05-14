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
		printf("your guess is lower than the answer, try again\n\n");
	}
	else if (a > b)
	{
		printf("your guess is higher than the answer, try again\n\n");
	}
	else
	{
		printf("GG! ");
		return 1;
	}
	return 0;
}

int sellect_gamemode()
{
	int gamemode;
	printf("enter gamemode: 1 for easy, 2 for normal, 3 for hard, 4 for chad, 5 for impossible and 6 for custom: ");
	scanf("%i", &gamemode);
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
		printf("enter guess %i: ", i + 1);
		scanf("%i", &guess);
		i++;
		compare(guess, random);
	}
	printf("good try but the answer is: %i", random);
}

void single_player()
{
	struct param parameter;
	int gamemode;
	gamemode = sellect_gamemode();
	parameter = gen_param_gamemode(gamemode);
	main_play_host(parameter.maxRange, parameter.numOfGuess);
}


int main_play_race(int maxRange, int numOfGuess, int players)
{
	int random[players], guess = -1, i = 0,count = 0,temp;
	char names[players][50];
	for(int e = 0; e < players; e++)
	{
		printf("enter name for p%i: ",e+1);
		scanf("%s",names[e]);
		random[e] = rand() % maxRange;
	}
	printf("\nin this mode, you can only guess %i times, the corrct number will now be in between 0 and %i\nthe game will end when you get the number right or you run our of guesses\n\n", numOfGuess, maxRange);
	while (guess != random[i] && count < numOfGuess*players)
	{
		printf("%s, enter guess: ",names[i]);
		scanf("%i", &guess);
		temp = (compare(guess, random[i]);
		if(temp == 1)
		{
			printf("GOOD JOB, the winner is %s\n",names[i]);
			for(int e = 0; e < players ; e++)
			{	
				if(e != i)
				printf("L %s, your guess is %i\n",names[e],random[e]);
			}
			return 0;
		}
		i++;
		count++;
		if(i == players)
		{
			printf("you have %i guesses left\n\n",numOfGuess - count/players);
			i = 0;
		}
	}
	printf("good try but the answer is: ");
	for(int e = 0; e<players;e++)
		printf("%i for %s, ",random[e],names[e]);
}


void multiplayer()
{
	int num_of_players , gamemode;
	struct param parameter;
	gamemode = sellect_gamemode();
	printf("enter number of people you want to play with: ");
	scanf("%i", &num_of_players);
	parameter = gen_param_gamemode(gamemode);
	main_play_race(parameter.maxRange, parameter.numOfGuess,num_of_players);

}

void menu()
{
	int gamemode;
	printf("\t\t\t\t\t\tWelcome\n\t\t\t\t\t\t  to\n\t\t\t\t\t    NUMBER GUESSING!\n");
	printf("\t\t\t  enter number 1 for singleplayer, 2 for multiplayer\n\t\t\t\t\t\t enter:\n\t\t\t\t\t\t   ");
	scanf("%i", &gamemode);
	for (int i = 0; i < 100; i++)
	{
		printf("\n");
	}
	if (gamemode == 1)
		single_player();
	else if (gamemode == 2)
		multiplayer();
	else
		printf("invalid!");
}
int main()
{
	srand(time(0));
	menu();
}
