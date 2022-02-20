#include <stdio.h>
int main()
{
    int n,a[100],x,sum=0;
    printf("enter n: ");
    scanf("%i",&n);
    for(int i = 0;i<n;i++)
    {
        printf("enter stuff in array: ");
        scanf("%i",&x);
        a[i]=x;
    }
    for(int i = 0;i<n;i++)
    {
        
        if(i!=0&&a[i]>a[i-1]&&a[i]>a[i+1]&&i<n-1){
            sum+=a[i];
            printf("%i ",a[i]);
        }
    }
    printf("sum = %i",sum);
}
