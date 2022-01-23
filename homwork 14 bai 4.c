#include <stdio.h>
int find_x(int a[], int n, int key)
{
    for (int i=0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[8] = {3, 2, 7, 1, 9, 2, 8, 5},key=3;
    if (find_x(a, 8, key) == -1)
        printf("key is not in a");
    else
        printf("the place we found key is in a =%i", find_x(a, 8, key));
}
