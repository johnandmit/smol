#include <stdio.h>
#include <string.h>
int Check(char string[]){
    size_t length = strlen(string);
    char flipedString[length];
    for (size_t i = 0; i < length; i++)
    {
        flipedString[i] = string[length -1- i];
    }
    flipedString[length] = 0;
    return strcmp(string, flipedString)? 0 : 1;
}
int main()
{
    char text[50];
    printf("enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strlen(text)-1] = 0;
    printf("%i\n",Check(text));
}
