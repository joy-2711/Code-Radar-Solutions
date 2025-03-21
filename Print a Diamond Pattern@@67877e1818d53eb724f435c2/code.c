#include <stdio.h>

int main() {
    int n, i, j, space;

    // Taking input for the number of rows in the upper half
    scanf("%d", &n);

    // Upper part of the diamond
    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++)
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    // Lower part of the diamond
    for(i = n - 1; i >= 1; i--) {
        for(space = 1; space <= n - i; space++)
            printf(" ");
        for(j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
