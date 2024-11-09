#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    int* arr1 = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int counter=0;
        for(int j=0;j<n;j++){
            if(arr1[i]==arr1[j]){
                counter++;
            }
        }
        if(counter==k){
            sum+= arr1[i];
        }
    }
    if(sum==0){
        printf("-1");
    }
    else{
        printf("%d",sum);
    }
    free(arr1);
    return 0;
}