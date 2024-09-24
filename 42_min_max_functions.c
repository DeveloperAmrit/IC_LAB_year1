#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main(){
    printf("Enter the numbers\n");
    int a,b;
    scanf("%d %d",&a,&b);

    printf("The maxumum value is %d\n",max(a,b));
    printf("The minimum value is %d",min(a,b));
}

int max(int a,int b){
    return (a>b)? a:b;
}

int min(int a,int b){
    return (a<b)? a:b;
}