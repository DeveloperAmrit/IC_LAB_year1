#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* string);

int main(){
    char str[1000];
    fgets(str,1000,stdin);
    str[strlen(str)-1] = '\0';
    reverseString(str);
    printf("%s",str);
    return 0;
}

void reverseString(char* string){
    int n = strlen(string);
    char reversedString[1001];
    int i=0;
    for(i=0;i<n;i++){
        reversedString[i] = string[i];
    }
    reversedString[i] = '\0';

    i=n-1;
    int b = 0;
    int j=0;

    while(i>=0){
        if(string[i]==' '){
            int c=0;
            while(c<b){
                reversedString[j] = string[i+c+1];
                j++;
                c++;
            }
            reversedString[j++] = ' ';
            reversedString[j] = '\0';
            b=0;
        }
        else{
        b++;
        }
        if(i==0){
            int a=0;
            int x =strlen(reversedString);
            while(string[a] != ' '){
                reversedString[x+a] = string[a];
                a++;
            }
            break;
        }
        i--;
    }
    for(int i=0;i<n;i++){
        string[i] = reversedString[i];
    }
}