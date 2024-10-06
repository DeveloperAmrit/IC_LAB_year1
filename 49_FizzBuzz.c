#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n==0){
        printf("-1");
        return 0;
    }

    char arr1[n][20];

    for(int i=1;i<=n;i++){
        if(i%3 == 0 && i%5==0){
            strcpy(arr1[i-1],"FizzBuzz");
        }
        else if(i%3 == 0){
            strcpy(arr1[i-1],"Fizz");
        }
        else if(i%5==0){
            strcpy(arr1[i-1],"Buzz");
        }
        else{
            sprintf(arr1[i-1],"%d",i);
        }
    }

    for(int i=0;i<n;i++){
        printf("%s\n",arr1[i]);
    }
    return 0;
}