#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=r;i>0;i++)
    {
        for(int j=0;j>i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}