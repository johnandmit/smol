#include <stdio.h>
void sort(int a[], int n)
{
    int vitrimax = 0, i;
    while (n > 0)
    {
        vitrimax = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] > a[vitrimax])
            {
                vitrimax = i;
            }
        }
        int temp = a[vitrimax];
        a[vitrimax] = a[n - 1];
        a[n - 1] = temp;
        n--;
    }
}
int main()
{
    int a[8] = { 3, 2, 7, 1, 5, 2, 8, 5 };
    sort(a, 8);
    for (int i = 0; i < 8; i++)
    {
        printf("%i ", a[i]);
    }
}
