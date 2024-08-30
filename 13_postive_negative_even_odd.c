#include<stdio.h>

int main() {

    long long int a;
    scanf("%lld",&a);
    
    if(a>0){
        (a%2==0)? printf("Positive Even") : printf("Positive Odd");
    }
    else if(a<0){
        ((-a)%2==0)? printf("Negative Even") : printf("Negative Odd");
    }
    else{
        printf("Zero");
    }

    return 0;
}
