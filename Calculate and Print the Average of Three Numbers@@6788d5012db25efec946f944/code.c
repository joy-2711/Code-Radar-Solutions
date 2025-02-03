#include <stdio.h>
int main()
{
    double a;
    double b;
    double c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    float avg=(a+b+c)/3;
    printf("Average: %.2lf",avg);

    return 0;
}