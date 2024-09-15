// Learn Kadane's Algorithm
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int max_so_far = arr1[0];
    int current_max = arr1[0];

    for (int i = 1; i < n; i++) {
        current_max = (arr1[i] > current_max + arr1[i]) ? arr1[i] : current_max + arr1[i];
        max_so_far = (current_max > max_so_far) ? current_max : max_so_far;
    }

    printf("%d\n", max_so_far);
}
