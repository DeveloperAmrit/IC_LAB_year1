// INCOMPLETE

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter number of rows\n");
    scanf("%d", &a);
    printf("Enter number of columns\n");
    scanf("%d", &b);

    printf("Array 1 \n");

    int arr1[100][100] = matrixGenerator(a, b);
    printMatrix(a, b, arr1);

    printf("Array 2 \n");

    int arr2[100][100] = matrixGenerator(a, b);
    printMatrix(a, b, arr1);

    int arr3[100][100] = sum(a,b,arr1,arr2);
    printMatrix(arr3);
}

int matrixGenerator(rows, columns)
{
    int arr1[100][100];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter %dth element in %dth row\n", j + 1, i + 1);
            int c;
            scanf("%d", &c);
            arr1[i][j] = c;
        }
    }
    return arr1;
}

void printMatrix(rows, columns, array)
{
    int arr1[100][100] = array;
    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("|");
        printf("\n");
    }
}

int sum(rows, columns, arr1, arr2)
{   
    int arr1_[100][100] = arr1;
    int arr2_[100][100] = arr2;
    int arr3_[100][100] = {};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr3_[i][j] = arr1_[i][j] + arr2_[i][j];
        }
    }
    return arr3_;
}