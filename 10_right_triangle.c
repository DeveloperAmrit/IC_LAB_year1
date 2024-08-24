#include <stdio.h>

int main(){
    int height,base;

    printf("Enter height \n");
    scanf("%d",&height);

    printf("\n");
    int i=1;
    while (i<=height)
    {
        int a =0;
        while (a<i)
        {
            printf("*");
            a++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}