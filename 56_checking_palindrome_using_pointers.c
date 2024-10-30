#include <stdio.h>
#include <string.h>

int isPalindrome(char* str);

int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);

    (isPalindrome(str))? printf("YES") : printf("NO");
    return 0;
}

int isPalindrome(char* str){
    int a = 1;
    for(int i=0;i<strlen(str)/2;i++){
        if(*(str+i) != *(str+strlen(str)-1-i)){
            a=0;
        }
    }
    return a;
}