#include<stdio.h>
#include<math.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    double a,b,c,d;
    a = (1.0)/n;
    printf("%f\n",a);
    b = pow(a,0.5);
    printf("%f\n",b);
    c = b + n;
    printf("%f\n",c);
    d = log(c);

    printf("%f",d);

    return 0;
}

// ------> Don't use 1/2, use 0.5 | 
//  1/2 return 0 as int/int returns int 
