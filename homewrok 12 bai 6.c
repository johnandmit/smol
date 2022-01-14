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
        if(islower(s[i])!=0){
            yeman++;
            break;
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if(isupper(s[i])!=0){
            yeman++;
            break;
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if(isalnum(s[i])==0){
            yeman++;
            break;
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if(isdigit(s[i])!=0){
            yeman++;
            break;
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if(strlen(s)>=6&&strlen(s)<=16){
            yeman++;
            break;
        }
    }
    if(yeman==5){
        printf("password hop le");
    }
    else{
        printf("password khong hop le");
    }
}
