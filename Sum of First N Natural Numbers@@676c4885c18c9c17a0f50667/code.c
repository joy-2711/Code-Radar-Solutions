#include <stdio.h>

int main() {
    int n, sum;
    
    // Taking input for the number
    scanf("%d", &n);

    // Using formula to calculate sum
    sum = (n * (n + 1)) / 2;

    // Output the sum
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

