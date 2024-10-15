#include <stdio.h>

int main(){
    int c;
    scanf("%d", &c);
    
    int weights[c], sizes[c], prices[c];
    
    for(int i = 0; i < c; i++){
        scanf("%d", &weights[i]);
    }
    
    for(int i = 0; i < c; i++){
        scanf("%d", &sizes[i]);
    }
    
    for(int i = 0; i < c; i++){
        scanf("%d", &prices[i]);
    }

    float meanPrice = 0;
    for(int i = 0; i < c; i++){
        meanPrice += prices[i];
    }
    meanPrice = meanPrice / c;

  
    for(int i = 0; i < c; i++){
        int isSafe = 1;
        if(sizes[i] != 0 && weights[i] != 0) { 
            if((float)weights[i] / sizes[i] >= 1){
                if(meanPrice >= prices[i]){
                    isSafe = 0;
                }
            } else {
                float meanPrW = 0;
                for(int j = 0; j < c; j++){
                    meanPrW += (float)prices[j] / weights[j];
                }
                meanPrW = meanPrW / c;
                if(meanPrW >= (float)prices[i] / weights[i]){
                    isSafe = 0;
                }
            }
        }
        printf("%d", isSafe);
        if (i < c - 1) {
            printf(" "); 
        }
    }
    
    return 0;
}
