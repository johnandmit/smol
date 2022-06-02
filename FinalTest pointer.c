#include <stdio.h>
#include <string.h>

void printing(int GuessNum, char missedWords[], char censoredWords[])
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
void EnterWord(char secretWords[], char censoredWords[])
{
    printf("enter secret word: ");
    scanf("%s", secretWords);
    for (int i = 0; i < strlen(secretWords); i++)
    {
        censoredWords[i] = '_';
        censoredWords[i + 1] = '\0';
    }
    for (int i = 0; i < 1111; i++)
        printf("\n");
    getc(stdin);
}
void Check(char guess, char secretWords[], int *missedNum, int *GuessNum, char missedWords[], char censoredWords[], int n)
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
        missedWords[*missedNum] = guess;
        (*GuessNum)++;
        (*missedNum)++;
    }
    if (strcmp(secretWords, censoredWords) == 0)
    {
        printf("GOOD JOBB!!!!!!!!\nYOU TOOK %i TRIES TO GET IT :)\n", n + 1);
        (*GuessNum) = 10;
    }
}
int main()
{
    char guess, guessedWords[50], missedWords[50], censoredWords[50], secretWords[50];
    int numCenWords, GuessNum, missedNum;
    int i;
    char check;
    do
    {
        GuessNum = 1;
        numCenWords = 0;
        missedNum = 0;
        i = 0;
        for(int e = 0; e < 50; e++)
        {
            missedWords[e] = '\0';
            censoredWords[e] = '\0';
            secretWords[e] = '\0';
            guessedWords[e] = '\0';
        }
        EnterWord(secretWords, censoredWords);
        do
        {
            printing(GuessNum, missedWords, censoredWords);
            do
            {
                printf("enter guess: ");
                guess = getc(stdin);
                getc(stdin);
            } while (strchr(guessedWords, guess) != NULL);
            guessedWords[i] = guess;
            Check(guess, secretWords, &missedNum, &GuessNum, missedWords, censoredWords, i);
            i++;
        } while (GuessNum < 7);
        printf("the answer is %s\n", secretWords);
        if (GuessNum != 10)
            printf("YOU LOSE\n");
        printf("try again? <y,n> ");
        scanf("%c", &check);
    } while (check == 'y');
}
