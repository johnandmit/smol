#include <stdio.h>
#include <math.h>
float body_max(float m,float h)
{
    return m/pow(h,2);
}
int main()
{
    printf("%f",body_max(40,1.5));
}
