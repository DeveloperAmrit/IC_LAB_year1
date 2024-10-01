#include <stdio.h>

long long int reverseByIteration(long long int);
long long int reverseByRecursion_(long long int,long long int);
long long int reverseByRecursion(long long int);

long long int main(){
    long long int n;
    scanf("%lld",&n);

    printf("By iteration we have %lld", reverseByIteration(n));
    printf("\nBy recursion we have %lld",reverseByRecursion(n));
}

long long int reverseByRecursion(long long int n){
    return reverseByRecursion_(n,0);
}

// Helper function
long long int reverseByRecursion_(long long int n,long long int rn){
    if(n==0){
        return rn;
    }
    else{
        rn = rn*10 + n%10;
        n /= 10;
        return reverseByRecursion_(n,rn);
    }
}


long long int reverseByIteration(long long int n){
    long long int rn = 0;
    while(n>0){
        rn = rn*10 + n%10; 
        n = n/10;
    }
    return rn;
}