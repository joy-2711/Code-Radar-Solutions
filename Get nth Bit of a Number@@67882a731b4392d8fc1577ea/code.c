#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    if (num & (1 << n)) {
        printf("%d",n);
    } else {
        printf("%d", n);
    }

    return 0;
}
