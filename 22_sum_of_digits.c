#include <stdio.h>

int main(){
    long long int n,b=0;
    scanf("%lld",&n);

    int i=10;
    while (n != 0){
        b += n%i;
        n = (n-n%i)/i;
    }
    (b<0)? printf("%lld",-b) : printf("%lld",b);
}