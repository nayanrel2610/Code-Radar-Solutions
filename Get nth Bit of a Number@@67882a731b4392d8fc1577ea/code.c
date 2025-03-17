#include <stdio.h>

int main() {
    int number, n;
    
    // Read input values
    scanf("%d %d", &number, &n);
    
    // Extract the nth bit
    int bit = (number & (1 << n)) ? 1 : 0;
    
    // Output the result
    printf("%d\n", bit);
    
    return 0;
}
