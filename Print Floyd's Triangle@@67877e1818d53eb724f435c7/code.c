#include <stdio.h>

int main() {
    int n, i, j, num = 1;
    
    // Taking input for the number of rows
    scanf("%d", &n);

    // Loop to print Floyd's Triangle
    for(i = 1; i <= n; i++) {  
        for(j = 1; j <= i; j++) {  
            printf("%d ", num);
            num++;  // Increment number
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
