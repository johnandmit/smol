#include <stdio.h>
int is_between(int x, int y, int z)
{
    if (y >= x && z >= y)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int e=is_between(1,2,3);
    printf("%i",e);
}
