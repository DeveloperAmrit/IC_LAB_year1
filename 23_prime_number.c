#include <stdio.h>
int main()
{
    long long int n, a;
    if(scanf("%lld", &a)==1 && a>2)
    {   
        n=a;
        for (long long int i = n - 1; i > 0; i--)
        {
            int prime = 1;
            for (long long int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1)
            {
                printf("%lld", i);
                break;
            }
        }
    }
    else{
        printf("266444552");
    }
}
