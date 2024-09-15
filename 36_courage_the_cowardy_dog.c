#include <stdio.h>

int main(){
    int arr1[24], N=0;
    for(int i=0;i<24;i++){
        scanf("%d",&arr1[i]);
        if(arr1[i]<0){
            N = (i>N)? 0 : N-i;
        }
        else if(arr1[i]>0){
            N += 23-i;
        }
    }
    printf("%d",N);
}