#include <math.h>
#include <stdio.h>
int main()
{
int n,ez,a;
do{
    printf("value of n: ");
    scanf("%i",&n);
  }while(n>15||n<=0);
for(ez=0,a=0;ez<n&&a<n;){
    a++;
  if(a%2==0){
ez=a;
      printf("%i\n",ez);
  }

      }
    }
