#include <stdio.h>

int main() {
    int n, i, j, start;
    
    // Taking input for the number of rows
    scanf("%d", &n);

    // Loop to print the alternating numeric triangle
    for(i = 1; i <= n; i++) {  
        // Determine the starting value (1 for odd rows, 0 for even rows)
        start = (i % 2 == 1) ? 1 : 0;
        
        for(j = 1; j <= i; j++) {  
            printf("%d ", start);
            // Toggle between 1 and 0
            start = 1 - start;
        }
        
        printf("\n"); // Move to the next line
    }

    return 0;
}
