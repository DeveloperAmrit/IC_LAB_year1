#include<stdio.h>

int main() {

    int a,b=0;
    scanf("%d",&a);
    while(a>0){
        if(a%2==1){
            b++;
        }
        a /=2;
    }
    if(b%2==0 && a>=0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
