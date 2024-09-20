#include <stdio.h>

void pattern1(int lines){
    for(int i=1;i<=lines;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int lines){
    for(int i=1;i<=lines; i++){
        for(int j=0;j<lines-i;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void pattern3(int lines){
    lines *= 2;
    for(int i=1;i<=lines;i+=2){
        for(int j=0;j<(lines-i)/2;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void pattern4(int lines){
    lines *= 2;
    for(int i=lines-1;i>0;i-=2){
        for(int j=0;j<(lines-i)/2;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void pattern5(int lines){
    for(int i=1;i<=lines;i++){
        for(int j=0;j<lines-i;j++){
            printf(" ");
        }
        for(int j=i;j<=(i*2-1);j++){
            printf("%d",j);
        }
        for(int j=(i*2-2);j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}

int main(){
    
    pattern1(5);
    pattern2(5);
    pattern3(4);
    pattern4(4);
    pattern5(5);
}