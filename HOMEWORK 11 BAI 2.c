#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char s[1000];
    char character;
    int yeMan=0;
    printf("enter string: ");
    gets(s);
    printf("enter char: ");
    scanf("%c",&character);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==character){
            yeMan=1;
        }
    }
    if(yeMan==1){
        printf("char is in s");
    }
    else{
        printf("char is not in s");
    }
}
