#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    int alice_sum =0;
    int bob_sum=0;

    int option1 = 0;
    int option2 = n-1;

    for(int i=0;i<n;i++){

        if(arr1[option1]>arr1[option2]){
            (i%2==0)? (alice_sum += arr1[option1++]) : (bob_sum += arr1[option1++]);
        }
        else{
            (i%2==0)? (alice_sum += arr1[option2--]) : (bob_sum += arr1[option2--]);
        }
    }
    printf("%d %d",alice_sum,bob_sum);
}