#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    if (num & (1 << n)) {
        printf("%d(1)\n",n);
    } else {
        printf("%d (0)\n", n);
    }

    return 0;
}
