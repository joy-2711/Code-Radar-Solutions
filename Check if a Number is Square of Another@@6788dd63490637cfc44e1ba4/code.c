#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a,&b);
    int c=b*b;
    if(c==a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}