#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr1[n];

    // mean
    double sum=0;
    double mean;

    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        sum += arr1[i];
    }
    mean = (sum/n);
    
    printf("%.2lf",mean);

    //sorting the array
    // sorting code by me (infinite swapping) may take some time
    // we can also use qsort() from <stlib.h> but that had not been taught

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

    // mode
    int mode = arr1[0];
    int max_count = 1;
    
    for(int i=0;i<n;i++){
        int e = arr1[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(e==arr1[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count = count;
            mode = arr1[i];
        }
    }
    printf("\n%d",mode);


    
    // median
    (n%2==0)? printf("\n%.2f",(arr1[n/2-1]+arr1[(n/2)])/(2.0)) : printf("\n%d",arr1[(n/2)]);    
}