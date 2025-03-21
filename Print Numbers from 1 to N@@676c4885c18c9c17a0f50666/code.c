#include <stdio.h>

int main() {
    int n, i;
    
    // Taking input for the number
    scanf("%d", &n);

    // Loop to print numbers from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Move to the next line

    return 0;
}
