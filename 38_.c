#include <stdio.h>

void reverse(int arr[],int start,int end){
    while(start < end){
        int a  = arr[end];
        arr[end] = arr[start];
        arr[start] = a;
        start++;
        end--;
    }
}

void reverseUsingFor(int arr[],int start,int end){
    for(int i=0;i<(end-start+1)/2;i++){
        int a = arr[end-i];
        arr[end-i] = arr[start+i];
        arr[start+i] = a; 
    }
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    reverse(arr1,0,n-1);
    reverse(arr1,0,k-1);
    reverse(arr1,k,n-1);

    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
}