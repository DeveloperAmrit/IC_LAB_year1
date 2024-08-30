#include <stdio.h>

int main(){
    int a,b,c;
    printf("How many lines\n");
    scanf("%d",&a);
    
    b=0;
    c=1;
    while (b<a)
    {
        int i=1;
        while (i<=c)
        {
            printf("*");
            i++;
        }
        printf("\n");
        c *= 2;
        b++;
    }
}