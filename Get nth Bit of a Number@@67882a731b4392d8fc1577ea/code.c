#include <stdio.h>

int main() {
    int num,num1, n;
    
    // Input the number and the bit position
    scanf("%d", &num);
    scanf("%d",&num1)
    scanf("%d", &n);

    // Check if nth bit is set
    if (num1 & (1 << n)) {
        printf(" %d \n", n);
    } else {
        printf(" %d \n", n);
    }

    return 0;
}
