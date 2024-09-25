#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
}


int factorial(int n){
    return (n==1 || n==0)? 1 : n*factorial(n-1);
}

