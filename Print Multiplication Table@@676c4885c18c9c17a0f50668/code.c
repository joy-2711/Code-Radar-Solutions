#include <stdio.h>

int main() {
    int n;
    
    // Taking user input
    scanf("%d", &n);

    // Printing the multiplication table
    printf("%d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
