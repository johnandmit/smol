#include <stdio.h>
int get_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int get_min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
int main(void)
{
    int a=4, b=5,a1,b1;
    a1=get_max(a,b);
    b1=get_min(a,b);
    printf("%i\n%i",a1,b1);
}
