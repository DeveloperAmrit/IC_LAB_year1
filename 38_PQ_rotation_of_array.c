#include<stdio.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    k = k%n;
    
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    int arr2[n-k];
    for(int i=0;i<n-k;i++){
        arr2[i] = arr1[i];
    }
    
    for(int i=0;i<k;i++){
        arr1[i] = arr1[n-k+i];
    }
    for(int i=k;i<n;i++){
        arr1[i] = arr2[i-k];
    }
    
    
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}