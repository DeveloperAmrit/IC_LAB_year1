#include<stdio.h>

int main() {
    double a,b;
    int d,e;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    
    d = (int)a;
    e = (int)b;
    
    switch(c){
    case '+':
        printf("%.5f",(a+b));
        break;
    case '-':
        printf("%.5f",(a-b));
        break;
    case '*':
        printf("%.5f",(a*b));
        break;
    case '/':
        (b==0)? printf("The operation is invalid") : printf("%.5f",(a/b));
        break;
    case '%':
        printf("%d",(d%e));
        break;
    case '^':
        printf("%.5f",(d^e));
        break;
    case '&':
        printf("%d",(d&e));
        break;
    case '|':
        printf("%d",(d|e));
        break;
    default:
        printf("The operation is invalid");
    }

    return 0;
}