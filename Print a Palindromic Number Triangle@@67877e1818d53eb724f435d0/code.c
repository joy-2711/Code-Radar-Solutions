#include <stdio.h>

int main() {
    int n, i, j, space;
    
    // Taking input for the number of rows
    scanf("%d", &n);

    // Loop to print the palindromic number triangle
    for(i = 1; i <= n; i++) {  
        // Printing leading spaces for alignment
        for(space = 1; space <= n - i; space++) {  
            printf(" ");
        }

        // Printing increasing numbers
        for(j = 1; j <= i; j++) {  
            printf("%d", j);
        }

        // Printing decreasing numbers
        for(j = i - 1; j >= 1; j--) {  
            printf("%d", j);
        }
        
        printf("\n"); // Move to the next line
    }

    return 0;
}
