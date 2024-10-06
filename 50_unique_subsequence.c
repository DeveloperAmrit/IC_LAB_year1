#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[100];
    scanf("%s",str);

    int sn = 5;

    for(int i=0;i<=strlen(str)-5;i++){
        char subsequence[sn+1];
        int unique = 1;
        for(int j=0;j<sn;j++){
            subsequence[j] = str[i+j];
        }
        subsequence[sn] = '\0';

        for(int j=0;j<sn;j++){
            for(int k=j+1;k<sn;k++){
                if(subsequence[j]==subsequence[k]){
                    unique = 0;
                    break;
                }
            }
            if(!unique) break;
        }
        if(unique==1){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}