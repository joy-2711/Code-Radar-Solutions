#include <stdio.h>

int main() {
    int a, b;
    char ch;

    // Take input for two numbers
    scanf("%d %d", &a, &b);
    
    // Take input for operator (with a space before %c to ignore newline)
    scanf(" %c", &ch);

    // Decision-making for operations
    if (ch == '+') {
        printf("%d", a + b);
    } else if (ch == '-') {
        printf("%d", a - b);
    } else if (ch == '*') {
        printf("%d", a * b);
    } else if (ch == '/') {
        if (b == 0) {
            printf("Error");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Invalid");
    }

    return 0;
}

