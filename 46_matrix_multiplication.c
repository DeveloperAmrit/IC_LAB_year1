#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    int arr3[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr3[i][j] = arr1[i][j]*arr2[j][i];
        }
    }

    // finding trace
    int trace=0;
    for(int i=0;i<n;i++){
        trace += arr3[i][i];
    }
    
    // USELESS for you : Checking wheteher trace is prime or not
    int nd = 0;
    for(int i=1;i<trace;i++){
        if(trace%i==0 && trace>0){nd++;}
    }   

    if(trace<0){
        printf("266444552");
    }
    else if(trace==0){
        printf("0");
    }
    else if(nd==1){
        printf("1");
    }
    else{
        printf("2");
    }

}
