#include <stdio.h>
int main()
{
    int n, arr[11], x;
    unsigned i = 0;
    printf("enter n: ");
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter x: ");
        scanf("%i", &x);
        arr[i] = x;
    }
    for (i = 0; i < n; i++)
        printf("%i ", arr[i]);
    int largest1st, largest2nd;
    largest1st = largest2nd = -2147483648;
    for (i = 0; i < n; i++)
    {
        if(largest1st < arr[i])
        {
            largest2nd = largest1st;
            largest1st = arr[i];
        }
        else if(largest2nd < arr[i])
        {
            largest2nd = arr[i];
        }
    }
    printf("2nd largest=%i ", largest2nd);
}
