#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("Valid if the sides form a triangle");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}