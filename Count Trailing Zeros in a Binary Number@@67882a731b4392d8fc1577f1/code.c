#include <stdio.h>

int main() {
    int number;
    int count = 0;
    scanf("%u", &number);
    if (number == 0) {
        count = 32;
    } else {
        while ((number & 1) == 0) {
            count++;
            number >>= 1;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
