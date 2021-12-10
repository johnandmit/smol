#include <stdio.h>
#include<math.h>

int main() 
{
  int a,b,c;
  printf("nhap do giai canh a b c: ");
  scanf("%i %i %i",&a,&b,&c);
  if(a+b>c && a+c>b && b+c>a){
    if(a==b&&b==c){
      printf("tam giac deu");
    }
    else if(a==b||b==c||c==a){
      printf("tam giac can");
    }
    else if(a*a+b*b==c*c){
      printf("tam giac vuong");
    }
    else if(a*a+c*c==b*b){
      printf("tam giac vuong");
    }
    else if(b*b+c*c==a*a){
      printf("tam giac vuong");
    }
    else{
      printf("tam giác vô hướng");
    }
  }
  else{
    printf("khong phai la mot tam giac");
  }
}
