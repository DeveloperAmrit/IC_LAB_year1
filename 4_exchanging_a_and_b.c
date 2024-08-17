// Exchanging two numbers
#include <stdio.h>

int main(void)
{
    int a = 9;
    int b = 8;

    // exchanging a and b
    a = a-b;
    b = b+a;
    a = b-a;

    printf("a is %d and b is %d",a,b);
    return 0;
}

