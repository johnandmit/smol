#include <stdio.h>
#include <math.h>
float findmin(float A[], int n)
{
    float min = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}
int main()
{
    float A[8] = {3.1, 0.2, 7, 1.5, -5, -2, 8.9, 5};
    printf("minimum = %f", findmin(A, 8));
}
