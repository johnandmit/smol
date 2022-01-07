#include <math.h>
#include <stdio.h>
int main(){
  int a[1000];
  int k,kIsShown=0,n,counter=0;
  do
  {
    printf("enter n: ");
    scanf("%i", &n);
    if (n < 10)
    {
      a[counter]=n;
      counter++;
    }
  } while (n < 10);
  printf("enter k: ");
  scanf("%i",&k);
  for(int e = 0;e<counter;e++){
    if(a[e]==k){
      kIsShown++;
    }
  }
  printf("times k is in a=%i",kIsShown);
}
