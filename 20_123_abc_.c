#include <stdio.h>

int main(){
    int a;
    char b,c;
    scanf("%d",&a);

    // for loop
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            // printf("%d",j);
        }
        // printf("\n");
    }

    // while loop
    b=1;
    while(b<=a){
        c=1;
        while (c<=b)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
        b++;
    }
}