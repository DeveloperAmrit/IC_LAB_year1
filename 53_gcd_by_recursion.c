#include <stdio.h>

int gcd(int,int);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}

int gcd(int a,int b){
    for(int i=(a<b)?a:b;i>0;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}
