#include <math.h>
#include <stdio.h>
int main(){
  int n[1000];
  int a=-1,counter=0,sum=0,nIs0=0,x,ez=0,thing;
  float average=0,negativeSum=0,congta=0;
  printf("enter n>10 to stop\n");
  do{
      printf("enter n:");
      scanf("%i",&thing);
      if(thing<10){
      n[ez]=thing;
      ez++;}
  }while(thing<10);
  for(counter=0;counter<ez;counter++)
  {
  a++;
  printf("%i,",n[a]);
  if(n[a]==0){
      nIs0++;
    }
  else if(n[a]>0){
      sum+=n[a];
    }
  else if(n[a]<0)
    negativeSum+=n[a];
    congta++;
  }
  average=negativeSum/congta;
  printf("\n%i",nIs0);
  printf("\n%i",sum);
  printf("\n%f",average);

printf("\nenter x: ");
scanf("%i",&x);
a=-1;
counter=-1;
do{
counter++;
a++;
if(a>ez){
  printf("the number you just enter doesn't appear on the array");
  return 0;
}
  }while(x!=n[a]);
printf("the place number of x is:%i",counter);
}
