#include <stdio.h>
#include <stdlib.h>

int inputArraySepComma(int**);

int main(){
    int *arr1=NULL,*arr2=NULL,n1=0,n2=0;

    n1 = inputArraySepComma(&arr1);
    n2 = inputArraySepComma(&arr2);

    int *arr3 = (int*)malloc((n1+n2)*sizeof(int));
    
    int i_1 = 0;
    int i_2 = 0;

    for(int i=0;i<(n1+n2);i++){
        if(i_1 >= n1){
            arr3[i] = arr2[i_2++];
        }
        else if(i_2 >= n2){
            arr3[i] = arr1[i_1++];
        }
        else if( arr1[i_1] <= arr2[i_2]){
            arr3[i] = arr1[i_1++];
        }
        else{
            arr3[i] = arr2[i_2++];
        }
    }

    for(int i=0;i<(n1+n2);i++){
       (i==0)? printf("%d",arr3[i]) : printf(",%d",arr3[i]);

    }
    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}

int inputArraySepComma(int** addressOfArray){
    int i=0;
    int size=10;

    *addressOfArray = (int*) malloc(size * sizeof(int));

    while(1){
        if (i == size) {
            size *= 2;
            *addressOfArray = (int*) realloc(*addressOfArray, size * sizeof(int));
        }
        int a = (i==0)? scanf("%d",*addressOfArray+i):scanf(",%d",*addressOfArray+i);
        if(a==0){
            break;
        }
        else{
            i++;
        }
    }
    return i;
}
