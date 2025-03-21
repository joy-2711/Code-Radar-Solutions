#include <stdio.h>

int main() {
    int n, i, j;
    
    // Taking input for number of rows
    scanf("%d", &n);

    // Loop to print the reverse triangle
    for(i = n; i >= 1; i--) {  // Controls the number of rows
        for(j = 1; j <= i; j++) {  // Prints numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n"); // Moves to the next line
    }

    return 0;
}
