#include <stdio.h>

int main() {
    int number;   
    scanf("%u", &number);
    number = ~number;
    printf("%d\n", number);
    
    return 0;
}
