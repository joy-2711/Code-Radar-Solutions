#include <stdio.h>

int main() {
    int n, i, j;
    
    // Taking input for the number of rows
    scanf("%d", &n);

    // Loop to print the reverse alphabet triangle
    for(i = n; i >= 1; i--) {  
        for(j = 1; j <= i; j++) {  
            printf("%c ", 'A' + j - 1);  // Print characters from 'A'
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
