#include <stdio.h>
int main()
{
    int a=2,b=7;
    int *p1=&a,*p2=&b;
    printf("sum = %i",*p1+*p2);
}
