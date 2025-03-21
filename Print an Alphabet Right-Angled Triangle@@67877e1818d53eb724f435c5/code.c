#include <stdio.h>

int main() {
    int n, i, j;
    
    // Taking input for the number of rows
    scanf("%d", &n);

    // Loop to print the triangle
    for(i = 1; i <= n; i++) {  
        for(j = 1; j <= i; j++) {  
            printf("%c ", 'A' + j - 1);  // Printing alphabets
        }
        printf("\n");
    }

    return 0;
}
