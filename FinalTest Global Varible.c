#include <stdio.h>
#include <string.h>

char secretWords[50];
char censoredWords[50];
char guessedWords[50];
char missedWords[50];
int GuessNum, missedNum;

void printing()
{
	printf("\n");
	switch (GuessNum)
	{
	case 1:
		printf("H A N G M A N\n");
		printf("  +---+\n");
		printf("  |   |\n");
		printf("      |\n");
		printf("      |\n");
		printf("      |\n");
		printf("===========\n");
		break;
	case 2:
		printf("  +---+\n");
		printf("  |   |\n");
		printf("  O   |\n");
		printf("      |\n");
		printf("      |\n");
		printf("      |\n");
		printf("===========\n");
		break;
	case 3:
		printf("  +---+\n");
		printf("  |   |\n");
		printf("  O   |\n");
		printf("  |   |\n");
		printf("      |\n");
		printf("      |\n");
		printf("===========\n");
		break;
	case 4:
		printf("  +---+\n");
		printf("  |   |\n");
		printf("  O   |\n");
		printf("  |   |\n");
		printf(" /    |\n");
		printf("      |\n");
		printf("===========\n");
		break;
	case 5:
		printf("  +---+\n");
		printf("  |   |\n");
		printf("  O   |\n");
		printf("  |   |\n");
		printf(" / \\  |\n");
		printf("      |\n");
		printf("===========\n");
		break;
	case 6:
		printf("  +---+\n");
		printf("  |   |\n");
		printf("  O   |\n");
		printf(" /|   |\n");
		printf(" / \\  |\n");
		printf("      |\n");
		printf("===========\n");
		break;
	case 7:
		printf("  +---+\n");
		printf("  |   |\n");
		printf("  O   |\n");
		printf(" /|\\  |\n");
		printf(" / \\  |\n");
		printf("      |\n");
		printf("===========\n");
		break;
	}
	printf("Missed letters: %s\n%s\n", missedWords, censoredWords);
}
void EnterWord()
{
	printf("enter secret word: ");
	scanf("%s", secretWords);
	for (int i = 0; i < strlen(secretWords); i++)
	{
		censoredWords[i] = '_';
		censoredWords[i+1] = '\0';
	}
	for (int i = 0; i < 1111; i++)
		printf("\n");
	getc(stdin);
}
void Check(char guess, int i)
{
	int no = 1;
	for (int i = 0; i < strlen(secretWords); i++)
	{
		if (guess == secretWords[i])
		{
			censoredWords[i] = guess;
			no = 0;
		}
	}
	if (no)
	{
		missedWords[missedNum] = guess;
		missedWords[missedNum+1] = '\0';
		GuessNum++;
		missedNum++;
	}
	if (strcmp(secretWords, censoredWords) == 0)
	{
		printf("GOOD JOBB!!!!!!!!\nYOU TOOK %i TRIES TO GET IT :)\n", i + 1);
		GuessNum = 10;
	}
}
int main()
{
	char guess;
	int numCenWords;
	int i;
	char check;
	do
	{
		GuessNum = 1;
		numCenWords = 0;
		missedNum = 0;
		i = 0;
		*missedWords = '\0';
		EnterWord();
		do
		{
			printing();
			do
			{
				printf("enter guess: ");
				guess = getc(stdin);
				getc(stdin);
			} while (strchr(guessedWords, guess) != NULL);
			guessedWords[i] = guess;
			Check(guess, i);
			i++;
		} while (GuessNum < 7);
		printf("the answer is %s\n", secretWords);
		if (GuessNum != 10)
			printf("YOU LOSE\n");
		printf("try again? <y,n> ");
		scanf("%c", &check);
	} while (check == 'y');
}
