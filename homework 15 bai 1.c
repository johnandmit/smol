#include <stdio.h>
int f(int n)
{
    if (n == 1||n == 2)
        return 1;
    else
        return f(n - 1)+f(n - 2);
}
int main()
{
    int n = 100;
    printf("fibonacci(%d) = %d", n, f(n));
    
}
