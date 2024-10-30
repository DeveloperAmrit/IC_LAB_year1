#include <stdio.h>

int minimumCapacity(int n,int* arr1,int days);

int main(){
    int n;
    scanf("%d",&n);
    
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    int days;
    scanf("%d",&days);

    printf("%d",minimumCapacity(n,arr1,days));


}

int minimumCapacity(int n,int* arr1,int days){

    int min_cap = arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]>min_cap){
            min_cap = arr1[i];
        }
    }

    int i=0;
    int days_req=0;
    while(i<n){
        int sum = 0;
        while((sum + arr1[i])<=min_cap){
            sum+=arr1[i];
            i++;
        }
        days_req++;
        if(days_req > days){
            i=0;
            days_req=0;
            min_cap++;
        }
    }
    return min_cap;
}