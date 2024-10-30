#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char*);

int main(){
    char str[101];
    fgets(str,sizeof(str),stdin);
    str[100] = '\0';
    str[strlen(str)-1] ='\0';
    reverseString(str);
    printf("\n%s",str);
    return 0;
}

void reverseString(char* string){
    for(int i=0;i<strlen(string)/2;i++){
        if(*(string+i) != *(string+strlen(string)-1-i)){
            *(string+i) = *(string+i) - *(string+strlen(string)-1-i);
            *(string+strlen(string)-1-i) = *(string+i) + *(string+strlen(string)-1-i);
            *(string+i) = *(string+strlen(string)-1-i) - *(string+i);
        }
    }
}