#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    
    int sum =0;
    for(int i=n-1;i>=0;i--){
        sum += arr1[i];
        printf("%d ",sum);
    }
    
    

    return 0;
}
