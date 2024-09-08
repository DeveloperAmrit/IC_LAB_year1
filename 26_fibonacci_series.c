#include <stdio.h>

int main(){
    int n,a=0,b=1,c;
    scanf("%d",&n);
    n+=1;

    if(n>2){
        for(int i=0;i<n-2;i++){
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d",c);
    }
    else if(n>0){
        (n==1)? printf("%d",a) : printf("%d",b) ;
    }
    else{
        printf("-1");
    }

}