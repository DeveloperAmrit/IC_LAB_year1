#include<stdio.h>

int main(void)
{
    findTheNumber();
    return 0;
}

int findTheNumber(){
    float a,b,sum,diff;
    
    printf("Enter the sum \n");
    scanf("%f",&sum);

    printf("Enter the difference \n");
    scanf("%f",&diff);

    a = (sum+diff)/2;
    b = (sum-diff)/2;
    
    printf("The numbers are %f and %f",a,b);
    return 0;
}