#include <stdio.h>
void check(int n, int m)
{
    int p=0,sum=0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i==0&&m%i==0)
        {
            p++;
            sum+=i;
        }
    }
    printf("number of uoc = %i ",p);
    printf("\nsum = %i",sum);
}
int main()
{
    int n, m;
    printf("enter n: ");
    scanf("%i",&n);
    printf("enter m: ");
    scanf("%i",&m);
    check(n, m);
}
