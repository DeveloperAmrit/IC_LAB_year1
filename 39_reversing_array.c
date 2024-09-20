#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<n/2;i++){
        int c = arr1[n-1-i];
        arr1[n-1-i] = arr1[i];
        arr1[i] = c;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}

/**
 * General syntax of reversing

for(int i=0; i<(number of elements to be reversed)/2; i++){
    int a = arr1[last element index - i];
    arr1[last element index - i] = arr1[starting element index + i];
    arr1[starting element index + i] = a;
}

 */