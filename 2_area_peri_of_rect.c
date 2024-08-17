#include <stdio.h>

int main()
{
    long int l,b,area,peri;
    scanf("%ld %ld",&l,&b);

    area = l * b;
    peri = (2* (l + b));

    printf("%ld %ld",area,peri);
    return 0;
}
