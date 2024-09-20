// without using second array
/**
 * Concept 
 * (i) Reverse the array
 * (ii) Reverse the first k elements
 * (iii) Reverse the last n-k elements
 */
#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    // reversing the array
    for(int i=0;i<n/2;i++){
        int a = arr1[n-1-i];
        arr1[n-1-i] = arr1[i];
        arr1[i] = a;
    }

    // reversing first k elements

    for(int i=0;i<k/2;i++){
        int a = arr1[k-1-i];
        arr1[k-1-i] = arr1[i];
        arr1[i] = a;
    }

    // reversing the last n-k elements
    for(int i=0;i<(n-k)/2;i++){
        int a = arr1[n-1-i];
        arr1[n-1-i] = arr1[k+i];
        arr1[k+i] = a;
    }

    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
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