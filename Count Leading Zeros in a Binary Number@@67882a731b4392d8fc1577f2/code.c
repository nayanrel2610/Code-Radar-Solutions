#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);

    int leading_zeros = __builtin_clz(number);
    printf("%d\n", leading_zeros);

    return 0;
}
