#include <stdio.h>
int get_max(int a, int b,int c)
{
    if (a > b)
        return a;
    else if(c>b)
        return c;
    else
        return b;
}
int get_min(int a, int b,int c)
{
    if (a > b)
        return b;
    else if(a>c)
        return c;
    else
        return a;
}
int main(void)
{
    int a=4, b=5,c=7,a1,b1;
    a1=get_max(a,b,c);
    b1=get_min(a,b,c);
    printf("%i\n%i",a1,b1);
}
