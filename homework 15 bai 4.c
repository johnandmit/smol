#include <stdio.h>
#include <string.h>
void ezcheck1(char word1[], char word2[])
{
    char sameChars[256];
    int sameAmount = 0;
    int len = strlen(word1);
    for (int i = 0; i < len; i++)
    {
        if(strchr(word2, word1[i]),strchr(sameChars,word1[i])==0){
            sameChars[sameAmount++] = word1[i];
        }
    }
    sameChars[sameAmount] = '\0';
    printf("%s\n",sameChars);

}
int main()
{
    char word1[50], word2[50];
    printf("enter word 1: ");
    gets(word1);
    printf("enter word 2: ");
    gets(word2);
    if(strlen(word1)<strlen(word2))
        ezcheck1(word1, word2);
    else 
        ezcheck1(word2, word1);
}