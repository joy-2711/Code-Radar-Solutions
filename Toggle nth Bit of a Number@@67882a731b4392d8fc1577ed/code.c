#include <stdio.h>

int main() {
    int number, position;
    printf("Enter the number and bit position (0-based): ");
    scanf("%d %d", &number, &position);
    number ^= (1 << position);
    printf("%d\n",number);
    
    return 0;
}
