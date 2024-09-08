#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int n = 1; n <= a; n++)
    {
        char b = 'A';
        for (int i = 1; i <= n; i++)
        {
            printf("%c", b++);
        }
        b--;
        for (int i = n; i < (2 * n - 1); i++)
        {
            printf("%c", --b);
        }
        printf("\n");
    }
}