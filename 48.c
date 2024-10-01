#include <stdio.h>
#include <string.h>

int hexadecimalToDecimal(char str[10]);
char* decimalToHexadecimal(int n);
int main(){
    char str[10];
    scanf("%10s",str);
    int n;
    scanf("%d",&n);

    printf("%d",hexadecimalToDecimal(str));
    printf("\n%s",decimalToHexadecimal(n));

    return 0;
}

int hexadecimalToDecimal(char str[10]){
    int base = 1;
    int len = strlen(str);
    int decimal = 0;
    for(int i=len-1;i>=0;i--){
        if(str[i]>=0 && str[i]<=9){
            decimal += str[i]*base;
        }
        else if(str[i]>='U' && str[i]<='Z'){
            decimal += (str[i] - 75)*base;
        }
        else if(str[i]>='u' && str[i]<='z'){
            decimal += (str[i] - 107)*base;
        }
        base *= 16;
    }
    return decimal;
}

char* decimalToHexadecimal(int n){
    static char hex[100];
    if(n==0){
        return "0";
    }
    int i=0;
    while(n!=0){
        int r = n%16;
        if(r>=0 && r<10){
            hex[i] = r + '0';
        }
        else if(r>=10){
            hex[i] = 'U' + r-10;
        }
        i++;
        n = n/16;
    }
    return hex;
}
