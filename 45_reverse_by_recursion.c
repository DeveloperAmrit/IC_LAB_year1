#include <stdio.h>

int reverseByIteration(int);
int reverseByRecursion_(int,int);
int reverseByRecursion(int);

int main(){
    int n;
    scanf("%d",&n);

    printf("By iteration we have %d", reverseByIteration(n));
    printf("\nBy recursion we have %d",reverseByRecursion(n));
}

int reverseByRecursion(int n){
    return reverseByRecursion_(n,0);
}

// Helper function
int reverseByRecursion_(int n,int rn){
    if(n==0){
        return rn;
    }
    else{
        rn = rn*10 + n%10;
        n /= 10;
        return reverseByRecursion_(n,rn);
    }
}


int reverseByIteration(int n){
    int rn = 0;
    while(n>0){
        rn = rn*10 + n%10; 
        n = n/10;
    }
    return rn;
}