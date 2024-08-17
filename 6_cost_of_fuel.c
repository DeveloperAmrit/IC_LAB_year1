#include <stdio.h>

int main(void)
{
    unsigned int S, M, D, R, L, C, X, Y, T;

    scanf("%d %d %d %d %d %d %d %d",&S, &M, &D, &R, &L, &C, &X, &Y);

    T = ((S+M+D+R+L-Y)*C)-X;

    printf("%d",T);
    return 0;
}
