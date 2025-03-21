#include <stdio.h>

int main() {
    int n, i, j, space;
    
    // Taking input for the number of rows
    scanf("%d", &n);

    // Loop to print the pyramid
    for(i = 1; i <= n; i++) {  
        // Printing spaces for alignment
        for(space = 1; space <= n - i; space++) {  
            printf(" ");
        }
        
        // Printing numbers
        for(j = 1; j <= i; j++) {  
            printf("%d ", j);
        }
        
        printf("\n"); // Move to the next line
    }

    return 0;
}

