#include <math.h>
#include <stdio.h>
int main()
{
 float height,weight;
 printf("nhap can nang va chieu cao: ");
 scanf("%f %f",&weight,&height);
 float BMI=weight/pow(height,2);
 if(BMI<18.5){
   printf("Underweight");
 }
 if(BMI>=18.5&&BMI<=24.9){
   printf("Normalweight");
 }
 if(BMI>=25&&BMI<=29.9){
   printf("Overweight");
 }
 if(BMI>=30){
   printf("obesity");
 }
}
