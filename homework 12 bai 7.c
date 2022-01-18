#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[80],e='$',a;
    int yeman = 0, ye = 0;
    printf("enter string: ");
    fgets(s,sizeof(s),stdin);
    a=s[0];
    for (int i = 0; i < strlen(s); i++)
    {
        if(a==s[i]){
            s[i]=e;
            printf("%c",s[i]);
        }
        else{
            printf("%c",s[i]);
        }
    }
}
