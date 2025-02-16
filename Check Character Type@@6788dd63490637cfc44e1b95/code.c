#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'||ch=='O'|| ch=='U')
    {
        printf("Vowel");
    }
    else if (ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
    {
        printf("Digit");
    }
    else if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='&'||ch=='*'||ch=='_')
    {
        printf("Special Character");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}