#include <stdio.h>

int main(void){
  printf("Whose table you want\n");
  int n;
  scanf("%d",&n);
  for(int i=1;i<=10;i++){
    printf("%d X %d = %d\n",n,i,n*i);
  }
}