#include <stdio.h>

int main() {
    int num, n;
    
    // Input the number and the bit position
    scanf("%d", &num);
    scanf("%d", &n);

    // Check if nth bit is set
    if (num & (1 << n)) {
        printf("Bit %d is Set (1)\n", n);
    } else {
        printf("Bit %d is Not Set (0)\n", n);
    }

    return 0;
}
