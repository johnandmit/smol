#include <stdio.h>
#include <string.h>
void ezcheck1(char word1[], char word2[])
{
    char sameChars[256];
    int sameAmount = 0;
    int len = strlen(word1);
    for (int i = 0; i < len; i++)
    {
        if (strchr(word2, word1[i]) && strchr(sameChars, word1[i]) == 0)
        {
            sameChars[sameAmount++] = word1[i];
        }
    }
    for (int i = 0; i < sameAmount; i++)
        printf("%c ", sameChars[i]);
}
int main()
{
    char word1[50], word2[50];
    printf("enter word 1: ");
    gets(word1);
    printf("enter word 2: ");
    gets(word2);
    ezcheck1(word2, word1);
}
