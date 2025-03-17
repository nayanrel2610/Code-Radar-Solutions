#include <stdio.h>

void convertToBinary(int num) {
    int binary[32]; // Store binary digits
    int index = 0;  

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[index++] = num & 1; // Extract LSB
        num >>= 1; // Right shift by 1 (equivalent to num = num / 2)
    }

    // Print binary in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int number;
    scanf("%d", &number);

    convertToBinary(number);
    printf("\n");

    return 0;
}
