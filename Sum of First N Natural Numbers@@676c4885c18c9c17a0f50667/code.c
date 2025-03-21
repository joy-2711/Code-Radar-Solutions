#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Taking input for the number
    scanf("%d", &n);

    // Loop to calculate the sum
    for(i = 1; i <= n; i++) {
        sum += i;  // Add each number to sum
    }

    // Output the sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
