#include <stdio.h>

void swapMinMax(int*,int);

int main(){
    int n;
    scanf("%d",&n);

    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    swapMinMax(arr1,n);
    
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}

void swapMinMax(int* array,int size){
    int min_i=0;
    int max_i=0;

    for(int i=0;i<size;i++){
        if(array[min_i]>array[i]){
            min_i=i;
        }
        if(array[max_i]<array[i]){
            max_i=i;
        }
    }

    int max = *(array+max_i);
    *(array+max_i) = *(array+min_i);
    *(array+min_i) = max; 
}