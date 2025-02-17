#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime\n"); // 0 and 1 are not prime
    }
    else if (num == 2 || num == 3) {
        printf("Prime\n"); // 2 and 3 are prime numbers
    }
    else if (num % 2 == 0 || num % 3 == 0) {
        printf("Not Prime\n"); // Any number divisible by 2 or 3 (except 2 and 3) is not prime
    }
    else {
        printf("Prime\n"); // If not divisible by 2 or 3, assume it's prime
    }

    return 0;
}

