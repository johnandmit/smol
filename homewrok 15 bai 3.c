#include <stdio.h>
#include <string.h>
int ezcheck(char word1[],char word2[])
{
    if (strcmp(word1, word2))
        return 0;
    else
        return 1;
}
int main()
{
    char word1[50],word2[50];
    printf("enter s: ");
    gets(word1);
    printf("enter e: ");
    gets(word2);
    strrev(word2);
    printf("%i",ezcheck(word1,word2));
}
