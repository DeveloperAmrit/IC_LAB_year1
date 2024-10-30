#include <stdio.h>

void sort(int*,int);

int main(){
    int n;
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",array+i);
    }
    sort(array,n);
    for(int i=0;i<n;i++){
        printf("%d ",*(array+i));
    }
    return 0;
}

void sort(int* array,int n){
    int b = 0;
    while(1)
    {
        for(int i=0;i< (n-1);i++){
            if(*(array+i)>*(array+i+1)){
                *(array+i) = *(array+i) - *(array+i+1);
                *(array+i+1) = *(array+i+1) + *(array+i);
                *(array+i) = *(array+i+1) - *(array+i);
            }
        }
        for(int i=0;i<(n-1);i++){
            if(*(array+i)<=*(array+i+1)){
                b++;
            }
        }
        if(b==(n-1)){
            break;
        }
        else{
            b=0;
        }
        
    }
}