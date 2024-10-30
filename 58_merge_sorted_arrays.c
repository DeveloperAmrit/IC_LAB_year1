#include <stdio.h>

int inputArraySepComma(int*);

int main(){
    int arr1[100],arr2[100],n1=0,n2=0;

    n1 = inputArraySepComma(arr1);
    n2 = inputArraySepComma(arr2);

    int arr3[n1+n2];
    
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
        printf("%d,",arr3[i]);
    }

    return 0;
}

int inputArraySepComma(int* array){
    int i=0;
    while(1){
        int a = (i==0)? scanf("%d",&array[i]):scanf(",%d",&array[i]);
        if(a==0){
            break;
        }
        else{
            i++;
        }
    }
    return i;
}