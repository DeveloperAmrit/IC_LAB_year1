#include <stdio.h>

int calc(int a, int b, int c){
    switch (c)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    case '%':
        return a%b;
        break;
    default:
        printf("\nOperation not listed!");
        return -1;
        break;
    }
}

int main(){
    int a,b;
    char c;

    printf("Enter <number1> <operator> <number2>\n");
    scanf("%d %c %d",&a,&c,&b);

    printf("%d %c %d = %d",a,c,b,calc(a,b,c));
}