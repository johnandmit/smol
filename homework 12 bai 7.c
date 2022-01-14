#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[1000];
    int yeman = 0, ye = 0;
    printf("enter string: ");
    gets(s);

    for (int i = 0; i < strlen(s); i++)
    {
        if(s[0]==s[i]){
            printf("$");
        }
        else{
            printf("%c",s[i]);
        }
    }
}
