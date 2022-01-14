#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    char s[1000],s1[1000];
    int yes=0;
    printf("enter s: ");
    gets(s);
    printf("enter s1: ");
    gets(s1);
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]!=s[i]){
            yes=0;
            break;
        }
        if(s1[i]=s[i]){
            yes=1;
        }
    }
    if(yes==1){
        printf("s1 bat dau = s");
    }
    else{
        printf("s1 khong bat dau =s");
    }
}
