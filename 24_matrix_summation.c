#include <stdio.h>

int main(){
    int a,b;
    printf("Enter rows\n");
    scanf("%d",&a);
    printf("Enter columns\n");
    scanf("%d",&b);

    int arr1[100][100] = {};
    int arr2[100][100] = {};

    printf("\nMatrix 1\n");
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
    
    printf("\nMatrix 2\n");
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

    printf("\nThe sum is \n");
    for(int i=0;i<a;i++){
        printf("| ");
        for(int j=0;j<b;j++){
            printf("%d ",arr1[i][j] + arr2[i][j]);
        }
        printf("|");
        printf("\n");
    }

    
}
