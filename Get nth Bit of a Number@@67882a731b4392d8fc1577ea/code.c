#include <stdio.h>

int main() {
    int number, position;
    scanf("%d %d", &number, &position);
    printf(" %d %d\n", position, (number >> position) & 1);
    
    return 0;
}

