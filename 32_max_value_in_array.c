#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];

    for(int i =0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    // largest
    int max_value = 0;
    for (int i = 0; i < n; i++){
        if(arr1[i]>max_value){
            max_value = arr1[i];
        }
    }
    printf("\nLargest value is %d",max_value);

    //second largest
    int second_max=0;
    for(int i=0;i<n;i++){
        if(arr1[i]>second_max && arr1[i]!=max_value){
            second_max = arr1[i];
        }
    }
    printf("\nSecond largest is %d",second_max);
}