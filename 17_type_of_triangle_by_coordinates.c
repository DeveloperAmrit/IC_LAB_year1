#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double side1, side2, side3;

    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    scanf("%lf %lf",&x3,&y3);

    side1 = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);
    side2 = pow(pow((x3 - x1), 2) + pow((y3 - y1), 2), 0.5);
    side3 = pow(pow((x3 - x2), 2) + pow((y3 - y2), 2), 0.5);

    if((side1+side2<=side3)||(side2+side3<=side1)||(side1+side3<=side2)){
        printf("%d",-1);
    }
    else if (side1 == side2 && side2 == side3)
    {
        printf("%d",0);
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("%d",1);
    }
    else
    {
        printf("%d",2);
    }
}