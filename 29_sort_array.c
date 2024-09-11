#include <stdio.h>

int main(){
    int arr1[16] = {1,3,2,5,4,6,4,5,7,23,45,234,-4,0,231,-1};

    int a = arr1[0];
    
    int b = 0;
    while(1)
    {
        for(int i=0;i< ((sizeof arr1/ sizeof arr1[0])-1);i++){
            if(arr1[i]>arr1[i+1]){
                arr1[i] = arr1[i] - arr1[i+1];
                arr1[i+1] = arr1[i+1] + arr1[i];
                arr1[i] = arr1[i+1] - arr1[i];
            }
        }
        for(int i=0;i<((sizeof arr1/ sizeof arr1[0])-1);i++){
            if(arr1[i]<=arr1[i+1]){
                b++;
            }
        }
        if(b==((sizeof arr1/ sizeof arr1[0])-1)){
            break;
        }
        else{
            b=0;
        }
        
    }
    
    for(int i=0;i<(sizeof arr1/ sizeof arr1[0]);i++){
        printf("%d ",arr1[i]);
    }
    
}