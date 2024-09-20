// without using second array
#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<n/2;i++){
        int a = arr1[n-1-i];
        arr1[n-1-i] = arr1[i];
        arr1[i] = a;
    }

    for(int i=0;i<n/4;i++){
        int a = arr1[n/2-1-i];
        arr1[n/2-1-i] = arr1[i];
        arr1[i] = a;
    }

    for(int i=(n/4)+1;i<n/2;i++){
        int a = arr1[n-1-i];
        arr1[n-1-i] = arr1[i];
        arr1[i] = a; 
    }

    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
}