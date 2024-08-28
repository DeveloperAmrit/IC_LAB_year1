#include <stdio.h>

int main(void){
  float a,b,c;
  printf("Enter first side\n");
  scanf("%f",&a);
  printf("Enter second side \n");
  scanf("%f",&b);
  printf("Enter third side \n");
  scanf("%f",&c);
  
  if(a==b && b==c){
    printf("Equilateral");
  }
  else if(a==b || b==c || c==a){
    printf("Isosceles ");
  }
  else{
    printf("Scalene");
  }
}