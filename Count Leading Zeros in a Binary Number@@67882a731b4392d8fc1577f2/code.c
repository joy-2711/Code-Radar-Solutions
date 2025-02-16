#include <stdio.h>

int main() {
    int number;
    int count = 0;
    scanf("%u", &number);
    while ((number & (1 << 31)) == 0 && count < 32) {
        count++;
        number <<= 1;
    }
    printf("%d\n", count);
    
    return 0;
}
