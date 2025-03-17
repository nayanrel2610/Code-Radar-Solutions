#include <stdio.h>

int main() {
    int number, position = 0;
    
    // Read input value
    scanf("%d", &number);
    
    // Find the position of the lowest set bit
    while ((number & 1) == 0) {
        number >>= 1;
        position++;
    }
    
    // Output the result
    printf("%d\n", position);
    
    return 0;
}
