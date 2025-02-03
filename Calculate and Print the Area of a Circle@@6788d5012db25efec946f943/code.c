#include <stdio.h>
int main()
{
    double r;
    double pi= 3.14159;
    scanf("%lf",&r);
    double area=pi*r*r;
    printf("Area: %.2lf",area);
    return 0;
}