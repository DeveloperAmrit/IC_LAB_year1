#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the range\n");
    scanf("%d",&a);

    b=1;
    c=0;
    d=1;
    while (b<=a)
    {
        printf("%d ",b);
        b += 2;
        c += b;
        d = d*b;
    }
    printf("\n The sum is %d",c);
    printf("\n The product is %d",d);
}