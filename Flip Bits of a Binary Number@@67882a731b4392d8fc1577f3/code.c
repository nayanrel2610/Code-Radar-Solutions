#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Flip all bits using bitwise NOT (~) operator
    int flipped = ~num;

    printf("%d\n", flipped);
    return 0;
}
