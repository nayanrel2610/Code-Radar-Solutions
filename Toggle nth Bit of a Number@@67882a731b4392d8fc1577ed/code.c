#include <stdio.h>

int main() {
    int number, n;
    
    // Read input values
    scanf("%d %d", &number, &n);
    
    // Toggle the nth bit
    number = number ^ (1 << n);
    
    // Output the result
    printf("%d\n", number);
    
    return 0;
}

