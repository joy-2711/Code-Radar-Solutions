#include <stdio.h>

int main() {
    int n;
    
    // Input the size of the square
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Loop for columns
        for (int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
