#include <stdio.h>
int find_x(int a[], int n, int key)
{
    for (int i=0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
        if(i==n-1){
            return 0;
        }
    }
}
int main()
{
    int a[8] = {3, 2, 7, 1, 9, 2, 8, 5},key=1;
    if (find_x(a, 8, key) == 0)
    {
        printf("key is not in a");
    }
    else
    {
        printf("the place we found key is in a =%i", find_x(a, 8, key));
    }
}
