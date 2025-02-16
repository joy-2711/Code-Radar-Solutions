#include <stdio.h>

int main() {
    int number;   
    scanf("%u", &number);
    number = ~number;
    printf("%u\n", number);
    
    return 0;
}
