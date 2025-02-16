#include <stdio.h>

void decimal_to_binary(int n) {
    if (!n) { printf("0\n"); return; }
    for (int mask = 1 << 31; mask; mask >>= 1)
        if (n & mask || mask <= n) printf("%d", !!(n & mask));
    printf("\n");
}

int main() {
    int number;
    scanf("%u", &number);
    decimal_to_binary(number);
    return 0;
}
