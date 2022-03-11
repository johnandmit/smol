#include <stdio.h>
struct person
{
    char* name;
};

int main()
{
    struct person list[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter name : ");
        list[i].name = (char*)malloc(50);
        gets(list[i].name);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n%s", list[i].name);
    }
}
