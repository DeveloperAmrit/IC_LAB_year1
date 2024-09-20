#include <stdio.h>

// using recursion
void pattern1(int lines,int index){
    if(index<=lines){
        for(int i=0;i<index;i++){
            printf("*");
        }
        printf("\n");
        return pattern1(lines,++index);
    }
}

int main(){
    pattern1(5,1);
    
    
}
