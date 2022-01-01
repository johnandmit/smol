#include <math.h>
#include <stdio.h>
int main()
{
    int n, counter = 0,big=0,small,counter1 = 0;
    float average,sum=0;
    int a[1000];
    do
    {
        printf("enter n: ");
        scanf("%i", &n);
        if (n != 0)
        {
            a[counter] = n;
            sum+=a[counter];
            counter++;
            counter1++;
        }
    } while (n != 0);
    counter = 0;
    for (; counter < counter1; counter++)
    {
        if(a[counter]>big){
            big=a[counter];
        }
    }
    counter = 0;
    for (small=big; counter < counter1; counter++)
    {
        if(a[counter]<small){
            small=a[counter];
        }
    }
    average=sum/counter1;
    printf("the biggest number is:%i\nthe smallest number is:%i\nthe average is:%f",big,small,average);
}
