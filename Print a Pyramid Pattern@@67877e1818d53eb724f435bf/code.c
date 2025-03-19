#include <stdio.h>

int main() {
    int n;
    
    // Input the number of rows
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
