#include <stdio.h>
int strLen(const char *string)
{
    int i=0;
    for(;*string!='\0';string++)i++;
    return i;
}
int main()
{
    char string[] = "mit cao";
    int i=0;
    i=strLen(string);
    printf("length of string = %i",i);
}
