#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the number\n");
    scanf("%d",&a);

    for(int i=1;i<-10;i++){
        printf("%d x %d = %d",a,i,a*i);
    }
}