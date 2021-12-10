#include <stdio.h>
#include<math.h>

int main(void) 
{
  int a,b,c;
  printf("nhap do giai canh a b c: ");
  scanf("%i %i %i",&a,&b,&c);
  if(a+b>c||a+c>b||b+c>a){
    if(a==b||b==c||a==c){
      printf("tam giac can");
    }
    if(a==b==c){
      printf("tam giac deu");
    }
    if(a%5==0&&b%4==0){
      printf("tam giac vuong");
    }
    if(a%4==0&&b%3==0){
      printf("tam giac vuong");
    }
    if(a%3==0&&b%5==0){
      printf("tam giac vuong");
    }
  }
  else{
    printf("khong phai la mot tam giac");
  }
}
