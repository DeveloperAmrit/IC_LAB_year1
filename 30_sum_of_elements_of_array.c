#include <stdio.h>

int main(){
    long long int sum=0;
    int n;
    scanf("%d",&n);
    int arr1[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        sum += arr1[i];
    }
    
    printf("%lld",sum);
}