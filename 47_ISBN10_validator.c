#include <stdio.h>
#include <string.h> 

int main() {
    char str[10];
    scanf("%10s", str); 

    if(strlen(str) != 10) {
        printf("Invalid ISBN format");
        return 0;
    }

    int sum = 0;
    for(int i = 0; i < 9; i++) {
        int c = str[i] - '0';
        if(c >= 0 && c <= 9) {
            sum += c * (i + 1);
        } else {
            printf("Invalid ISBN format");
            return 0; 
        }
    }

    if(str[9] >= '0' && str[9] <= '9') {
        sum += (str[9] - '0') * 10;
    } else if(str[9] == 'U') {
        sum += 10 * 10;
    } else {
        printf("Invalid ISBN format");
        return 0; 
    }

    if(sum % 11 == 0) {
        printf("Valid ISBN");
    } else {
        printf("Invalid ISBN");
    }
}

