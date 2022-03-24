#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char input[50], guesses, thing[50];
    int n;
    printf("game: 1 player will enter a word, the other have to guess it\n");
    printf("enter input: ");
    gets(input);
    for (int i = 0; i < 1000; i++)
    {
        printf("\n");
    }
    n = strlen(input)+5;
    printf("RULES:you will have %i guesses\nthe question marks will represent how many character in the word player 1 have entered above\nthe question marks will show you what character you got correct\nyou can only enter 1 character at a time\nyou can enter a word but if it doesn't match the answer then it will take the first letter of it\n", n);
    for (int o = 0; o < strlen(input); o++)
        {
            thing[o]='?';
        }
    for (int i = 0; i < n; i++)
    {
        printf("enter character (guess: %i): ", i + 1);
        {
            char input1[50];
            scanf("%s", &input1);
            if(strstr(input1,input))
            {
                printf("GG");
                return 0;
            }
            else
            guesses = input1[0];
        }
        for (int e = 0; e < strlen(input); e++)
        {
            if (strchr(input, guesses) && isalpha(input[e]) && guesses == input[e])
            {
                thing[e] = guesses;
            }
        }
        for (int o = 0; o < strlen(input); o++)
        {
            printf("%c",thing[o]);
        }
        printf("\n");
        if (strstr(thing, input))
        {
            printf("GG");
            return 0;
        }
    }
}
