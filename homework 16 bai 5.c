#include <stdio.h>
int main()
{
    int n, s[11], i = 0, x, largest2,q=0,temp;
    printf("enter n: ");
    scanf("%i", &n);
    do
    {
        printf("enter x: ");
        scanf("%i", &x);
        s[i] = x;
        i++;

    } while (i < n);
    for (int e = 0; e < i; e++)
    {
        printf("%i ", s[e]);
    }
    for (int e = 0; e < i; e++)
    {
        if (s[q] < s[e])
        {
            q=e;
        }
    }
    temp=s[i-1];
    s[q]=temp;
    s[i-1]=0;
    q=0;
    for (int e = 0; e < i-1; e++)
    {
        if (s[q] < s[e])
        {
            q=e;
        }
    }
    largest2=s[q];
    printf("2nd largest=%i ", largest2);
}
