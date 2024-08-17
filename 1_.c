#include<stdio.h>

int main(void) {
    
    int a,b,sum,diff;
    
    scanf("%d %d",&sum,&diff);
    
    a = (sum+diff)/2;
    b = (sum-diff)/2;
    
    printf("%d %d",a,b);
    
    return 0;
}