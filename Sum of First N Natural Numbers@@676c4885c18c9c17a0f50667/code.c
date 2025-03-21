#include <stdio.h>

int main() {
    int n, sum;
    
    // Taking input for the number
    scanf("%d", &n);

    // Using formula to calculate sum
    sum = (n * (n + 1)) / 2;

    // Output the sum
    printf("%d\n", sum);

    return 0;
}

