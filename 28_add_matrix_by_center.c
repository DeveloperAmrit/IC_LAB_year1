#include <stdio.h>

int main(){

    // first matrix
    int a=3,b=3;
    int arr1[3][3] = {};
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter %dth element in %dth row\n",j+1,i+1);
            int c;
            scanf("%d",&c);
            arr1[i][j] = c;
    }
    }
    for(int i=0;i<a;i++){
        printf("| ");
        for(int j=0;j<b;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("|");
        printf("\n");
    }

    // second matrix
    a=5;
    b=5;
    int arr2[5][5] = {};
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter %dth element in %dth row\n",j+1,i+1);
            int c;
            scanf("%d",&c);
            arr2[i][j] = c;
    }
    }
    for(int i=0;i<a;i++){
        printf("| ");
        for(int j=0;j<b;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("\n\nSummation\n\n");


    for(int i=0;i<3;i++){
        printf("| ");
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("|");
        printf("\n");
    }

    printf("\n+\n");

    for(int i=0;i<5;i++){
        printf("| ");
        for(int j=0;j<5;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("|");
        printf("\n");
    }

    printf("\nis\n");
    // summation

    int arr3[5][5] = {};

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr3[i][j] = arr2[i][j]; 
        }
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            arr3[i][j] = arr1[i-1][j-1] + arr2[i][j]; 
        }
    }

    for(int i=0;i<5;i++){
        printf("| ");
        for(int j=0;j<5;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("|");
        printf("\n");
    }
}