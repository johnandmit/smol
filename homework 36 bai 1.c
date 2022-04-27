#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int host(int gamemode)
{
	int guess = -1, i = 0, numOfGuess, maxRange;
	switch (gamemode)
	{
	case 1:
		numOfGuess = 1000;
		maxRange = 100;
		break;
	case 2:
		numOfGuess = 10;
		maxRange = 100;
		break;
	case 3:
		numOfGuess = 8;
		maxRange = 150;
		break;
	case 4:
		numOfGuess = 7;
		maxRange = 200;
		break;
	case 5:
		numOfGuess = 7;
		maxRange = 300;
		break;
	default:
		printf("invalid gamemode");
		return 0;
		break;
	}
	int random = rand() % maxRange;
	printf("in this mode, you can only guess %i times, the corrct number will now be in between 0 and %i\nthe game will end when you get the number right or you run our of guesses\n", numOfGuess, maxRange);
	while (guess != random && i < numOfGuess)
	{
		printf("enter guess %i: ", i);
		scanf("%i", &guess);
		i++;
		if (guess < random)
		{
			printf("your guess is lower than the answer, try again\n");
		}
		else if (guess > random)
		{
			printf("your guess is higher than the answer, try again\n");
		}
		else
		{
			printf("GG!");
			break;
		}
	}
}
void race()
{
	int random1 = rand() % 100, random2 = rand() % 100;
	printf("in this mode, you can guess as many time as you can, the corrct number will now be in between 0 and 100\nthe game will end when p1 or p2 get the number right, the winner is the first one to guess the correct number\n");
	char p1[50], p2[50];
	int guess = -1, i1 = 0, i2 = 0;
	printf("enter p1 name: ");
	scanf("%s", p1);
	printf("enter p2 name: ");
	scanf("%s", p2);
	while (1)
	{
		printf("%s, enter guess %i: ", p1, i1 + 1);
		scanf("%i", &guess);
		i1++;
		if (guess < random1)
		{
			printf("%s's guess is lower than the answer, try again later\n", p1);
		}
		else if (guess > random1)
		{
			printf("%s's guess is higher than the answer, try again later\n", p1);
		}
		else
		{
			printf("game over, %s is the winner!", p1);
			break;
		}

		printf("%s, enter guess %i: ", p2, i2 + 1);
		scanf("%i", &guess);
		i2++;
		if (guess < random2)
		{
			printf("%s's guess is lower than the answer, try again later\n", p2);
		}
		else if (guess > random2)
		{
			printf("%s's guess is higher than the answer, try again later\n", p2);
		}
		else
		{
			printf("game over, %s is the winner!", p2);
			break;
		}
	}
	printf("\nGG!");
}
int main()
{
	srand(time(0));
	int difficulty;
	printf("enter:\n1 for easy\n2 for normal\n3 for hard\n4 for chad gamers\n5 for impossible\n6 for race\nenter difficulty: ");
	scanf("%i", &difficulty);
	if(difficulty == 6)
	{
		race();
	}
	else
	{
		host(difficulty);
	}
}
