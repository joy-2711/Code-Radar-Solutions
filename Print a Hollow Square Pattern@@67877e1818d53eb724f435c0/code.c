#include <stdio.h>

int main() {
    int n;

    // Input the size of the square
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Loop for columns
        for (int j = 1; j <= n; j++) {
            // Print '*' for first/last row or first/last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf("  "); // Print spaces inside the square
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
