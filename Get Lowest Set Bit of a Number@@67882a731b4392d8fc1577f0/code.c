// Your code here...#include <stdio.h>

int main() {
    int number, position = 0;
    scanf("%d", &number);
    if (number == 0) {
        printf("No set bit found.\n");
        return 0;
    }
    while ((number & 1) == 0) {
        number >>= 1;
        position++;
    }
    printf("%d\n", position);
    
    return 0;
}
