#include <stdio.h>

int maxSum(int n,int* array,int k);

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    printf("%d",maxSum(n,arr1,k));
}

int maxSum(int n,int* array,int k){
    int count=0;
    for(int i=0;i<n;i++){
        if(array[i]<0 && count<k){
            array[i] = -array[i];
            count++;
        }
    }
    if((count-k)%2 != 0){
        int min_i=0;
        for(int i=0;i<n;i++){
            if(array[i]<array[min_i]){
                min_i = i;
            }
        }
        array[min_i] = -array[min_i];
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum += array[i];
    }
    return sum;
}