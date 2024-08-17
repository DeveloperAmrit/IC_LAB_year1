#include<stdio.h>

int main() {
    
    int P,T,R;
    float A;
    scanf("%d %d %d",&P,&T,&R);
    A = ((P*T*R)/100.0);
    printf("%.3f",A);


    return 0;
}