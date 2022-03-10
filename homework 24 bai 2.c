#include <stdio.h>
int main(){
    char* day[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    for(char** i = day; i - day < 7;i++)
    {
        printf("%s ",*i);
    }
}
