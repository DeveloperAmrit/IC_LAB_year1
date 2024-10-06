#include <stdio.h>

void transposeSquareMatrix(int n,int matrix[n][n]);
void reverseArray(int n,int array[n]);
void printSquareMatrix(int n,int matrix[n][n]);

int main(){
    int n;
    scanf("%d",&n);

    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printSquareMatrix(n,arr1);

    transposeSquareMatrix(n,arr1);

    for(int i=0;i<n;i++){
        reverseArray(n,arr1[i]);
    }
    printSquareMatrix(n,arr1);
}

void transposeSquareMatrix(int n,int matrix[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void reverseArray(int n,int array[n]){
    for(int i=0;i<n/2;i++){
        int temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
}


void printSquareMatrix(int n,int matrix[n][n]){
    for(int i=0;i<n;i++){
        printf("| ");
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("|\n");
    }
}