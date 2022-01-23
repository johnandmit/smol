#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
    if(n>1)
        for (size_t i = 2; i <= sqrt(n); i++)
            if (n % i)
                return 1;
    return 0;
}
int main()
{
    printf("%i", is_prime(-2));
}
